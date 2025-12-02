package MEMWB_pkg;
    typedef struct packed {
        logic [31:0] alu_or_mem_val;
        logic [4:0]  rd;

        logic        reg_write;

        logic        valid;
    } mem_wb_t;

endpackage