//============================================================================
// Verilator Configuration File
// RISC-V Pipelined CPU
//============================================================================

//----------------------------------------------------------------------------
// Warning Settings
//----------------------------------------------------------------------------
-Wall                   // Enable all warnings
-Wno-fatal              // Don't exit on warnings
-Wno-WIDTHTRUNC         // Ignore width truncation warnings (common in enums)
-Wno-WIDTHEXPAND        // Ignore width expansion warnings

//----------------------------------------------------------------------------
// Performance Settings
//----------------------------------------------------------------------------
-j 0                    // Fully parallelized build (use all CPU cores)

//----------------------------------------------------------------------------
// Simulation Features
//----------------------------------------------------------------------------
--assert                // Enable SystemVerilog assertions
--trace-fst             // Dump waveforms as FST (compressed VCD)
--trace-structs         // Dump structs in human-readable format
--x-assign unique       // All explicit Xs replaced by constant value at runtime
--x-initial unique      // All variables randomly initialized (if +verilator+rand+reset+2)

//----------------------------------------------------------------------------
// SystemVerilog Packages (MUST BE FIRST)
//----------------------------------------------------------------------------
rtl/types/control_pkg.sv
rtl/types/pipelinestages_pkg.sv

//----------------------------------------------------------------------------
// Core Units
//----------------------------------------------------------------------------
rtl/units/imem.sv
rtl/units/dmem.sv
rtl/units/regfile.sv
rtl/units/immgen.sv
rtl/units/alu.sv
rtl/units/control.sv
rtl/units/pcreg.sv
rtl/units/pipereg.sv
rtl/units/brcmp.sv
rtl/units/forwardingunit.sv
rtl/units/hazardunit.sv

//----------------------------------------------------------------------------
// Pipeline Stages
//----------------------------------------------------------------------------
rtl/pipelinestages/fetch.sv
rtl/pipelinestages/decode.sv
rtl/pipelinestages/execute.sv
rtl/pipelinestages/mem.sv
rtl/pipelinestages/wb.sv

//----------------------------------------------------------------------------
// Top-level Core
//----------------------------------------------------------------------------
rtl/riscv_core_min.sv

//----------------------------------------------------------------------------
// Testbench
//----------------------------------------------------------------------------
rtl/testbenches/tb_core.sv

//----------------------------------------------------------------------------
// Top Module Selection
//----------------------------------------------------------------------------
--top tb_core

//----------------------------------------------------------------------------
// Binary Output (for executable)
//----------------------------------------------------------------------------
--binary
