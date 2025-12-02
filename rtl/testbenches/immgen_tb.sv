`timescale 1ns/1ps
import immtypes_pkg::*;

module immgen_tb;


    // DUT inputs/outputs
    logic [31:0] instr;
    imm_sel_e    imm_sel;
    logic [31:0] imm_out;

    // Instantiate DUT
    immgen dut (
        .instr(instr),
        .imm_sel(imm_sel),
        .imm_out(imm_out)
    );

    // ============================================================
    // Reference Model: pure SystemVerilog functions
    // ============================================================

    function automatic logic [31:0] ref_imm_I(input logic [31:0] ins);
        return {{20{ins[31]}}, ins[31:20]};
    endfunction

    function automatic logic [31:0] ref_imm_S(input logic [31:0] ins);
        return {{20{ins[31]}}, ins[31:25], ins[11:7]};
    endfunction

    function automatic logic [31:0] ref_imm_B(input logic [31:0] ins);
        return {{20{ins[31]}},
                ins[7],
                ins[30:25],
                ins[11:8],
                1'b0};
    endfunction

    function automatic logic [31:0] ref_imm_U(input logic [31:0] ins);
        return {ins[31:12], 12'b0};
    endfunction


    function automatic logic [31:0] ref_imm_J(input logic [31:0] ins);
        return {{11{ins[31]}},    // imm[20] sign bit
                ins[31],          // imm[20]
                ins[19:12],       // imm[19:12]
                ins[20],          // imm[11]
                ins[30:21],       // imm[10:1]
                1'b0};            // imm[0]
    endfunction

    function automatic logic [31:0] ref_imm(
        input imm_sel_e sel,
        input logic [31:0] ins
    );
        case(sel)
            IMM_I: return ref_imm_I(ins);
            IMM_S: return ref_imm_S(ins);
            IMM_B: return ref_imm_B(ins);
            IMM_U: return ref_imm_U(ins);
            IMM_J: return ref_imm_J(ins);
            default: return 32'hDEADBEEF;
        endcase
    endfunction


    // ============================================================
    // Utility: generate random instruction encoding per type
    // ============================================================

    function automatic logic [31:0] make_random_I();
        logic [31:0] ins;
        ins[31:20] = $random;   // imm
        ins[19:15] = $random;   // rs1
        ins[14:12] = $random;   // funct3
        ins[11:7]  = $random;   // rd
        ins[6:0]   = 7'b0010011; // ADDI opcode
        return ins;
    endfunction

    function automatic logic [31:0] make_random_S();
        logic [31:0] ins;
        logic [11:0] imm = $random;
        ins[31:25] = imm[11:5];
        ins[24:20] = $random; // rs2
        ins[19:15] = $random; // rs1
        ins[14:12] = $random;
        ins[11:7]  = imm[4:0];
        ins[6:0]   = 7'b0100011; // store opcode
        return ins;
    endfunction

    function automatic logic [31:0] make_random_B();
        logic [31:0] ins;
        logic [12:1] imm = $random;
        ins[31]    = imm[12];
        ins[30:25] = imm[10:5];
        ins[24:20] = $random;
        ins[19:15] = $random;
        ins[14:12] = $random;
        ins[11:8]  = imm[4:1];
        ins[7]     = imm[11];
        ins[6:0]   = 7'b1100011; // branch
        return ins;
    endfunction

    function automatic logic [31:0] make_random_U();
        logic [31:0] ins = 32'b0;
        ins[31:12] = $random;
        ins[6:0]   = 7'b0110111; // LUI
        return ins;
    endfunction

    function automatic logic [31:0] make_random_J();
        logic [31:0] ins;
        logic [20:1] imm = $random;
        ins[31]    = imm[20];
        ins[30:21] = imm[10:1];
        ins[20]    = imm[11];
        ins[19:12] = imm[19:12];
        ins[11:7]  = $random;
        ins[6:0]   = 7'b1101111; // JAL
        return ins;
    endfunction


    // ============================================================
    // Test driver
    // ============================================================

    int failures = 0;

    task automatic run_test(input imm_sel_e sel);
        logic [31:0] expected;

        // pick a random instruction shape
        case(sel)
            IMM_I: instr = make_random_I();
            IMM_S: instr = make_random_S();
            IMM_B: instr = make_random_B();
            IMM_U: instr = make_random_U();
            IMM_J: instr = make_random_J();
        endcase

        imm_sel = sel;
        #1; // allow combinational settle

        expected = ref_imm(sel, instr);

        if (imm_out !== expected) begin
            $display("ERROR: imm mismatch sel=%0d instr=%h", sel, instr);
            $display("  got:      %h", imm_out);
            $display("  expected: %h", expected);
            failures++;
        end
    endtask


    // ============================================================
    // Main Test Loop
    // ============================================================

    initial begin
        // Create VCD file for GTKWave
        $dumpfile("sim/waves/immgen_tb_wave.vcd");
        $dumpvars(0, immgen_tb);

        $display("Starting randomized immgen test...");

        for (int i = 0; i < 50000; i++) begin
            run_test(IMM_I);
            run_test(IMM_S);
            run_test(IMM_B);
            run_test(IMM_U);
            run_test(IMM_J);
        end

        if (failures == 0)
            $display("PASSED: All immediate tests succeeded!");
        else
            $display("FAILED: %0d mismatches detected!", failures);

        $finish;
    end

endmodule
