package EXMEM_pkg;
    typedef struct packed {
        logic [31:0] alu_result;
        logic [31:0] rs2_val;
        logic [4:0]  rd;

        logic        mem_read;
        logic        mem_write;
        logic        reg_write;
        logic        mem_to_reg;

        logic        valid;
    } ex_mem_t;
endpackage