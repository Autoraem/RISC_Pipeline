// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vregfile_tb.h for the primary calling header

#ifndef VERILATED_VREGFILE_TB___024ROOT_H_
#define VERILATED_VREGFILE_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vregfile_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vregfile_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ regfile_tb__DOT__clk;
    CData/*0:0*/ regfile_tb__DOT__we;
    CData/*0:0*/ regfile_tb__DOT__rst;
    CData/*4:0*/ regfile_tb__DOT__rs1;
    CData/*4:0*/ regfile_tb__DOT__rs2;
    CData/*4:0*/ regfile_tb__DOT__rd;
    CData/*0:0*/ __Vtrigprevexpr___TOP__regfile_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ regfile_tb__DOT__wd;
    IData/*31:0*/ regfile_tb__DOT__dut__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> regfile_tb__DOT__dut__DOT__regfile;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vregfile_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vregfile_tb___024root(Vregfile_tb__Syms* symsp, const char* v__name);
    ~Vregfile_tb___024root();
    VL_UNCOPYABLE(Vregfile_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
