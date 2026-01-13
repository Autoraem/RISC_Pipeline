`timescale 1ns/1ps

module immgen (
    input  logic [31:0] instr,
    input  imm_sel_e    imm_sel,
    output logic [31:0] imm_out
);
    import control_pkg::*;

    always_comb begin
        unique case (imm_sel)
            IMM_I: imm_out = {{20{instr[31]}}, instr[31:20]}; //sign-extend
            IMM_S: imm_out = {{20{instr[31]}}, instr[31:25], instr[11:7]};
            // FIXED: B-type immediate - bit[31] goes into sign extension [31:13], then [31],[7],[30:25],[11:8],[0]
            IMM_B: imm_out = {{19{instr[31]}}, instr[31], instr[7], instr[30:25], instr[11:8], 1'b0};
            IMM_U: imm_out = {instr[31:12], 12'b0};
            // FIXED: J-type immediate - proper bit ordering per RISC-V spec
            IMM_J: imm_out = {{12{instr[31]}}, instr[19:12], instr[20], instr[30:21], 1'b0};
            IMM_NONE: imm_out = 32'b0;
            default: imm_out = 32'b0;
        endcase
    end

endmodule
