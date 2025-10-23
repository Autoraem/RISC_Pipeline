// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vregfile_tb__Syms.h"


void Vregfile_tb___024root__trace_chg_0_sub_0(Vregfile_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vregfile_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root__trace_chg_0\n"); );
    // Init
    Vregfile_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregfile_tb___024root*>(voidSelf);

    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;

    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;

    // Body
    Vregfile_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vregfile_tb___024root__trace_chg_0_sub_0(Vregfile_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root__trace_chg_0_sub_0\n"); );
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);

    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.regfile_tb__DOT__we));
        bufp->chgBit(oldp+1,(vlSelfRef.regfile_tb__DOT__rst));
        bufp->chgCData(oldp+2,(vlSelfRef.regfile_tb__DOT__rs1),5);
        bufp->chgCData(oldp+3,(vlSelfRef.regfile_tb__DOT__rs2),5);
        bufp->chgCData(oldp+4,(vlSelfRef.regfile_tb__DOT__rd),5);
        bufp->chgIData(oldp+5,(vlSelfRef.regfile_tb__DOT__wd),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+6,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[0]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[1]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[2]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[3]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[4]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[5]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[6]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[7]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[8]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[9]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[10]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[11]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[12]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[13]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[14]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[15]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[16]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[17]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[18]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[19]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[20]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[21]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[22]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[23]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[24]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[25]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[26]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[27]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[28]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[29]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[30]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile[31]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.regfile_tb__DOT__dut__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+39,(vlSelfRef.regfile_tb__DOT__clk));
    bufp->chgIData(oldp+40,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile
                            [vlSelfRef.regfile_tb__DOT__rs1]),32);
    bufp->chgIData(oldp+41,(vlSelfRef.regfile_tb__DOT__dut__DOT__regfile
                            [vlSelfRef.regfile_tb__DOT__rs2]),32);
}

void Vregfile_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root__trace_cleanup\n"); );
    // Init
    Vregfile_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregfile_tb___024root*>(voidSelf);

    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;

    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
