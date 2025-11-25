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

// ---------------------------------------------
// Bundle all signals into the struct
// ---------------------------------------------
assign control_signals = '{
    alu_op   : alu_op,
    regwen   : regwen,
    imm_sel  : imm_sel,
    A_sel    : A_sel,
    B_sel    : B_sel,
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

    rs1 = instr[19:15];
    rs2 = instr[24:20];
    rd  = instr[11:7];

    unique case (instr[6:0])

        // ============================================================
        // R-type  (ADD, SUB, AND, OR, XOR, SLL, SRL, SRA, SLT, SLTU)
        // ============================================================
        7'b0110011: begin
            regwen = 1;
            A_sel  = SRC_A_RS1;
            B_sel  = SRC_B_RS2;
            imm_sel = IMM_NONE;

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
        7'b0010011: begin
            regwen  = 1;
            A_sel   = SRC_A_RS1;
            B_sel   = SRC_B_IMM;
            imm_sel = IMM_I;

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
        7'b0000011: begin
            regwen  = 1;
            alu_op  = ALU_ADD;
            A_sel   = SRC_A_RS1;
            B_sel   = SRC_B_IMM;
            imm_sel = IMM_I;
        end

        // ============================================================
        // STORE (SB, SH, SW)
        // ============================================================
        7'b0100011: begin
            regwen  = 0;
            alu_op  = ALU_ADD;
            A_sel   = SRC_A_RS1;
            B_sel   = SRC_B_IMM;
            imm_sel = IMM_S;
        end

        // ============================================================
        // BRANCH (BEQ, BNE, BLT, etc.)
        // ============================================================
        7'b1100011: begin
            regwen  = 0;
            alu_op  = ALU_SUB;
            A_sel   = SRC_A_RS1;
            B_sel   = SRC_B_RS2;
            imm_sel = IMM_B;
        end

        // ============================================================
        // JAL
        // ============================================================
        7'b1101111: begin
            regwen  = 1;
            A_sel   = SRC_A_PC;
            B_sel   = SRC_B_FOUR;  // write PC+4 into rd
            imm_sel = IMM_J;
        end

        // ============================================================
        // JALR
        // ============================================================
        7'b1100111: begin
            regwen  = 1;
            A_sel   = SRC_A_RS1;
            B_sel   = SRC_B_IMM;
            imm_sel = IMM_I;
            alu_op  = ALU_ADD;
        end

        // ============================================================
        // LUI
        // ============================================================
        7'b0110111: begin
            regwen  = 1;
            A_sel   = SRC_A_ZERO;
            B_sel   = SRC_B_IMM;
            imm_sel = IMM_U;
        end

        // ============================================================
        // AUIPC
        // ============================================================
        7'b0010111: begin
            regwen  = 1;
            A_sel   = SRC_A_PC;
            B_sel   = SRC_B_IMM;
            imm_sel = IMM_U;
        end

        // ============================================================
        // SYSTEM (ECALL, EBREAK, FENCE)
        // ============================================================
        7'b1110011: begin // ECALL/EBREAK
            regwen = 0;
        end

        7'b0001111: begin // FENCE
            regwen = 0;
        end

        default: ;
    endcase
end

endmodule
