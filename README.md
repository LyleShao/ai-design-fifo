# Synchronous FIFO RTL Implementation

A parameterizable synchronous FIFO (First-In, First-Out) buffer implemented in VHDL with SystemVerilog testbench.

## Project Structure

```
ASIC/
├── rtl/                    # VHDL RTL files
│   ├── sync_fifo_pkg.vhd   # Package with helper functions
│   ├── memory_array.vhd    # Memory storage component
│   └── sync_fifo.vhd       # Main FIFO entity
├── tb/                     # SystemVerilog testbench
│   ├── sync_fifo_tb.sv     # Main testbench
│   └── sync_fifo_test_pkg.sv # Test package
├── scripts/                # Simulation scripts
│   ├── compile.tcl         # Compilation script
│   └── run_sim.tcl         # Simulation script
└── README.md               # This file
```

## Features

### Core Features
- **Parameterizable width and depth**: Configurable data width and FIFO depth
- **Full/Empty flags**: Standard FIFO status indicators
- **Almost Full/Empty flags**: Programmable threshold-based flags for flow control
- **Word count outputs**: Current fill level visible through output ports
- **Single clock domain**: Synchronous design for easy timing closure
- **Memory type selection**: Register-based or BRAM-based memory (through attributes)

### VHDL RTL (`sync_fifo.vhd`)

**Generics:**
- `G_DATA_WIDTH`: Data bus width (default: 32)
- `G_FIFO_DEPTH`: FIFO depth (default: 16, power of two recommended)
- `G_ALMOST_FULL_THRESHOLD`: Almost full threshold (default: 12)
- `G_ALMOST_EMPTY_THRESHOLD`: Almost empty threshold (default: 4)
- `G_MEMORY_TYPE`: "REGISTER" or "BRAM" (default: "REGISTER")

**Ports:**
- **Clock/Reset**: `clk_i`, `rst_i`
- **Write Interface**: `wr_en_i`, `wr_data_i`, `full_o`, `almost_full_o`
- **Read Interface**: `rd_en_i`, `rd_data_o`, `empty_o`, `almost_empty_o`
- **Status Outputs**: `wr_count_o`, `rd_count_o` (current fill level)

### SystemVerilog Testbench (`sync_fifo_tb.sv`)

**Test Coverage:**
1. **Basic write/read**: Single data item verification
2. **Full condition**: Fill FIFO completely, verify full flag
3. **Empty condition**: Read from empty FIFO, verify empty flag
4. **Simultaneous R/W**: Concurrent read and write operations
5. **Almost flags**: Threshold-based flag testing
6. **Wrap-around**: Pointer wrap-around verification
7. **Random operations**: 1000 random operations with model checking

## Implementation Details

### Memory Storage
- **Register-based**: Uses VHDL array for small FIFOs (< 64 depth)
- **BRAM-based**: Uses vendor attributes for block RAM inference
- Dual-port synchronous memory with registered outputs

### Pointer Management
- Binary read/write pointers with modulo wrap
- No Gray coding needed (single clock domain)
- Full detection: `(wr_ptr + 1) mod DEPTH == rd_ptr` when writing
- Empty detection: `wr_ptr == rd_ptr`

### Flag Generation
- **Full**: When fill count equals FIFO depth
- **Empty**: When fill count equals zero
- **Almost Full**: When fill count >= threshold
- **Almost Empty**: When fill count <= threshold

## Usage

### 1. Instantiation in VHDL

```vhdl
library work;
use work.sync_fifo_pkg.all;

entity top is
  port (
    clk   : in  std_logic;
    rst   : in  std_logic;
    -- ... other ports
  );
end entity;

architecture rtl of top is
  signal fifo_wr_en   : std_logic;
  signal fifo_wr_data : std_logic_vector(31 downto 0);
  signal fifo_full    : std_logic;
  -- ... other signals
begin

  fifo_inst : entity work.sync_fifo
    generic map (
      G_DATA_WIDTH => 32,
      G_FIFO_DEPTH => 16,
      G_ALMOST_FULL_THRESHOLD  => 12,
      G_ALMOST_EMPTY_THRESHOLD => 4,
      G_MEMORY_TYPE => "REGISTER"
    )
    port map (
      clk_i          => clk,
      rst_i          => rst,
      wr_en_i        => fifo_wr_en,
      wr_data_i      => fifo_wr_data,
      full_o         => fifo_full,
      almost_full_o  => open,  -- Optional
      rd_en_i        => fifo_rd_en,
      rd_data_o      => fifo_rd_data,
      empty_o        => fifo_empty,
      almost_empty_o => open,  -- Optional
      wr_count_o     => open,  -- Optional
      rd_count_o     => open   -- Optional
    );

end architecture;
```

### 2. Simulation (When Tools Available)

**Using ModelSim/Questa:**

```bash
# Navigate to scripts directory
cd scripts

# Compile design
vsim -c -do compile.tcl

# Run simulation
vsim -c -do run_sim.tcl
```

**Manual compilation order:**
1. `sync_fifo_pkg.vhd` (VHDL package)
2. `memory_array.vhd` (Memory component)
3. `sync_fifo.vhd` (Main FIFO)
4. `sync_fifo_test_pkg.sv` (SV test package)
5. `sync_fifo_tb.sv` (Testbench)

### 3. Synthesis Considerations

**Register-based implementation:**
- Good for small FIFOs (< 64 depth)
- Uses flip-flops/LUTs
- No block RAM resources

**BRAM-based implementation:**
- Set `G_MEMORY_TYPE` to "BRAM"
- Vendor-specific attributes may need adjustment
- Consult synthesis tool documentation for proper RAM inference

## Design Notes

### Parameter Validation
- FIFO depth must be >= 2
- Almost thresholds must be < FIFO depth
- Power-of-two depth recommended (warning if not)
- Validation occurs at elaboration time (simulation)

### Reset Behavior
- All pointers reset to zero
- All flags cleared (empty=1, full=0)
- Memory contents not guaranteed after reset

### Timing Considerations
- Write data captured on rising clock edge with `wr_en_i`
- Read data available on next clock cycle after `rd_en_i`
- Flags updated synchronously with clock

## Testbench Features

### Self-checking
- Compares DUT behavior against software model
- Checks all status flags for correctness
- Verifies data integrity through entire FIFO

### Random Testing
- 1000 random operations
- Model-based checking for all flags
- Stress tests corner cases

### Debug Output
- Real-time display of write/read operations
- Fill count monitoring
- Error reporting with timestamps

## File Descriptions

### RTL Files
- **`sync_fifo_pkg.vhd`**: Package with `log2`, `is_power_of_two` functions and constants
- **`memory_array.vhd`**: Memory storage with configurable implementation (registers/BRAM)
- **`sync_fifo.vhd`**: Main FIFO with pointer management and flag generation

### Testbench Files
- **`sync_fifo_tb.sv`**: Comprehensive testbench with 7 test cases
- **`sync_fifo_test_pkg.sv`**: Shared tasks and configuration structures

### Scripts
- **`compile.tcl`**: Mixed-language compilation script
- **`run_sim.tcl`**: Simulation setup with wave configuration

## Extending the Design

### Adding Features
1. **Different clock domains**: Convert to asynchronous FIFO with Gray coding
2. **Programmable thresholds**: Make thresholds dynamic rather than generic
3. **Error reporting**: Add parity/ECC for data integrity
4. **Performance counters**: Track throughput and latency

### Customizing for Specific Technology
1. Update `memory_array.vhd` with vendor-specific RAM attributes
2. Adjust `sync_fifo_pkg.vhd` constants for typical use cases
3. Modify testbench for specific verification requirements

## License

This implementation follows standard ASIC design practices and can be adapted for project-specific needs.