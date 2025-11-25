// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vimmgen_tb.h for the primary calling header

#include "Vimmgen_tb__pch.h"
#include "Vimmgen_tb__Syms.h"
#include "Vimmgen_tb___024unit.h"

void Vimmgen_tb___024unit___ctor_var_reset(Vimmgen_tb___024unit* vlSelf);

Vimmgen_tb___024unit::Vimmgen_tb___024unit(Vimmgen_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vimmgen_tb___024unit___ctor_var_reset(this);
}

void Vimmgen_tb___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vimmgen_tb___024unit::~Vimmgen_tb___024unit() {
}
