// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcontroldecoder_tb.h for the primary calling header

#ifndef VERILATED_VCONTROLDECODER_TB___024ROOT_H_
#define VERILATED_VCONTROLDECODER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcontroldecoder_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcontroldecoder_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ controldecoder_tb__DOT__dut__DOT__alu_op;
    CData/*0:0*/ controldecoder_tb__DOT__dut__DOT__regwen;
    CData/*2:0*/ controldecoder_tb__DOT__dut__DOT__imm_sel;
    CData/*1:0*/ controldecoder_tb__DOT__dut__DOT__A_sel;
    CData/*1:0*/ controldecoder_tb__DOT__dut__DOT__B_sel;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ controldecoder_tb__DOT__instr;
    IData/*26:0*/ controldecoder_tb__DOT__ctrl;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcontroldecoder_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcontroldecoder_tb___024root(Vcontroldecoder_tb__Syms* symsp, const char* v__name);
    ~Vcontroldecoder_tb___024root();
    VL_UNCOPYABLE(Vcontroldecoder_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
