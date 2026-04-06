# TCL compilation script for mixed-language simulation
# Supports ModelSim/QuestaSim

# Create work library
vlib work
vmap work work

# Compile VHDL files
echo "Compiling VHDL files..."

# Package first
vcom -2008 -work work ../rtl/sync_fifo_pkg.vhd

# Memory array
vcom -2008 -work work ../rtl/memory_array.vhd

# Main FIFO entity
vcom -2008 -work work ../rtl/sync_fifo.vhd

echo "VHDL compilation complete."

# Compile SystemVerilog files
echo "Compiling SystemVerilog files..."

# Test package
vlog -sv -work work ../tb/sync_fifo_test_pkg.sv

# Testbench
vlog -sv -work work ../tb/sync_fifo_tb.sv

echo "SystemVerilog compilation complete."

echo "Compilation successful!"