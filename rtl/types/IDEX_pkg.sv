package IDEX_pkg;
    typedef struct packed {
        logic [31:0] pc;
        logic [31:0] rs1_val;
        logic [31:0] rs2_val;
        logic [31:0] imm;
        logic [4:0]  rd;
        logic [3:0]  alu_op;

        logic        alu_src;
        logic        branch;
        logic        mem_read;
        logic        mem_write;
        logic        reg_write;
        logic        mem_to_reg;

        logic        valid;
    } id_ex_t;

endpackage
