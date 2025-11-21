`timescale 1ns/1ps
import control_pkg::*;

module controldecoder_tb();

    logic [31:0] instr;
    control_signals_t ctrl;

    control dut(
        .instr(instr),
        .control_signals(ctrl)
    );

    task check(input string name, input logic cond);
        if (cond)
            $display("[PASS] %s", name);
        else
            $display("[FAIL] %s", name);
    endtask

    initial begin
        // Create VCD file for GTKWave
        $dumpfile("sim/waves/controldecoder_tb_wave.vcd");
        $dumpvars(0, controldecoder_tb);
        
        $display("=== RISC-V Decoder Test ===");

        // Test 1: ADD x1, x2, x3  (0000000 00011 00010 000 00001 0110011)
        instr = 32'b0000000_00011_00010_000_00001_0110011;
        #1;
        check("ADD opcode", ctrl.alu_op == ALU_ADD);
        check("ADD rs1", ctrl.rs1 == 5'd2);
        check("ADD rs2", ctrl.rs2 == 5'd3);
        check("ADD rd",  ctrl.rd  == 5'd1);

        // Test 2: LW x5, 8(x1)
        instr = 32'b000000001000_00001_010_00101_0000011;
        #1;
        check("LW regwen", ctrl.regwen == 1);
        check("LW imm_sel", ctrl.imm_sel == IMM_I);

        // Test 3: SW x5, 16(x2)
        instr = 32'b000001_00101_00010_010_00000_0100011;
        #1;
        check("SW imm_sel", ctrl.imm_sel == IMM_S);

        // Test 4: BEQ x1, x2, offset
        instr = 32'b0_000000_00010_00001_000_00000_1100011;
        #1;
        check("BEQ imm_sel", ctrl.imm_sel == IMM_B);

        $finish;
    end

endmodule
