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
rtl/imm_types_pkg.sv
rtl/immgen.sv
rtl/testbenches/immgen_tb.sv

//Testbench
--binary rtl/immgen.sv

--top immgen_tb
