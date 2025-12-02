// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_core.h for the primary calling header

#ifndef VERILATED_VTB_CORE___024ROOT_H_
#define VERILATED_VTB_CORE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_core__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_core___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_core__DOT__clk;
    CData/*0:0*/ tb_core__DOT__rst;
    CData/*0:0*/ tb_core__DOT__dut__DOT__control_inst_instr;
    CData/*3:0*/ tb_core__DOT__dut__DOT__control_inst__DOT__alu_op;
    CData/*0:0*/ tb_core__DOT__dut__DOT__control_inst__DOT__regwen;
    CData/*2:0*/ tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel;
    CData/*1:0*/ tb_core__DOT__dut__DOT__control_inst__DOT__A_sel;
    CData/*1:0*/ tb_core__DOT__dut__DOT__control_inst__DOT__B_sel;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_core__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_core__DOT__dut__DOT__pc;
    IData/*31:0*/ tb_core__DOT__dut__DOT__pc_next;
    IData/*31:0*/ tb_core__DOT__dut__DOT__fetch_inst__DOT__pcreg_inst__DOT__pc_next;
    IData/*31:0*/ tb_core__DOT__dut__DOT__fetch_inst__DOT__imem_inst__DOT__dout_r;
    IData/*31:0*/ __VactIterCount;
    VlWide<3>/*64:0*/ tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q;
    VlUnpacked<IData/*31:0*/, 1024> tb_core__DOT__dut__DOT__fetch_inst__DOT__imem_inst__DOT__mem;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h78f94584__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_core__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_core___024root(Vtb_core__Syms* symsp, const char* v__name);
    ~Vtb_core___024root();
    VL_UNCOPYABLE(Vtb_core___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
