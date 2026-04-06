// SystemVerilog Testbench for Synchronous FIFO
// Instantiates VHDL RTL

`timescale 1ns/1ps

module sync_fifo_tb;

  // Parameters matching VHDL generics
  parameter DATA_WIDTH = 32;
  parameter FIFO_DEPTH = 16;
  parameter ALMOST_FULL_THRESHOLD = 12;
  parameter ALMOST_EMPTY_THRESHOLD = 4;
  parameter MEMORY_TYPE = "REGISTER";

  // Clock and reset
  logic clk = 0;
  logic rst = 1;

  // DUT interface
  logic wr_en;
  logic [DATA_WIDTH-1:0] wr_data;
  logic full;
  logic almost_full;

  logic rd_en;
  logic [DATA_WIDTH-1:0] rd_data;
  logic empty;
  logic almost_empty;

  logic [$clog2(FIFO_DEPTH+1)-1:0] wr_count;
  logic [$clog2(FIFO_DEPTH+1)-1:0] rd_count;

  // VHDL DUT instantiation
  sync_fifo #(
    .G_DATA_WIDTH(DATA_WIDTH),
    .G_FIFO_DEPTH(FIFO_DEPTH),
    .G_ALMOST_FULL_THRESHOLD(ALMOST_FULL_THRESHOLD),
    .G_ALMOST_EMPTY_THRESHOLD(ALMOST_EMPTY_THRESHOLD),
    .G_MEMORY_TYPE(MEMORY_TYPE)
  ) dut (
    .clk_i(clk),
    .rst_i(rst),
    .wr_en_i(wr_en),
    .wr_data_i(wr_data),
    .full_o(full),
    .almost_full_o(almost_full),
    .rd_en_i(rd_en),
    .rd_data_o(rd_data),
    .empty_o(empty),
    .almost_empty_o(almost_empty),
    .wr_count_o(wr_count),
    .rd_count_o(rd_count)
  );

  // Clock generation
  always #5 clk = ~clk;  // 100 MHz clock (10 ns period)

  // Test control
  int test_pass_count = 0;
  int test_fail_count = 0;
  int test_total_count = 0;

  // Initialize signals
  initial begin
    wr_en = 0;
    rd_en = 0;
    wr_data = 0;
  end

  // Main test sequence
  initial begin
    $display("=========================================");
    $display("Starting Synchronous FIFO Testbench");
    $display("FIFO Configuration:");
    $display("  DATA_WIDTH = %0d", DATA_WIDTH);
    $display("  FIFO_DEPTH = %0d", FIFO_DEPTH);
    $display("  ALMOST_FULL_THRESHOLD = %0d", ALMOST_FULL_THRESHOLD);
    $display("  ALMOST_EMPTY_THRESHOLD = %0d", ALMOST_EMPTY_THRESHOLD);
    $display("  MEMORY_TYPE = %s", MEMORY_TYPE);
    $display("=========================================");

    // Apply reset
    apply_reset();

    // Run test suite
    test_basic_write_read();
    test_full_condition();
    test_empty_condition();
    test_simultaneous_rw();
    test_almost_flags();
    test_wrap_around();
    test_random_operations();

    // Summary
    $display("=========================================");
    $display("Test Summary:");
    $display("  Total tests: %0d", test_total_count);
    $display("  Passed: %0d", test_pass_count);
    $display("  Failed: %0d", test_fail_count);
    if (test_fail_count == 0) begin
      $display("ALL TESTS PASSED!");
    end else begin
      $display("SOME TESTS FAILED!");
    end
    $display("=========================================");

    // Finish simulation
    #100;
    $finish;
  end

  // Test tasks
  task apply_reset();
    begin
      $display("[%0t] Applying reset...", $time);
      rst = 1;
      @(posedge clk);
      #1;
      rst = 0;
      @(posedge clk);
      #1;
      $display("[%0t] Reset released.", $time);
    end
  endtask

  task test_basic_write_read();
    begin
      test_total_count++;
      $display("[%0t] Test: Basic write and read", $time);

      // Check initial empty condition
      if (empty !== 1'b1) begin
        $display("  ERROR: FIFO not empty after reset");
        test_fail_count++;
        return;
      end

      // Write one data item
      @(posedge clk);
      #1;
      wr_en = 1;
      wr_data = 32'hA5A5A5A5;
      @(posedge clk);
      #1;
      wr_en = 0;

      // Check empty flag cleared
      if (empty !== 1'b0) begin
        $display("  ERROR: FIFO still empty after write");
        test_fail_count++;
        return;
      end

      // Read data back
      @(posedge clk);
      #1;
      rd_en = 1;
      @(posedge clk);
      #1;
      rd_en = 0;

      // Check data matches
      if (rd_data !== 32'hA5A5A5A5) begin
        $display("  ERROR: Read data mismatch. Expected 0xA5A5A5A5, got 0x%h", rd_data);
        test_fail_count++;
        return;
      end

      // Check empty flag set again
      if (empty !== 1'b1) begin
        $display("  ERROR: FIFO not empty after read");
        test_fail_count++;
        return;
      end

      $display("  PASS: Basic write/read test");
      test_pass_count++;
    end
  endtask

  task test_full_condition();
    begin
      test_total_count++;
      $display("[%0t] Test: Full condition", $time);

      // Fill FIFO completely
      for (int i = 0; i < FIFO_DEPTH; i++) begin
        @(posedge clk);
        #1;
        wr_en = 1;
        wr_data = i + 1;  // Write incrementing values
        @(posedge clk);
        #1;
        wr_en = 0;
      end

      // Check full flag
      if (full !== 1'b1) begin
        $display("  ERROR: FIFO not full after %0d writes", FIFO_DEPTH);
        test_fail_count++;
        return;
      end

      // Try one more write (should be ignored)
      @(posedge clk);
      #1;
      wr_en = 1;
      wr_data = 32'hDEADBEEF;
      @(posedge clk);
      #1;
      wr_en = 0;

      // Read all data back and verify
      for (int i = 0; i < FIFO_DEPTH; i++) begin
        @(posedge clk);
        #1;
        rd_en = 1;
        @(posedge clk);
        #1;
        rd_en = 0;
        if (rd_data !== (i + 1)) begin
          $display("  ERROR: Read data mismatch at position %0d. Expected %0d, got %0d",
                   i, i+1, rd_data);
          test_fail_count++;
          return;
        end
      end

      // Check empty flag
      if (empty !== 1'b1) begin
        $display("  ERROR: FIFO not empty after reading all data");
        test_fail_count++;
        return;
      end

      $display("  PASS: Full condition test");
      test_pass_count++;
    end
  endtask

  task test_empty_condition();
    begin
      test_total_count++;
      $display("[%0t] Test: Empty condition", $time);

      // Ensure FIFO is empty
      if (empty !== 1'b1) begin
        $display("  ERROR: FIFO not empty at start of test");
        test_fail_count++;
        return;
      end

      // Try to read from empty FIFO (should be ignored)
      @(posedge clk);
      #1;
      rd_en = 1;
      @(posedge clk);
      #1;
      rd_en = 0;

      // Write a value then read it to ensure FIFO works
      @(posedge clk);
      #1;
      wr_en = 1;
      wr_data = 32'h12345678;
      @(posedge clk);
      #1;
      wr_en = 0;

      @(posedge clk);
      #1;
      rd_en = 1;
      @(posedge clk);
      #1;
      rd_en = 0;

      if (rd_data !== 32'h12345678) begin
        $display("  ERROR: Data mismatch after empty test");
        test_fail_count++;
        return;
      end

      $display("  PASS: Empty condition test");
      test_pass_count++;
    end
  endtask

  task test_simultaneous_rw();
    begin
      test_total_count++;
      $display("[%0t] Test: Simultaneous read/write", $time);

      // Fill FIFO half way
      for (int i = 0; i < FIFO_DEPTH/2; i++) begin
        @(posedge clk);
        #1;
        wr_en = 1;
        wr_data = i * 2;
        @(posedge clk);
        #1;
        wr_en = 0;
      end

      // Perform simultaneous read/write for several cycles
      for (int i = 0; i < FIFO_DEPTH; i++) begin
        @(posedge clk);
        #1;
        wr_en = 1;
        rd_en = 1;
        wr_data = (FIFO_DEPTH/2 + i) * 2;
        @(posedge clk);
        #1;
        wr_en = 0;
        rd_en = 0;
      end

      // Read remaining data
      for (int i = 0; i < FIFO_DEPTH/2; i++) begin
        @(posedge clk);
        #1;
        rd_en = 1;
        @(posedge clk);
        #1;
        rd_en = 0;
      end

      // Should be empty now
      if (empty !== 1'b1) begin
        $display("  ERROR: FIFO not empty after simultaneous R/W test");
        test_fail_count++;
        return;
      end

      $display("  PASS: Simultaneous read/write test");
      test_pass_count++;
    end
  endtask

  task test_almost_flags();
    begin
      test_total_count++;
      $display("[%0t] Test: Almost full/empty flags", $time);

      // Clear FIFO
      @(posedge clk);
      #1;
      rst = 1;
      @(posedge clk);
      #1;
      rst = 0;
      @(posedge clk);
      #1;

      // Write until almost full threshold
      for (int i = 0; i < ALMOST_FULL_THRESHOLD - 1; i++) begin
        @(posedge clk);
        #1;
        wr_en = 1;
        wr_data = i;
        @(posedge clk);
        #1;
        wr_en = 0;
        if (almost_full === 1'b1) begin
          $display("  ERROR: Almost full flag set too early at count %0d", i+1);
          test_fail_count++;
          return;
        end
      end

      // Write one more to reach threshold
      @(posedge clk);
      #1;
      wr_en = 1;
      wr_data = ALMOST_FULL_THRESHOLD - 1;
      @(posedge clk);
      #1;
      wr_en = 0;

      // Check almost full flag
      if (almost_full !== 1'b1) begin
        $display("  ERROR: Almost full flag not set at threshold");
        test_fail_count++;
        return;
      end

      // Read until almost empty threshold
      for (int i = 0; i < ALMOST_FULL_THRESHOLD - ALMOST_EMPTY_THRESHOLD; i++) begin
        @(posedge clk);
        #1;
        rd_en = 1;
        @(posedge clk);
        #1;
        rd_en = 0;
        if (almost_full === 1'b1 && i < (ALMOST_FULL_THRESHOLD - ALMOST_EMPTY_THRESHOLD - 1)) begin
          $display("  ERROR: Almost full flag not cleared after reads");
          test_fail_count++;
          return;
        end
      end

      // Check almost empty flag
      if (almost_empty !== 1'b1) begin
        $display("  ERROR: Almost empty flag not set at threshold");
        test_fail_count++;
        return;
      end

      // Read remaining
      for (int i = 0; i < ALMOST_EMPTY_THRESHOLD; i++) begin
        @(posedge clk);
        #1;
        rd_en = 1;
        @(posedge clk);
        #1;
        rd_en = 0;
      end

      $display("  PASS: Almost flags test");
      test_pass_count++;
    end
  endtask

  task test_wrap_around();
    begin
      test_total_count++;
      $display("[%0t] Test: Pointer wrap-around", $time);

      // Fill and empty FIFO multiple times to test wrap-around
      repeat (3) begin
        // Fill FIFO
        for (int i = 0; i < FIFO_DEPTH; i++) begin
          @(posedge clk);
          #1;
          wr_en = 1;
          wr_data = i + 100;
          @(posedge clk);
          #1;
          wr_en = 0;
        end

        // Empty FIFO
        for (int i = 0; i < FIFO_DEPTH; i++) begin
          @(posedge clk);
          #1;
          rd_en = 1;
          @(posedge clk);
          #1;
          rd_en = 0;
          if (rd_data !== (i + 100)) begin
            $display("  ERROR: Data mismatch during wrap-around test");
            test_fail_count++;
            return;
          end
        end
      end

      $display("  PASS: Wrap-around test");
      test_pass_count++;
    end
  endtask

  task test_random_operations();
    begin
      test_total_count++;
      $display("[%0t] Test: Random operations", $time);

      int expected_data[$];
      int wr_val = 0;

      // Perform random operations
      for (int i = 0; i < 1000; i++) begin
        @(posedge clk);
        #1;

        // Randomly decide to write, read, or both
        wr_en = ($urandom_range(0, 99) < 40) && !full;  // 40% chance to write if not full
        rd_en = ($urandom_range(0, 99) < 40) && !empty; // 40% chance to read if not empty

        if (wr_en) begin
          wr_data = wr_val;
          expected_data.push_back(wr_val);
          wr_val++;
        end

        if (rd_en) begin
          if (expected_data.size() == 0) begin
            $display("  ERROR: Attempted to read from empty FIFO (model mismatch)");
            test_fail_count++;
            return;
          end
          if (rd_data !== expected_data[0]) begin
            $display("  ERROR: Data mismatch during random test. Expected %0d, got %0d",
                     expected_data[0], rd_data);
            test_fail_count++;
            return;
          end
          void'(expected_data.pop_front());
        end

        // Check flags match model
        if (full !== (expected_data.size() == FIFO_DEPTH)) begin
          $display("  ERROR: Full flag mismatch. Model size = %0d, full = %0d",
                   expected_data.size(), full);
          test_fail_count++;
          return;
        end

        if (empty !== (expected_data.size() == 0)) begin
          $display("  ERROR: Empty flag mismatch. Model size = %0d, empty = %0d",
                   expected_data.size(), empty);
          test_fail_count++;
          return;
        end

        if (almost_full !== (expected_data.size() >= ALMOST_FULL_THRESHOLD)) begin
          $display("  ERROR: Almost full flag mismatch. Model size = %0d, almost_full = %0d",
                   expected_data.size(), almost_full);
          test_fail_count++;
          return;
        end

        if (almost_empty !== (expected_data.size() <= ALMOST_EMPTY_THRESHOLD)) begin
          $display("  ERROR: Almost empty flag mismatch. Model size = %0d, almost_empty = %0d",
                   expected_data.size(), almost_empty);
          test_fail_count++;
          return;
        end
      end

      $display("  PASS: Random operations test (%0d operations)", 1000);
      test_pass_count++;
    end
  endtask

  // Monitor for debugging
  always @(posedge clk) begin
    if (wr_en && !full) begin
      $display("[%0t] WRITE: data=0x%h, count=%0d", $time, wr_data, wr_count);
    end
    if (rd_en && !empty) begin
      $display("[%0t] READ: data=0x%h, count=%0d", $time, rd_data, rd_count);
    end
  end

endmodule