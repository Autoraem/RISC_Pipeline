// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations
#include "verilated_fst_c.h"


void Vimmgen_tb___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"IMM_I", "IMM_S", "IMM_B", "IMM_U", "IMM_J"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(1, "imm_types::imm_sel_e", 5, 3, __VenumItemNames, __VenumItemValues);
    }
}

void Vimmgen_tb___024root__trace_decl_types(VerilatedFst* tracep) {
    Vimmgen_tb___024root__traceDeclTypesSub0(tracep);
}
