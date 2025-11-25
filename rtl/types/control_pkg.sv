package control_pkg;

    // -------------------------
    // ALU operations
    // -------------------------
    typedef enum logic [3:0] {
        ALU_ADD,
        ALU_SUB,
        ALU_AND,
        ALU_OR,
        ALU_XOR,
        ALU_SLL,
        ALU_SRL,
        ALU_SRA,
        ALU_SLT,
        ALU_SLTU
    } alu_op_e;

    // -------------------------
    // Immediate selection
    // -------------------------
    typedef enum logic [2:0] {
        IMM_I,
        IMM_S,
        IMM_B,
        IMM_U,
        IMM_J,
        IMM_NONE
    } imm_sel_e;

    // -------------------------
    // Operand A/B select
    // -------------------------
    typedef enum logic [1:0] {
        SRC_A_RS1,
        SRC_A_PC,
        SRC_A_ZERO
    } a_sel_e;

    typedef enum logic [1:0] {
        SRC_B_RS2,
        SRC_B_IMM,
        SRC_B_FOUR
    } b_sel_e;

    // -------------------------
    // Control bundle
    // -------------------------
    typedef struct packed {
        alu_op_e    alu_op;
        logic       regwen;
        imm_sel_e   imm_sel;
        a_sel_e     A_sel;
        b_sel_e     B_sel;

        logic [4:0] rs1;
        logic [4:0] rs2;
        logic [4:0] rd;
    } control_signals_t;

endpackage
