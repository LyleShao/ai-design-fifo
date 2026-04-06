# Verilator Makefile for Synchronous FIFO Simulation
# Top-level testbench: sync_fifo_tb (in tb_verilog/sync_fifo_tb.v)
# Design: sync_fifo (in rtl_verilog/sync_fifo.v)

# -------------------------------------------------------------------
# Configuration
# -------------------------------------------------------------------
TOP_MODULE = sync_fifo_tb
VERILATOR = verilator
VERILATOR_FLAGS = \
	--binary \
	--top-module $(TOP_MODULE) \
	--Wall \
	--Wno-fatal \
	--trace \
	--coverage \
	--assert

LINT_FLAGS = \
	--lint-only \
	--top-module $(TOP_MODULE) \
	--Wall \
	--Wno-fatal

# Source files
RTL_SRC = rtl_verilog/sync_fifo.v
TB_SRC = tb_verilog/sync_fifo_tb.v
ALL_SRC = $(RTL_SRC) $(TB_SRC)

# Build directory
BUILD_DIR = build
VERILATOR_OUT = $(BUILD_DIR)/verilator

# Executable name
EXE = $(VERILATOR_OUT)/V$(TOP_MODULE)

# -------------------------------------------------------------------
# Targets
# -------------------------------------------------------------------
.PHONY: all sim run lint compile clean help wave sim-wave

all: sim

# Run simulation (build and execute)
sim: compile
	@echo "Running simulation..."
	cd $(BUILD_DIR) && ./verilator/V$(TOP_MODULE)

# View waveform with gtkwave
wave:
	@echo "Opening waveform with gtkwave..."
	cd $(BUILD_DIR) && gtkwave sync_fifo_waveform.vcd &

# Run simulation and open waveform
sim-wave: sim wave

# Build executable using Verilator
compile: $(EXE)

$(EXE): $(ALL_SRC) | $(BUILD_DIR)
	@echo "Building with Verilator..."
	$(VERILATOR) $(VERILATOR_FLAGS) \
		--Mdir $(VERILATOR_OUT) \
		$(ALL_SRC)

# Lint only
lint: $(ALL_SRC)
	@echo "Linting with Verilator..."
	$(VERILATOR) $(LINT_FLAGS) \
		$(ALL_SRC)

# Create build directory
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Clean build artifacts
clean:
	rm -rf $(BUILD_DIR)

# Show help
help:
	@echo "Verilator simulation for Synchronous FIFO"
	@echo ""
	@echo "Available targets:"
	@echo "  make sim      - Build and run simulation (default)"
	@echo "  make sim-wave - Build, run simulation, and open waveform"
	@echo "  make wave     - Open waveform with gtkwave (requires VCD file)"
	@echo "  make compile  - Build executable without running"
	@echo "  make lint     - Run lint checks only"
	@echo "  make clean    - Remove build directory"
	@echo "  make help     - Show this help"
	@echo ""
	@echo "Configuration:"
	@echo "  TOP_MODULE = $(TOP_MODULE)"
	@echo "  RTL_SRC = $(RTL_SRC)"
	@echo "  TB_SRC = $(TB_SRC)"
	@echo "  BUILD_DIR = $(BUILD_DIR)"