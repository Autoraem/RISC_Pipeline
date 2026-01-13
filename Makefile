# ============================================================================
# RISC-V Pipelined CPU - Complete Makefile
# ============================================================================

# ----------------------------------------------------------------------------
# Configuration
# ----------------------------------------------------------------------------

# Verilator Configuration
VERILATOR_F = sim/verilator/verilator.f
OBJ_DIR = sim/verilator/obj_dir
TOP_MODULE ?= tb_core
TARGET = V$(TOP_MODULE)
WAVE_DIR = sim/waves

# RISC-V Toolchain Configuration
RISCV_PREFIX = riscv64-unknown-elf-
AS = $(RISCV_PREFIX)as
LD = $(RISCV_PREFIX)ld
OBJCOPY = $(RISCV_PREFIX)objcopy
OBJDUMP = $(RISCV_PREFIX)objdump
hexdump = hexdump

# RISC-V Flags (RV32I)
ASFLAGS = -march=rv32i -mabi=ilp32
LDFLAGS = -melf32lriscv  # CRITICAL: 32-bit emulation flag

# Program Configuration
PROG_DIR = rtl/program
LINKER_SCRIPT = $(PROG_DIR)/linker.ld
PROG_SRC = $(PROG_DIR)/program.s
PROG_OBJ = $(PROG_DIR)/program.o
PROG_ELF = $(PROG_DIR)/program.elf
PROG_HEX = $(PROG_DIR)/program.hex
PROG_BIN = $(PROG_DIR)/program.bin
PROG_DIS = $(PROG_DIR)/program.dis

# ----------------------------------------------------------------------------
# Phony Targets
# ----------------------------------------------------------------------------
.PHONY: all sim wave clean clean-sim clean-prog help verilate compile \
        prog hex disasm check-toolchain linker

# ----------------------------------------------------------------------------
# Default Target
# ----------------------------------------------------------------------------
all: prog sim

# ----------------------------------------------------------------------------
# Help Target
# ----------------------------------------------------------------------------
help:
	@echo "======================================================================"
	@echo "RISC-V Pipelined CPU Makefile"
	@echo "======================================================================"
	@echo ""
	@echo "Main Targets:"
	@echo "  all         - Build program and run simulation (default)"
	@echo "  sim         - Run Verilator simulation"
	@echo "  wave        - Run simulation and open waveform viewer"
	@echo "  prog        - Compile assembly program to hex"
	@echo "  clean       - Clean all build artifacts"
	@echo ""
	@echo "Program Targets:"
	@echo "  prog        - Assemble, link, and generate hex file"
	@echo "  hex         - Generate hex file from ELF"
	@echo "  disasm      - View disassembly of program"
	@echo "  linker      - Create default linker script"
	@echo ""
	@echo "Simulation Targets:"
	@echo "  verilate    - Run Verilator (generate C++ model)"
	@echo "  compile     - Compile Verilator model"
	@echo "  sim         - Run simulation"
	@echo "  wave        - Open waveform in GTKWave"
	@echo ""
	@echo "Utility Targets:"
	@echo "  check-toolchain - Verify RISC-V toolchain is installed"
	@echo "  clean-sim       - Clean only simulation artifacts"
	@echo "  clean-prog      - Clean only program artifacts"
	@echo "  help            - Show this help message"
	@echo ""
	@echo "Variables:"
	@echo "  TOP_MODULE  - Top-level module (default: tb_core)"
	@echo "  PROG_SRC    - Assembly source (default: $(PROG_SRC))"
	@echo ""
	@echo "Examples:"
	@echo "  make prog              # Build program"
	@echo "  make sim               # Run simulation"
	@echo "  make wave              # Run simulation and view waves"
	@echo "  make PROG_SRC=test.s   # Build different program"
	@echo "======================================================================"

# ----------------------------------------------------------------------------
# Toolchain Check
# ----------------------------------------------------------------------------
check-toolchain:
	@echo "Checking RISC-V toolchain..."
	@which $(AS) > /dev/null 2>&1 || \
		(echo "ERROR: RISC-V toolchain not found!" && \
		 echo "Install with: sudo apt-get install gcc-riscv64-unknown-elf" && \
		 exit 1)
	@echo "✓ RISC-V toolchain found"
	@$(AS) --version | head -1

# ----------------------------------------------------------------------------
# Program Compilation
# ----------------------------------------------------------------------------

# Create default linker script if it doesn't exist
$(LINKER_SCRIPT):
	@echo "Creating default linker script..."
	@mkdir -p $(PROG_DIR)
	@echo 'OUTPUT_ARCH("riscv")' > $@
	@echo 'ENTRY(_start)' >> $@
	@echo '' >> $@
	@echo 'SECTIONS' >> $@
	@echo '{' >> $@
	@echo '    . = 0x00000000;' >> $@
	@echo '' >> $@
	@echo '    .text : {' >> $@
	@echo '        *(.text)' >> $@
	@echo '        *(.text.*)' >> $@
	@echo '    }' >> $@
	@echo '' >> $@
	@echo '    .data : {' >> $@
	@echo '        *(.data)' >> $@
	@echo '        *(.data.*)' >> $@
	@echo '    }' >> $@
	@echo '' >> $@
	@echo '    .bss : {' >> $@
	@echo '        *(.bss)' >> $@
	@echo '        *(.bss.*)' >> $@
	@echo '    }' >> $@
	@echo '}' >> $@
	@echo "✓ Created $(LINKER_SCRIPT)"

linker: $(LINKER_SCRIPT)

# Assemble: .s -> .o
$(PROG_OBJ): $(PROG_SRC) check-toolchain
	@echo "=========================================="
	@echo "Assembling: $(PROG_SRC)"
	@echo "=========================================="
	@mkdir -p $(PROG_DIR)
	$(AS) $(ASFLAGS) -o $@ $<
	@echo "✓ Assembly complete: $@"

# Link: .o -> .elf
$(PROG_ELF): $(PROG_OBJ) $(LINKER_SCRIPT)
	@echo "=========================================="
	@echo "Linking: $(PROG_OBJ)"
	@echo "=========================================="
	$(LD) $(LDFLAGS) -T $(LINKER_SCRIPT) -o $@ $<
	@echo "✓ Linking complete: $@"

# Generate binary: .elf -> .bin
$(PROG_BIN): $(PROG_ELF)
	@echo "Generating binary file..."
	$(OBJCOPY) -O binary $< $@
	@echo "✓ Binary file generated: $@"

# Generate hex: .elf -> .hex
$(PROG_HEX): $(PROG_BIN)
	@echo "=========================================="
	@echo "Generating hex file (32-bit words)"
	@echo "=========================================="
	$(hexdump) -v -e '1/4 "%08x\n"' $< > $@
	@echo "✓ Hex file generated: $@"
	@echo ""
	@echo "First 16 instructions:"
	@head -16 $@

# Generate disassembly: .elf -> .dis
$(PROG_DIS): $(PROG_ELF)
	@echo "Generating disassembly..."
	$(OBJDUMP) -d $< > $@
	@echo "✓ Disassembly generated: $@"

# Build complete program
prog: $(PROG_HEX) $(PROG_BIN) $(PROG_DIS)
	@echo ""
	@echo "=========================================="
	@echo "Program build complete!"
	@echo "=========================================="
	@echo "Generated files:"
	@echo "  $(PROG_HEX) - Hex for Verilog"
	@echo "  $(PROG_BIN) - Raw binary"
	@echo "  $(PROG_DIS) - Disassembly"
	@echo ""
	@echo "Program statistics:"
	@echo "  Instructions: $$(grep -E '^\s+[0-9a-f]+:' $(PROG_DIS) | wc -l)"
	@echo "  Hex size:     $$(wc -c < $(PROG_HEX)) bytes"
	@echo "  Binary size:  $$(wc -c < $(PROG_BIN)) bytes"
	@echo ""
	@echo "To view disassembly: make disasm"
	@echo "=========================================="

# Just generate hex (quick rebuild)
hex: $(PROG_HEX)

# View disassembly
disasm: $(PROG_DIS)
	@less $(PROG_DIS)

# ----------------------------------------------------------------------------
# Verilator Simulation
# ----------------------------------------------------------------------------

# Verilate (generate C++ model)
verilate:
	@echo "=========================================="
	@echo "Running Verilator"
	@echo "=========================================="
	@mkdir -p $(OBJ_DIR)
	verilator -f $(VERILATOR_F) --top $(TOP_MODULE) --Mdir $(OBJ_DIR) --trace-fst
	@echo "✓ Verilator complete"

# Compile Verilator model
compile: verilate
	@echo "=========================================="
	@echo "Compiling Verilator model"
	@echo "=========================================="
	$(MAKE) -C $(OBJ_DIR) -f $(TARGET).mk
	@echo "✓ Compilation complete"

# Run simulation
sim: prog compile
	@echo "=========================================="
	@echo "Running simulation: $(TOP_MODULE)"
	@echo "=========================================="
	@mkdir -p $(WAVE_DIR)
	./$(OBJ_DIR)/$(TARGET)
	@echo ""
	@echo "✓ Simulation complete"
	@echo ""
	@echo "To view waveform: make wave"

# Run simulation and open waveform
wave: sim
	@echo "=========================================="
	@echo "Opening waveform viewer"
	@echo "=========================================="
	@if [ -f $(WAVE_DIR)/$(TOP_MODULE).gtkw ]; then \
		gtkwave $(WAVE_DIR)/$(TOP_MODULE)_wave.vcd $(WAVE_DIR)/$(TOP_MODULE).gtkw; \
	else \
		gtkwave $(WAVE_DIR)/$(TOP_MODULE)_wave.vcd; \
	fi

# ----------------------------------------------------------------------------
# Clean Targets
# ----------------------------------------------------------------------------

# Clean simulation artifacts
clean-sim:
	@echo "Cleaning simulation artifacts..."
	rm -rf $(OBJ_DIR)
	rm -f *.vcd *.fst *.log
	rm -rf $(WAVE_DIR)/*.vcd $(WAVE_DIR)/*.fst
	@echo "✓ Simulation artifacts cleaned"

# Clean program artifacts
clean-prog:
	@echo "Cleaning program artifacts..."
	rm -f $(PROG_OBJ) $(PROG_ELF) $(PROG_HEX) $(PROG_BIN) $(PROG_DIS)
	@echo "✓ Program artifacts cleaned"

# Clean everything
clean: clean-sim clean-prog
	@echo ""
	@echo "=========================================="
	@echo "✓ All artifacts cleaned"
	@echo "=========================================="

# ----------------------------------------------------------------------------
# Advanced Targets
# ----------------------------------------------------------------------------

# Show program statistics
stats: $(PROG_DIS)
	@echo "=========================================="
	@echo "Program Statistics"
	@echo "=========================================="
	@echo "Total instructions:    $$(grep -E '^\s+[0-9a-f]+:' $(PROG_DIS) | wc -l)"
	@echo "Size (hex):            $$(wc -c < $(PROG_HEX)) bytes"
	@echo "Size (binary):         $$(wc -c < $(PROG_BIN)) bytes"
	@echo ""
	@echo "Instruction breakdown:"
	@echo "  Loads:     $$(grep -E '^\s+[0-9a-f]+:.*\tl[bhw]' $(PROG_DIS) | wc -l)"
	@echo "  Stores:    $$(grep -E '^\s+[0-9a-f]+:.*\ts[bhw]' $(PROG_DIS) | wc -l)"
	@echo "  Branches:  $$(grep -E '^\s+[0-9a-f]+:.*\tb[a-z]+' $(PROG_DIS) | wc -l)"
	@echo "  Jumps:     $$(grep -E '^\s+[0-9a-f]+:.*\tj[a-z]+' $(PROG_DIS) | wc -l)"
	@echo "  ALU:       $$(grep -E '^\s+[0-9a-f]+:.*\t(add|sub|and|or|xor|sll|srl|sra|slt)' $(PROG_DIS) | wc -l)"
	@echo "=========================================="

# Dump first N instructions as hex
dump: $(PROG_HEX)
	@echo "First 32 instructions (hex):"
	@head -32 $(PROG_HEX)

# Quick rebuild (clean and build)
rebuild: clean all

# Just compile program without running simulation
build-prog: prog
	@echo "Program built successfully!"
