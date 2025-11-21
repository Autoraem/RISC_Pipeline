// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcontroldecoder_tb.h for the primary calling header

#ifndef VERILATED_VCONTROLDECODER_TB___024UNIT_H_
#define VERILATED_VCONTROLDECODER_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcontroldecoder_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcontroldecoder_tb___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vcontroldecoder_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcontroldecoder_tb___024unit(Vcontroldecoder_tb__Syms* symsp, const char* v__name);
    ~Vcontroldecoder_tb___024unit();
    VL_UNCOPYABLE(Vcontroldecoder_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
