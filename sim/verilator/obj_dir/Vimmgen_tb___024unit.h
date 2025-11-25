// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vimmgen_tb.h for the primary calling header

#ifndef VERILATED_VIMMGEN_TB___024UNIT_H_
#define VERILATED_VIMMGEN_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vimmgen_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vimmgen_tb___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vimmgen_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vimmgen_tb___024unit(Vimmgen_tb__Syms* symsp, const char* v__name);
    ~Vimmgen_tb___024unit();
    VL_UNCOPYABLE(Vimmgen_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
