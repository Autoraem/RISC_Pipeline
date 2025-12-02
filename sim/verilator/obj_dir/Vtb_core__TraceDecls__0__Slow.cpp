// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations
#include "verilated_fst_c.h"


void Vtb_core___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"ALU_ADD", "ALU_SUB", "ALU_AND", "ALU_OR", 
                                "ALU_XOR", "ALU_SLL", 
                                "ALU_SRL", "ALU_SRA", 
                                "ALU_SLT", "ALU_SLTU"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001"};
        tracep->declDTypeEnum(1, "control_pkg::alu_op_e", 10, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IMM_I", "IMM_S", "IMM_B", "IMM_U", "IMM_J", 
                                "IMM_NONE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101"};
        tracep->declDTypeEnum(2, "control_pkg::imm_sel_e", 6, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"SRC_A_RS1", "SRC_A_PC", "SRC_A_ZERO"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(3, "control_pkg::a_sel_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"SRC_B_RS2", "SRC_B_IMM", "SRC_B_FOUR"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(4, "control_pkg::b_sel_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
}

void Vtb_core___024root__trace_decl_types(VerilatedFst* tracep) {
    Vtb_core___024root__traceDeclTypesSub0(tracep);
}
