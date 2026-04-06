# TCL simulation run script

# Load compiled design
vsim -voptargs=+acc work.sync_fifo_tb

# Add signals to wave window
add wave -noupdate -divider "Clock and Reset"
add wave -noupdate -color yellow /sync_fifo_tb/clk
add wave -noupdate -color yellow /sync_fifo_tb/rst

add wave -noupdate -divider "Write Interface"
add wave -noupdate -color cyan /sync_fifo_tb/wr_en
add wave -noupdate -color cyan -radix hexadecimal /sync_fifo_tb/wr_data
add wave -noupdate -color magenta /sync_fifo_tb/full
add wave -noupdate -color magenta /sync_fifo_tb/almost_full

add wave -noupdate -divider "Read Interface"
add wave -noupdate -color green /sync_fifo_tb/rd_en
add wave -noupdate -color green -radix hexadecimal /sync_fifo_tb/rd_data
add wave -noupdate -color magenta /sync_fifo_tb/empty
add wave -noupdate -color magenta /sync_fifo_tb/almost_empty

add wave -noupdate -divider "Status"
add wave -noupdate -color white -radix decimal /sync_fifo_tb/wr_count
add wave -noupdate -color white -radix decimal /sync_fifo_tb/rd_count

add wave -noupdate -divider "DUT Internals"
add wave -noupdate -color gray -radix decimal /sync_fifo_tb/dut/wr_ptr
add wave -noupdate -color gray -radix decimal /sync_fifo_tb/dut/rd_ptr
add wave -noupdate -color gray -radix decimal /sync_fifo_tb/dut/fifo_count

# Configure wave window
configure wave -signalnamewidth 1
configure wave -timelineunits ns

# Run simulation
echo "Starting simulation..."
run -all

echo "Simulation completed."

# If simulation stops early, keep window open
if {[examine /sync_fifo_tb/test_fail_count] > 0} {
  echo "Some tests failed. Check wave window for details."
} else {
  echo "All tests passed!"
}