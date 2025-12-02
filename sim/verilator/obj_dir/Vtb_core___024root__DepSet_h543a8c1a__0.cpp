// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_core.h for the primary calling header

#include "Vtb_core__pch.h"
#include "Vtb_core___024root.h"

VL_ATTR_COLD void Vtb_core___024root___eval_initial__TOP(Vtb_core___024root* vlSelf);
VlCoroutine Vtb_core___024root___eval_initial__TOP__Vtiming__0(Vtb_core___024root* vlSelf);
VlCoroutine Vtb_core___024root___eval_initial__TOP__Vtiming__1(Vtb_core___024root* vlSelf);

void Vtb_core___024root___eval_initial(Vtb_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_initial\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_core___024root___eval_initial__TOP(vlSelf);
    Vtb_core___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_core___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vtb_core___024root___eval_act(Vtb_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_act\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_core___024root___nba_sequent__TOP__0(Vtb_core___024root* vlSelf);

void Vtb_core___024root___eval_nba(Vtb_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_nba\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_core___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

void Vtb_core___024root___nba_sequent__TOP__0(Vtb_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__0\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_core__DOT__rst) {
        vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[1U] = 0U;
    } else {
        vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[0U] 
            = (IData)((((QData)((IData)(vlSelfRef.tb_core__DOT__dut__DOT__pc)) 
                        << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__imem_inst__DOT__dout_r))));
        vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[1U] 
            = (IData)(((((QData)((IData)(vlSelfRef.tb_core__DOT__dut__DOT__pc)) 
                         << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__imem_inst__DOT__dout_r))) 
                       >> 0x00000020U));
    }
    vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__imem_inst__DOT__dout_r 
        = vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__imem_inst__DOT__mem
        [(0x000003ffU & (vlSelfRef.tb_core__DOT__dut__DOT__pc 
                         >> 2U))];
    if (vlSelfRef.tb_core__DOT__rst) {
        vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[2U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__pc = 0U;
    } else {
        vlSelfRef.tb_core__DOT__dut__DOT____Vcellout__ifid_reg__q[2U] = 1U;
        vlSelfRef.tb_core__DOT__dut__DOT__pc = vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__pcreg_inst__DOT__pc_next;
    }
    vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__pcreg_inst__DOT__pc_next 
        = ((IData)(4U) + vlSelfRef.tb_core__DOT__dut__DOT__pc);
}

void Vtb_core___024root___timing_resume(Vtb_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___timing_resume\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h78f94584__0.resume(
                                                   "@(posedge tb_core.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_core___024root___timing_commit(Vtb_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___timing_commit\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h78f94584__0.commit(
                                                   "@(posedge tb_core.clk)");
    }
}

void Vtb_core___024root___eval_triggers__act(Vtb_core___024root* vlSelf);

bool Vtb_core___024root___eval_phase__act(Vtb_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_phase__act\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_core___024root___eval_triggers__act(vlSelf);
    Vtb_core___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_core___024root___timing_resume(vlSelf);
        Vtb_core___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_core___024root___eval_phase__nba(Vtb_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_phase__nba\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_core___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_core___024root___dump_triggers__nba(Vtb_core___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_core___024root___dump_triggers__act(Vtb_core___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_core___024root___eval(Vtb_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_core___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/testbenches/tb_core.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_core___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/testbenches/tb_core.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_core___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_core___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_core___024root___eval_debug_assertions(Vtb_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_debug_assertions\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
