`timescale 1ns/1ps
package immtypes_pkg;

    typedef enum logic [2:0] {
        IMM_I,
        IMM_S,
        IMM_B,
        IMM_U,
        IMM_J
    } imm_sel_e;

endpackage
