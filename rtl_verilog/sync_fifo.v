// Synchronous FIFO with parameterizable depth and width
// Single clock domain, registered outputs

module sync_fifo #(
  parameter DATA_WIDTH = 32,
  parameter FIFO_DEPTH = 16,
  parameter ALMOST_FULL_THRESHOLD  = 12,
  parameter ALMOST_EMPTY_THRESHOLD = 4,
  parameter MEMORY_TYPE = "REGISTER"  // "REGISTER" or "BRAM"
) (
  // Clock and Reset
  input  wire                     clk_i,
  input  wire                     rst_i,

  // Write Interface
  input  wire                     wr_en_i,
  input  wire [DATA_WIDTH-1:0]    wr_data_i,
  output wire                     full_o,
  output wire                     almost_full_o,

  // Read Interface
  input  wire                     rd_en_i,
  output wire [DATA_WIDTH-1:0]    rd_data_o,
  output wire                     empty_o,
  output wire                     almost_empty_o,

  // Status Outputs
  output wire [ADDR_WIDTH:0]      wr_count_o,  // Need +1 bit to count 0..DEPTH
  output wire [ADDR_WIDTH:0]      rd_count_o
);

  // Local parameters
  localparam ADDR_WIDTH = $clog2(FIFO_DEPTH);
  localparam COUNT_WIDTH = ADDR_WIDTH + 1;  // Need +1 to represent 0..DEPTH

  // Internal signals
  reg [ADDR_WIDTH-1:0] wr_ptr;
  reg [ADDR_WIDTH-1:0] rd_ptr;
  reg [ADDR_WIDTH-1:0] wr_ptr_next;
  reg [ADDR_WIDTH-1:0] rd_ptr_next;

  reg [COUNT_WIDTH-1:0] fifo_count;
  reg [COUNT_WIDTH-1:0] fifo_count_next;

  wire wr_en_valid;
  wire rd_en_valid;

  // Memory array
  // Conditional BRAM attribute based on MEMORY_TYPE parameter
  generate
    if (MEMORY_TYPE == "BRAM") begin
      // Xilinx attribute for block RAM inference
      (* ram_style = "block" *) reg [DATA_WIDTH-1:0] memory [0:FIFO_DEPTH-1];
    end else begin
      // Register-based (distributed RAM or registers)
      reg [DATA_WIDTH-1:0] memory [0:FIFO_DEPTH-1];
    end
  endgenerate

  // Initialize memory (simulation only)
  // synthesis translate_off
  integer i;
  initial begin
    for (i = 0; i < FIFO_DEPTH; i = i + 1) begin
      memory[i] = {DATA_WIDTH{1'b0}};
    end
  end
  // synthesis translate_on

  // Write and read enable validation (cannot write when full, read when empty)
  assign wr_en_valid = wr_en_i && !full_o;
  assign rd_en_valid = rd_en_i && !empty_o;

  // Pointer update logic with modulo wrap
  always @(*) begin
    wr_ptr_next = wr_ptr;
    rd_ptr_next = rd_ptr;

    if (wr_en_valid) begin
      if (wr_ptr == FIFO_DEPTH-1)
        wr_ptr_next = 0;
      else
        wr_ptr_next = wr_ptr + 1;
    end

    if (rd_en_valid) begin
      if (rd_ptr == FIFO_DEPTH-1)
        rd_ptr_next = 0;
      else
        rd_ptr_next = rd_ptr + 1;
    end
  end

  // FIFO count logic
  always @(*) begin
    fifo_count_next = fifo_count;

    if (wr_en_valid && !rd_en_valid) begin
      // Write only
      fifo_count_next = fifo_count + 1;
    end else if (!wr_en_valid && rd_en_valid) begin
      // Read only
      fifo_count_next = fifo_count - 1;
    end
    // If both or none, count stays the same
  end

  // Flag generation (combinatorial)
  assign full_o  = (fifo_count == FIFO_DEPTH);
  assign empty_o = (fifo_count == 0);
  assign almost_full_o  = (fifo_count >= ALMOST_FULL_THRESHOLD);
  assign almost_empty_o = (fifo_count <= ALMOST_EMPTY_THRESHOLD);

  // Count outputs (registered via fifo_count)
  assign wr_count_o = fifo_count;
  assign rd_count_o = fifo_count;

  // Sequential process
  always @(posedge clk_i) begin
    if (rst_i) begin
      // Reset
      wr_ptr <= 0;
      rd_ptr <= 0;
      fifo_count <= 0;
    end else begin
      // Update pointers and count
      wr_ptr <= wr_ptr_next;
      rd_ptr <= rd_ptr_next;
      fifo_count <= fifo_count_next;
    end
  end

  // Memory write process
  always @(posedge clk_i) begin
    if (wr_en_valid) begin
      memory[wr_ptr] <= wr_data_i;
    end
  end

  // Memory read process (synchronous read)
  always @(posedge clk_i) begin
    rd_data_o <= memory[rd_ptr];
  end


endmodule