// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontroldecoder_tb.h for the primary calling header

#include "Vcontroldecoder_tb__pch.h"
#include "Vcontroldecoder_tb__Syms.h"
#include "Vcontroldecoder_tb___024root.h"

void Vcontroldecoder_tb___024root___ctor_var_reset(Vcontroldecoder_tb___024root* vlSelf);

Vcontroldecoder_tb___024root::Vcontroldecoder_tb___024root(Vcontroldecoder_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcontroldecoder_tb___024root___ctor_var_reset(this);
}

void Vcontroldecoder_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcontroldecoder_tb___024root::~Vcontroldecoder_tb___024root() {
}
