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
    CData/*2:0*/ tb_core__DOT__dut__DOT__forwardA;
    CData/*2:0*/ tb_core__DOT__dut__DOT__forwardB;
    CData/*1:0*/ tb_core__DOT__dut__DOT__forwardA_br;
    CData/*1:0*/ tb_core__DOT__dut__DOT__forwardB_br;
    CData/*0:0*/ tb_core__DOT__dut__DOT__E_zero;
    CData/*0:0*/ tb_core__DOT__dut__DOT__E_neg;
    CData/*3:0*/ tb_core__DOT__dut__DOT__control_inst__DOT__alu_op;
    CData/*0:0*/ tb_core__DOT__dut__DOT__control_inst__DOT__regwen;
    CData/*2:0*/ tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel;
    CData/*2:0*/ tb_core__DOT__dut__DOT__control_inst__DOT__A_sel;
    CData/*2:0*/ tb_core__DOT__dut__DOT__control_inst__DOT__B_sel;
    CData/*1:0*/ tb_core__DOT__dut__DOT__control_inst__DOT__wb_sel;
    CData/*2:0*/ tb_core__DOT__dut__DOT__control_inst__DOT__branch_type;
    CData/*6:0*/ tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type;
    CData/*4:0*/ tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__shamt;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_core__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_core__DOT__dut__DOT__pc;
    IData/*31:0*/ tb_core__DOT__dut__DOT__E_alu_result;
    IData/*31:0*/ tb_core__DOT__dut__DOT__fetch_inst__DOT__pcreg_inst__DOT__pc_next;
    IData/*31:0*/ tb_core__DOT__dut__DOT__fetch_inst__DOT__imem_inst__DOT__dout_r;
    IData/*31:0*/ tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__A;
    IData/*31:0*/ tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__B;
    IData/*31:0*/ tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs1;
    IData/*31:0*/ tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs2;
    IData/*31:0*/ tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__rdata_r;
    IData/*31:0*/ tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__unnamedblk1__DOT__i;
    IData/*26:0*/ __VdfgRegularize_he50b618e_0_1;
    IData/*31:0*/ __VactIterCount;
    VlWide<3>/*64:0*/ tb_core__DOT__dut__DOT__if_id_reg_q;
    VlWide<5>/*158:0*/ tb_core__DOT__dut__DOT__id_ex_reg_d;
    VlWide<5>/*158:0*/ tb_core__DOT__dut__DOT__id_ex_reg_q;
    VlWide<3>/*73:0*/ tb_core__DOT__dut__DOT__ex_mem_reg_q;
    QData/*38:0*/ tb_core__DOT__dut__DOT__mem_wb_reg_q;
    VlUnpacked<IData/*31:0*/, 1024> tb_core__DOT__dut__DOT__fetch_inst__DOT__imem_inst__DOT__mem;
    VlUnpacked<IData/*31:0*/, 32> tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile;
    VlUnpacked<IData/*31:0*/, 4096> tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
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
