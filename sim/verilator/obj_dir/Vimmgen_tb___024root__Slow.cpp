// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vimmgen_tb.h for the primary calling header

#include "Vimmgen_tb__pch.h"
#include "Vimmgen_tb__Syms.h"
#include "Vimmgen_tb___024root.h"

void Vimmgen_tb___024root___ctor_var_reset(Vimmgen_tb___024root* vlSelf);

Vimmgen_tb___024root::Vimmgen_tb___024root(Vimmgen_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vimmgen_tb___024root___ctor_var_reset(this);
}

void Vimmgen_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vimmgen_tb___024root::~Vimmgen_tb___024root() {
}
