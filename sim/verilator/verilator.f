//Strict Warnings 
-Wall
//Don't exit on warnings
-Wno-fatal

//Fully parallelized
-j 0
//Enable SystemVerilog assertions
--assert 
//dump as FST (compressed VCD)
--trace-fst
//dump structs as human-readable format
--trace-structs
//all explict Xs are replaced by a constant value determined at runtime
--x-assign unique
//all variables are randomly initalized (if +verilator+rand+reset+2)
--x-initial unique

//Top Module
rtl/types/control_pkg.sv
rtl/types/pipelinestages_pkg.sv

rtl/units/imem.sv
rtl/units/dmem.sv
rtl/units/regfile.sv
rtl/units/immgen.sv
rtl/units/alu.sv
rtl/units/control.sv
rtl/units/pcreg.sv
rtl/riscv_core_min.sv
rtl/units/pipereg.sv
rtl/units/brcmp.sv

rtl/pipelinestages/fetch.sv
rtl/pipelinestages/decode.sv
rtl/pipelinestages/execute.sv
rtl/pipelinestages/mem.sv
rtl/pipelinestages/wb.sv

rtl/testbenches/tb_core.sv
//Testbench
--binary rtl/riscv_core_min.sv

--top tb_core
