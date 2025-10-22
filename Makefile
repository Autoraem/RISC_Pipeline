# Top-level Makefile

# Filelist
VERILATOR_F = sim/verilator/verilator.f
# Testbench
TESTBENCH = rtl/alu.sv
# Output directory for generated files
OBJ_DIR = sim/verilator/obj_dir
# Top module
TOP_MODULE ?= alu_tb
TARGET = V$(TOP_MODULE)
# Waveform folder
WAVE_DIR = sim/waves

# Build Verilator simulation
verilate:
	# Ensure obj_dir exists
	mkdir -p $(OBJ_DIR)
	verilator -f $(VERILATOR_F) --cc $(TESTBENCH) --top $(TOP_MODULE) --Mdir $(OBJ_DIR) --trace-fst

compile : verilate
	# Compile generated Makefile
	make -C $(OBJ_DIR) -f $(TARGET).mk

# Run simulation
sim: compile
	# Ensure waveform folder exists
	mkdir -p $(WAVE_DIR)
	@echo "Running simulation $(TOP_MODULE)..."
	# Run the simulation
	./$(OBJ_DIR)/$(TARGET)

wave : sim 
	# Open waveform in GTKWave
	gtkwave $(WAVE_DIR)/wave.vcd $(WAVE_DIR)/$(TOP_MODULE).gtkw
	
all : wave
# Clean everything
clean:
	rm -rf $(OBJ_DIR) *.vcd *.log
