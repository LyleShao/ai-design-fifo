// SystemVerilog Test Package for Synchronous FIFO
// Contains shared tasks, functions, and type definitions

package sync_fifo_test_pkg;

  // Configuration structure
  typedef struct {
    int data_width;
    int fifo_depth;
    int almost_full_threshold;
    int almost_empty_threshold;
    string memory_type;
  } fifo_config_t;

  // Test result structure
  typedef struct {
    int total_tests;
    int passed_tests;
    int failed_tests;
    bit all_passed;
  } test_results_t;

  // Function to create default configuration
  function fifo_config_t get_default_config();
    get_default_config.data_width = 32;
    get_default_config.fifo_depth = 16;
    get_default_config.almost_full_threshold = 12;
    get_default_config.almost_empty_threshold = 4;
    get_default_config.memory_type = "REGISTER";
  endfunction

  // Function to display configuration
  function void display_config(fifo_config_t cfg);
    $display("FIFO Configuration:");
    $display("  DATA_WIDTH = %0d", cfg.data_width);
    $display("  FIFO_DEPTH = %0d", cfg.fifo_depth);
    $display("  ALMOST_FULL_THRESHOLD = %0d", cfg.almost_full_threshold);
    $display("  ALMOST_EMPTY_THRESHOLD = %0d", cfg.almost_empty_threshold);
    $display("  MEMORY_TYPE = %s", cfg.memory_type);
  endfunction

  // Task to wait for clock cycles
  task automatic wait_cycles(int cycles);
    repeat (cycles) @(posedge $root.sync_fifo_tb.clk);
  endtask

  // Task to apply reset
  task automatic apply_reset();
    $root.sync_fifo_tb.rst = 1;
    wait_cycles(2);
    $root.sync_fifo_tb.rst = 0;
    wait_cycles(1);
  endtask

  // Task to write data to FIFO
  task automatic write_data(logic [31:0] data);
    while ($root.sync_fifo_tb.full) @(posedge $root.sync_fifo_tb.clk);
    $root.sync_fifo_tb.wr_en = 1;
    $root.sync_fifo_tb.wr_data = data;
    @(posedge $root.sync_fifo_tb.clk);
    $root.sync_fifo_tb.wr_en = 0;
    $root.sync_fifo_tb.wr_data = 0;
  endtask

  // Task to read data from FIFO
  task automatic read_data(output logic [31:0] data);
    while ($root.sync_fifo_tb.empty) @(posedge $root.sync_fifo_tb.clk);
    $root.sync_fifo_tb.rd_en = 1;
    @(posedge $root.sync_fifo_tb.clk);
    data = $root.sync_fifo_tb.rd_data;
    $root.sync_fifo_tb.rd_en = 0;
  endtask

  // Task to check FIFO empty
  task automatic check_empty(bit expected);
    if ($root.sync_fifo_tb.empty !== expected) begin
      $display("ERROR: empty flag mismatch. Expected %0d, got %0d",
               expected, $root.sync_fifo_tb.empty);
      $finish;
    end
  endtask

  // Task to check FIFO full
  task automatic check_full(bit expected);
    if ($root.sync_fifo_tb.full !== expected) begin
      $display("ERROR: full flag mismatch. Expected %0d, got %0d",
               expected, $root.sync_fifo_tb.full);
      $finish;
    end
  endtask

endpackage