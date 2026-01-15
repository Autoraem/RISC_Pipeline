`timescale 1ns/1ps
module control (
    input  logic [31:0] instr,
    output control_signals_t control_signals
);

import control_pkg::*;

logic [4:0] rs1, rs2, rd; 
alu_op_e     alu_op;
logic        regwen;
imm_sel_e    imm_sel;
a_sel_e      A_sel;
b_sel_e      B_sel;
wb_sel_e     wb_sel;
branch_type_e branch_type;
instruction_type_e     instruction_type; //debugging purpose
// ---------------------------------------------
// Bundle all signals into the struct
// ---------------------------------------------
assign control_signals = '{
    alu_op   : alu_op,
    regwen   : regwen,
    imm_sel  : imm_sel,
    A_sel    : A_sel,
    B_sel    : B_sel,
    wb_sel   : wb_sel,
    branch_type : branch_type,
    instruction_type   : instruction_type,

    rs1      : rs1,
    rs2      : rs2,
    rd       : rd
};

// ---------------------------------------------
// Decode
// ---------------------------------------------
always_comb begin

    // ------------------------------
    // Defaults (NOP)
    // ------------------------------
    alu_op  = ALU_ADD;
    regwen  = 1'b0;
    imm_sel = IMM_NONE;
    A_sel   = SRC_A_RS1;
    B_sel   = SRC_B_RS2;
    wb_sel  = WB_FROM_ALU;
    branch_type = BR_NONE;
    instruction_type  = instruction_type_e'(instr[6:0]); // for debugging

    rs1 = instr[19:15];
    rs2 = instr[24:20];
    rd  = instr[11:7];

    unique case (instruction_type)

        // ============================================================
        // R-type  (ADD, SUB, AND, OR, XOR, SLL, SRL, SRA, SLT, SLTU)
        // ============================================================
        OP_R_TYPE: begin
            regwen = 1;
            A_sel  = SRC_A_RS1;
            B_sel  = SRC_B_RS2;
            imm_sel = IMM_NONE;
            wb_sel  = WB_FROM_ALU;
            branch_type = BR_NONE;

            unique case ({instr[30], instr[14:12]})
                4'b0_000: alu_op = ALU_ADD;
                4'b1_000: alu_op = ALU_SUB;
                4'b0_111: alu_op = ALU_AND;
                4'b0_110: alu_op = ALU_OR;
                4'b0_100: alu_op = ALU_XOR;
                4'b0_001: alu_op = ALU_SLL;
                4'b0_101: alu_op = ALU_SRL;
                4'b1_101: alu_op = ALU_SRA;
                4'b0_010: alu_op = ALU_SLT;
                4'b0_011: alu_op = ALU_SLTU;
                default: ;
            endcase
        end

        // ============================================================
        // I-type ALU (ADDI, SLTI, ANDI, ORI, XORI, SLLI, SRLI, SRAI)
        // ============================================================
        OP_I_TYPE: begin
            regwen  = 1;
            A_sel   = SRC_A_RS1;
            B_sel   = SRC_B_IMM;
            imm_sel = IMM_I;
            wb_sel  = WB_FROM_ALU;
            branch_type = BR_NONE;

            unique case (instr[14:12])
                3'b000: alu_op = ALU_ADD;   // ADDI
                3'b010: alu_op = ALU_SLT;   // SLTI
                3'b011: alu_op = ALU_SLTU;  // SLTIU
                3'b100: alu_op = ALU_XOR;
                3'b110: alu_op = ALU_OR;
                3'b111: alu_op = ALU_AND;
                3'b001: alu_op = ALU_SLL;   // SLLI
                3'b101: alu_op = (instr[30] ? ALU_SRA : ALU_SRL); // SRAI/SRLI
            endcase
        end

        // ============================================================
        // LOAD (LB, LH, LW, LBU, LHU)
        // ============================================================
        OP_LOAD: begin
            regwen  = 1;
            alu_op  = ALU_ADD;
            A_sel   = SRC_A_RS1;
            B_sel   = SRC_B_IMM;
            imm_sel = IMM_I;
            wb_sel  = WB_FROM_MEM;
            branch_type = BR_NONE;
        end

        // ============================================================
        // STORE (SB, SH, SW)
        // ============================================================
        OP_STORE: begin
            regwen  = 0; //no writeback
            alu_op  = ALU_ADD;
            A_sel   = SRC_A_RS1;
            B_sel   = SRC_B_IMM;
            imm_sel = IMM_S;
            wb_sel  = WB_FROM_ALU; 
            branch_type = BR_NONE;
        end

        // ============================================================
        // BRANCH (BEQ, BNE, BLT, etc.)
        // ============================================================
        OP_BRANCH: begin
            regwen  = 0;
            alu_op  = ALU_ADD;
            A_sel   = SRC_A_PC;
            B_sel   = SRC_B_IMM;
            imm_sel = IMM_B;
            wb_sel  = WB_FROM_ALU;
            unique case (instr[14:12])
                3'b000: branch_type = BR_EQ;   // BEQ
                3'b001: branch_type = BR_NE;   // BNE
                3'b100: branch_type = BR_LT;   // BLT
                3'b101: branch_type = BR_GE;   // BGE
                3'b110: branch_type = BR_LTU;  // BLTU
                3'b111: branch_type = BR_GEU;  // BGEU
                default: branch_type = BR_NONE; 
            endcase
        end

        // ============================================================
        // JAL
        // ============================================================
        OP_JAL: begin
            regwen  = 1;
            A_sel   = SRC_A_PC;
            B_sel = SRC_B_IMM;  // Change from SRC_B_FOUR to SRC_B_IMM
            imm_sel = IMM_J;
            wb_sel  = WB_FROM_PC_PLUS_4;
            branch_type = BR_UNCOND;
        end

        // ============================================================
        // JALR
        // ============================================================
        OP_JALR: begin
            regwen  = 1;
            A_sel   = SRC_A_RS1;
            B_sel   = SRC_B_IMM;
            imm_sel = IMM_I;
            alu_op  = ALU_ADD;
            wb_sel  = WB_FROM_PC_PLUS_4;
            branch_type = BR_UNCOND;
        end

        // ============================================================
        // LUI
        // ============================================================
        OP_LUI: begin
            regwen  = 1;
            A_sel   = SRC_A_ZERO;
            B_sel   = SRC_B_IMM;
            imm_sel = IMM_U;
            wb_sel  = WB_FROM_ALU;
            branch_type = BR_NONE;
        end

        // ============================================================
        // AUIPC
        // ============================================================
        OP_AUIPC: begin
            regwen  = 1;
            A_sel   = SRC_A_PC;
            B_sel   = SRC_B_IMM;
            imm_sel = IMM_U;
            wb_sel  = WB_FROM_ALU;
            branch_type = BR_NONE;
        end

        // ============================================================
        // SYSTEM (ECALL, EBREAK, FENCE)
        // ============================================================
        OP_SYSTEM: begin // ECALL/EBREAK
            regwen = 0;
        end

        OP_FENCE: begin // FENCE
            regwen = 0;
        end

        default: ;
    endcase
end

endmodule
