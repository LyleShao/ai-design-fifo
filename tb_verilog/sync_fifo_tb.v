// Verilog Testbench for Synchronous FIFO

`timescale 1ns/1ps

module sync_fifo_tb;

  // Parameters matching module parameters
  parameter DATA_WIDTH = 32;
  parameter FIFO_DEPTH = 16;
  parameter ALMOST_FULL_THRESHOLD = 12;
  parameter ALMOST_EMPTY_THRESHOLD = 4;
  parameter MEMORY_TYPE = "REGISTER";

  // Clock and reset
  reg clk = 0;
  reg rst = 1;

  // DUT interface
  reg wr_en;
  reg [DATA_WIDTH-1:0] wr_data;
  wire full;
  wire almost_full;

  reg rd_en;
  wire [DATA_WIDTH-1:0] rd_data;
  wire empty;
  wire almost_empty;

  wire [$clog2(FIFO_DEPTH+1)-1:0] wr_count;
  wire [$clog2(FIFO_DEPTH+1)-1:0] rd_count;

  // Instantiate DUT
  sync_fifo #(
    .DATA_WIDTH(DATA_WIDTH),
    .FIFO_DEPTH(FIFO_DEPTH),
    .ALMOST_FULL_THRESHOLD(ALMOST_FULL_THRESHOLD),
    .ALMOST_EMPTY_THRESHOLD(ALMOST_EMPTY_THRESHOLD),
    .MEMORY_TYPE(MEMORY_TYPE)
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
  integer test_pass_count = 0;
  integer test_fail_count = 0;
  integer test_total_count = 0;

  // Initialize signals
  initial begin
    wr_en = 0;
    rd_en = 0;
    wr_data = 0;
  end

  // Main test sequence
  initial begin
    $display("=========================================");
    $display("Starting Verilog Synchronous FIFO Testbench");
    $display("FIFO Configuration:");
    $display("  DATA_WIDTH = %0d", DATA_WIDTH);
    $display("  FIFO_DEPTH = %0d", FIFO_DEPTH);
    $display("  ALMOST_FULL_THRESHOLD = %0d", ALMOST_FULL_THRESHOLD);
    $display("  ALMOST_EMPTY_THRESHOLD = %0d", ALMOST_EMPTY_THRESHOLD);
    $display("  MEMORY_TYPE = %s", MEMORY_TYPE);
    $display("=========================================");

    // Apply reset
    apply_reset();

    // Run basic tests
    test_basic_write_read();
    test_full_condition();
    test_empty_condition();

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
  task apply_reset;
    begin
      $display("[%0t] Applying reset...", $time);
      rst = 1;
      repeat (2) @(posedge clk);
      #1;
      rst = 0;
      @(posedge clk);
      #1;
      $display("[%0t] Reset released.", $time);
    end
  endtask

  task test_basic_write_read;
    begin
      test_total_count = test_total_count + 1;
      $display("[%0t] Test: Basic write and read", $time);

      // Check initial empty condition
      if (empty !== 1'b1) begin
        $display("  ERROR: FIFO not empty after reset");
        test_fail_count = test_fail_count + 1;
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
        test_fail_count = test_fail_count + 1;
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
        test_fail_count = test_fail_count + 1;
        return;
      end

      // Check empty flag set again
      if (empty !== 1'b1) begin
        $display("  ERROR: FIFO not empty after read");
        test_fail_count = test_fail_count + 1;
        return;
      end

      $display("  PASS: Basic write/read test");
      test_pass_count = test_pass_count + 1;
    end
  endtask

  task test_full_condition;
    begin
      test_total_count = test_total_count + 1;
      $display("[%0t] Test: Full condition", $time);

      // Fill FIFO completely
      for (integer i = 0; i < FIFO_DEPTH; i = i + 1) begin
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
        test_fail_count = test_fail_count + 1;
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
      for (integer i = 0; i < FIFO_DEPTH; i = i + 1) begin
        @(posedge clk);
        #1;
        rd_en = 1;
        @(posedge clk);
        #1;
        rd_en = 0;
        if (rd_data !== (i + 1)) begin
          $display("  ERROR: Read data mismatch at position %0d. Expected %0d, got %0d",
                   i, i+1, rd_data);
          test_fail_count = test_fail_count + 1;
          return;
        end
      end

      // Check empty flag
      if (empty !== 1'b1) begin
        $display("  ERROR: FIFO not empty after reading all data");
        test_fail_count = test_fail_count + 1;
        return;
      end

      $display("  PASS: Full condition test");
      test_pass_count = test_pass_count + 1;
    end
  endtask

  task test_empty_condition;
    begin
      test_total_count = test_total_count + 1;
      $display("[%0t] Test: Empty condition", $time);

      // Ensure FIFO is empty
      if (empty !== 1'b1) begin
        $display("  ERROR: FIFO not empty at start of test");
        test_fail_count = test_fail_count + 1;
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
        test_fail_count = test_fail_count + 1;
        return;
      end

      $display("  PASS: Empty condition test");
      test_pass_count = test_pass_count + 1;
    end
  endtask

  // Monitor for debugging
  always @(posedge clk) begin
    if (wr_en && !full) begin
      $display("[%0t] WRITE: data=0x%h, count=%0d", $time, wr_data, wr_count);
    end
    if (rd_en && !empty) begin
      $display("[%0t] READ: data=0x%h, count=%0d", $time, rd_data, wr_count);
    end
  end

endmodule