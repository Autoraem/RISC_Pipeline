// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vimmgen_tb.h for the primary calling header

#ifndef VERILATED_VIMMGEN_TB___024ROOT_H_
#define VERILATED_VIMMGEN_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vimmgen_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vimmgen_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*2:0*/ immgen_tb__DOT__imm_sel;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ immgen_tb__DOT__instr;
    IData/*31:0*/ immgen_tb__DOT__failures;
    IData/*31:0*/ immgen_tb__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ immgen_tb__DOT__dut__DOT__imm_out;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vimmgen_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vimmgen_tb___024root(Vimmgen_tb__Syms* symsp, const char* v__name);
    ~Vimmgen_tb___024root();
    VL_UNCOPYABLE(Vimmgen_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
