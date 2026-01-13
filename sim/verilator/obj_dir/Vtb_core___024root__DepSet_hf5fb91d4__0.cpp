// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_core.h for the primary calling header

#include "Vtb_core__pch.h"
#include "Vtb_core__Syms.h"
#include "Vtb_core___024root.h"

VlCoroutine Vtb_core___024root___eval_initial__TOP__Vtiming__0(Vtb_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_core__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_core__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    vlSymsp->_vm_contextp__->dumpfile("sim/waves/tb_core_wave.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_core__DOT__clk = 0U;
    vlSelfRef.tb_core__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000004e20ULL, 
                                         nullptr, "rtl/testbenches/tb_core.sv", 
                                         26);
    vlSelfRef.tb_core__DOT__rst = 0U;
    tb_core__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0x000001f4U;
    while (VL_LTS_III(32, 0U, tb_core__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h78f94584__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_core.clk)", 
                                                             "rtl/testbenches/tb_core.sv", 
                                                             29);
        tb_core__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_core__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    VL_FINISH_MT("rtl/testbenches/tb_core.sv", 35, "");
}

VlCoroutine Vtb_core___024root___eval_initial__TOP__Vtiming__1(Vtb_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "rtl/testbenches/tb_core.sv", 
                                             16);
        vlSelfRef.tb_core__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_core__DOT__clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_core___024root___dump_triggers__act(Vtb_core___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_core___024root___eval_triggers__act(Vtb_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_triggers__act\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_core__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core__DOT__clk__0 
        = vlSelfRef.tb_core__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_core___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtb_core___024root___nba_sequent__TOP__0(Vtb_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__0\n"); );
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*14:0*/ __VdfgRegularize_he50b618e_0_0;
    __VdfgRegularize_he50b618e_0_0 = 0;
    IData/*26:0*/ __VdfgRegularize_he50b618e_0_1;
    __VdfgRegularize_he50b618e_0_1 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1;
    __VdfgRegularize_h6e95ff9d_0_1 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2;
    __VdfgRegularize_h6e95ff9d_0_2 = 0;
    CData/*0:0*/ __VdlySet__tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile__v0;
    __VdlySet__tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile__v32;
    __VdlyVal__tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile__v32 = 0;
    CData/*4:0*/ __VdlyDim0__tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile__v32;
    __VdlyDim0__tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile__v32 = 0;
    CData/*0:0*/ __VdlySet__tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile__v32;
    __VdlySet__tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile__v32 = 0;
    CData/*7:0*/ __VdlyVal__tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem__v0;
    __VdlyVal__tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem__v0 = 0;
    SData/*11:0*/ __VdlyDim0__tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem__v0;
    __VdlyDim0__tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem__v0;
    __VdlySet__tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem__v1;
    __VdlyVal__tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem__v1 = 0;
    SData/*11:0*/ __VdlyDim0__tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem__v1;
    __VdlyDim0__tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem__v2;
    __VdlyVal__tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem__v2 = 0;
    SData/*11:0*/ __VdlyDim0__tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem__v2;
    __VdlyDim0__tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem__v3;
    __VdlyVal__tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem__v3 = 0;
    SData/*11:0*/ __VdlyDim0__tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem__v3;
    __VdlyDim0__tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem__v3 = 0;
    // Body
    __VdlySet__tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem__v0 = 0U;
    __VdlySet__tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile__v0 = 0U;
    __VdlySet__tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile__v32 = 0U;
    if ((8U & vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[0U])) {
        __VdlyVal__tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem__v0 
            = (0x000000ffU & (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[0U] 
                              >> 0x0000000aU));
        __VdlyDim0__tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem__v0 
            = (0x000003ffU & (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[1U] 
                              >> 0x0000000cU));
        __VdlySet__tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem__v0 = 1U;
        __VdlyVal__tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem__v1 
            = (0x000000ffU & (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[0U] 
                              >> 0x00000012U));
        __VdlyDim0__tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem__v1 
            = (0x000003ffU & (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[1U] 
                              >> 0x0000000cU));
        __VdlyVal__tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem__v2 
            = (0x000000ffU & ((vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[1U] 
                               << 6U) | (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[0U] 
                                         >> 0x0000001aU)));
        __VdlyDim0__tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem__v2 
            = (0x000003ffU & (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[1U] 
                              >> 0x0000000cU));
        __VdlyVal__tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem__v3 
            = (0x000000ffU & (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[1U] 
                              >> 2U));
        __VdlyDim0__tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem__v3 
            = (0x000003ffU & (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[1U] 
                              >> 0x0000000cU));
    }
    if (((IData)(vlSelfRef.tb_core__DOT__rst) | (IData)(vlSelfRef.tb_core__DOT__dut__DOT__ifid_reg__DOT__flush))) {
        vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[1U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[2U] = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.tb_core__DOT__dut__DOT__ifid_reg__DOT__stall)))) {
        vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
            = (IData)((((QData)((IData)(vlSelfRef.tb_core__DOT__dut__DOT__pc)) 
                        << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__imem_inst__DOT__dout_r))));
        vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[1U] 
            = (IData)(((((QData)((IData)(vlSelfRef.tb_core__DOT__dut__DOT__pc)) 
                         << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__imem_inst__DOT__dout_r))) 
                       >> 0x00000020U));
        vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[2U] 
            = (1U & (~ (IData)(vlSelfRef.tb_core__DOT__dut__DOT__ifid_reg__DOT__stall)));
    }
    if (vlSelfRef.tb_core__DOT__rst) {
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__unnamedblk1__DOT__i = 0x00000020U;
        __VdlySet__tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile__v0 = 1U;
    } else if ((4U & vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[0U])) {
        __VdlyVal__tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile__v32 
            = ((0U == (3U & vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[0U]))
                ? ((vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[2U] 
                    << 0x00000018U) | (vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[1U] 
                                       >> 8U)) : ((1U 
                                                   == 
                                                   (3U 
                                                    & vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[0U]))
                                                   ? 
                                                  ((vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[1U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[0U] 
                                                      >> 8U))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[0U]))
                                                    ? 
                                                   ((vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[3U] 
                                                     << 0x00000018U) 
                                                    | (vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[2U] 
                                                       >> 8U))
                                                    : 0xdeadbeefU)));
        __VdlyDim0__tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile__v32 
            = (0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[0U] 
                              >> 3U));
        __VdlySet__tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile__v32 = 1U;
    }
    if (__VdlySet__tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile__v0) {
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[1U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[2U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[3U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[4U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[5U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[6U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[7U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[8U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[9U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x0aU] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x0bU] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x0cU] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x0dU] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x0eU] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x0fU] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x10U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x11U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x12U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x13U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x14U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x15U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x16U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x17U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x18U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x19U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x1aU] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x1bU] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x1cU] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x1dU] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x1eU] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[0x1fU] = 0U;
    }
    if (__VdlySet__tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile__v32) {
        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile[__VdlyDim0__tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile__v32] 
            = __VdlyVal__tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile__v32;
    }
    vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__imem_inst__DOT__dout_r 
        = vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__imem_inst__DOT__mem
        [(0x000003ffU & (vlSelfRef.tb_core__DOT__dut__DOT__pc 
                         >> 2U))];
    vlSelfRef.tb_core__DOT__dut__DOT__hazard_unit_inst__DOT__id_uses_rs1 
        = ((0x00000040U & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])
            ? ((1U & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                      >> 5U)) && ((1U & (~ (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                            >> 4U))) 
                                  && ((8U & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])
                                       ? ((1U & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])))
                                       : ((4U & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])
                                           ? ((1U & 
                                               (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U]))
                                           : ((1U & 
                                               (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U]))))))
            : ((0x00000020U & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])
                ? ((0x00000010U & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])
                    ? ((1U & (~ (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                 >> 3U))) && ((1U & 
                                               (~ (
                                                   vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U]))))
                    : ((1U & (~ (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                 >> 3U))) && ((1U & 
                                               (~ (
                                                   vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])))))
                : ((0x00000010U & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])
                    ? ((1U & (~ (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                 >> 3U))) && ((1U & 
                                               (~ (
                                                   vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U]))))
                    : ((1U & (~ (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                 >> 3U))) && ((1U & 
                                               (~ (
                                                   vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])))))));
    __VdfgRegularize_he50b618e_0_0 = ((0x00007c00U 
                                       & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                          >> 5U)) | 
                                      ((0x000003e0U 
                                        & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                           >> 0x0000000fU)) 
                                       | (0x0000001fU 
                                          & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                             >> 7U))));
    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op = 0U;
    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__regwen = 0U;
    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel = 5U;
    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__A_sel = 0U;
    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__B_sel = 0U;
    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__wb_sel = 0U;
    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__branch_type = 6U;
    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type 
        = (0x0000007fU & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U]);
    if ((0x00000040U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type))) {
        if ((0x00000020U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type))) {
            if ((0x00000010U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type))) {
                            if ((1U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type))) {
                                vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__regwen = 0U;
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type))) {
                if ((4U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type))) {
                    if ((2U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type))) {
                        if ((1U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type))) {
                            vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__regwen = 1U;
                            vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__A_sel = 1U;
                            vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__B_sel = 2U;
                            vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel = 4U;
                            vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__wb_sel = 2U;
                            vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__branch_type = 7U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type))) {
                if ((2U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type))) {
                    if ((1U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type))) {
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__regwen = 1U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__A_sel = 0U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__B_sel = 1U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel = 0U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op = 0U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__wb_sel = 2U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__branch_type = 7U;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type))) {
                if ((1U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type))) {
                    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__regwen = 0U;
                    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op = 0U;
                    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__A_sel = 1U;
                    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__B_sel = 1U;
                    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel = 2U;
                    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__wb_sel = 0U;
                    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__branch_type 
                        = ((0x00004000U & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])
                            ? ((0x00002000U & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])
                                ? ((0x00001000U & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])
                                    ? 5U : 4U) : ((0x00001000U 
                                                   & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])
                                                   ? 3U
                                                   : 2U))
                            : ((0x00002000U & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])
                                ? 6U : ((0x00001000U 
                                         & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])
                                         ? 1U : 0U)));
                }
            }
        }
    } else if ((0x00000020U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type))) {
        if ((0x00000010U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type))) {
                    if ((2U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type))) {
                        if ((1U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type))) {
                            vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__regwen = 1U;
                            vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__A_sel = 2U;
                            vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__B_sel = 1U;
                            vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel = 3U;
                            vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__wb_sel = 0U;
                            vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__branch_type = 6U;
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type))) {
                    if ((1U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type))) {
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__regwen = 1U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__A_sel = 0U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__B_sel = 0U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel = 5U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__wb_sel = 0U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__branch_type = 6U;
                        if ((0x40000000U & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])) {
                            if ((0x00004000U & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])) {
                                if ((1U & (~ (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                              >> 0x0000000dU)))) {
                                    if ((0x00001000U 
                                         & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])) {
                                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op = 7U;
                                    }
                                }
                            } else if ((1U & (~ (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                 >> 0x0000000dU)))) {
                                if ((1U & (~ (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                              >> 0x0000000cU)))) {
                                    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op = 1U;
                                }
                            }
                        } else {
                            vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op 
                                = ((0x00004000U & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])
                                    ? ((0x00002000U 
                                        & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])
                                        ? ((0x00001000U 
                                            & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])
                                            ? 2U : 3U)
                                        : ((0x00001000U 
                                            & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])
                                            ? 6U : 4U))
                                    : ((0x00002000U 
                                        & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])
                                        ? ((0x00001000U 
                                            & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])
                                            ? 9U : 8U)
                                        : ((0x00001000U 
                                            & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])
                                            ? 5U : 0U)));
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type) 
                             >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type))) {
                    if ((1U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type))) {
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__regwen = 0U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op = 0U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__A_sel = 0U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__B_sel = 1U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel = 1U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__wb_sel = 0U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__branch_type = 6U;
                    }
                }
            }
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type))) {
                if ((2U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type))) {
                    if ((1U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type))) {
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__regwen = 1U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__A_sel = 1U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__B_sel = 1U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel = 3U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__wb_sel = 0U;
                        vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__branch_type = 6U;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type))) {
                if ((1U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type))) {
                    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__regwen = 1U;
                    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__A_sel = 0U;
                    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__B_sel = 1U;
                    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel = 0U;
                    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__wb_sel = 0U;
                    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__branch_type = 6U;
                    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op 
                        = ((0x00004000U & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])
                            ? ((0x00002000U & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])
                                ? ((0x00001000U & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])
                                    ? 2U : 3U) : ((0x00001000U 
                                                   & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])
                                                   ? 
                                                  ((0x40000000U 
                                                    & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])
                                                    ? 7U
                                                    : 6U)
                                                   : 4U))
                            : ((0x00002000U & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])
                                ? ((0x00001000U & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])
                                    ? 9U : 8U) : ((0x00001000U 
                                                   & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])
                                                   ? 5U
                                                   : 0U)));
                }
            }
        }
    } else if ((8U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type))) {
        if ((4U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type))) {
            if ((2U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type))) {
                if ((1U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type))) {
                    vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__regwen = 0U;
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type) 
                         >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type))) {
            if ((1U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type))) {
                vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__regwen = 1U;
                vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op = 0U;
                vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__A_sel = 0U;
                vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__B_sel = 1U;
                vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel = 0U;
                vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__wb_sel = 1U;
                vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__branch_type = 6U;
            }
        }
    }
    __VdfgRegularize_he50b618e_0_1 = (((IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__wb_sel) 
                                       << 0x00000019U) 
                                      | (((IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__branch_type) 
                                          << 0x00000016U) 
                                         | (((IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type) 
                                             << 0x0000000fU) 
                                            | (IData)(__VdfgRegularize_he50b618e_0_0))));
    if (vlSelfRef.tb_core__DOT__rst) {
        vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[0U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[1U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[2U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[3U] = 0U;
    } else {
        vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[0U] 
            = (IData)((((QData)((IData)(vlSelfRef.tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__rdata_r)) 
                        << 8U) | (QData)((IData)(((0x000000f8U 
                                                   & (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[0U] 
                                                      >> 2U)) 
                                                  | (7U 
                                                     & vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[0U]))))));
        vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[1U] 
            = (((vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[2U] 
                 << 0x0000001eU) | (0x3fffff00U & (
                                                   vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[1U] 
                                                   >> 2U))) 
               | (IData)(((((QData)((IData)(vlSelfRef.tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__rdata_r)) 
                            << 8U) | (QData)((IData)(
                                                     ((0x000000f8U 
                                                       & (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[0U] 
                                                          >> 2U)) 
                                                      | (7U 
                                                         & vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[0U]))))) 
                          >> 0x00000020U)));
        vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[2U] 
            = ((0x000000ffU & (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[2U] 
                               >> 2U)) | ((vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[3U] 
                                           << 0x0000001eU) 
                                          | (0x3fffff00U 
                                             & (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[2U] 
                                                >> 2U))));
        vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[3U] 
            = ((0x000000ffU & (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[3U] 
                               >> 2U)) | (0x00000100U 
                                          & (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[3U] 
                                             >> 2U)));
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (3U & vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[0U])) 
                               << 2U) | (((1U == (3U 
                                                  & vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[0U])) 
                                          << 1U) | 
                                         (0U == (3U 
                                                 & vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[0U])))))))) {
        if ((0U != (((2U == (3U & vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[0U])) 
                     << 2U) | (((1U == (3U & vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[0U])) 
                                << 1U) | (0U == (3U 
                                                 & vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[0U])))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: wb.sv:17: Assertion failed in %Ntb_core.dut.writeback_inst: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(3U 
                                                   & vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[0U]));
                VL_STOP_MT("rtl/pipelinestages/wb.sv", 17, "");
            }
        }
    }
    __VdfgRegularize_h6e95ff9d_0_2 = ((vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[0U] 
                                       >> 2U) & (0U 
                                                 != 
                                                 (0x0000001fU 
                                                  & (vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[0U] 
                                                     >> 3U))));
    if ((0x00000010U & vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[0U])) {
        vlSelfRef.tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__rdata_r 
            = vlSelfRef.tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem
            [(0x000003ffU & (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[1U] 
                             >> 0x0000000cU))];
    }
    if (vlSelfRef.tb_core__DOT__rst) {
        vlSelfRef.tb_core__DOT__dut__DOT__pc = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[0U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[1U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[2U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[3U] = 0U;
    } else {
        vlSelfRef.tb_core__DOT__dut__DOT__pc = vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__pcreg_inst__DOT__pc_next;
        vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[0U] 
            = (((IData)((((QData)((IData)(vlSelfRef.tb_core__DOT__dut__DOT__E_alu_result)) 
                          << 0x00000020U) | (QData)((IData)(
                                                            ((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[3U] 
                                                              << 0x00000018U) 
                                                             | (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[2U] 
                                                                >> 8U)))))) 
                << 0x0000000aU) | ((0x000003e0U & (
                                                   vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[1U] 
                                                   << 2U)) 
                                   | (0x0000001fU & 
                                      (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                       >> 0x0000000aU))));
        vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[1U] 
            = (((IData)((((QData)((IData)(vlSelfRef.tb_core__DOT__dut__DOT__E_alu_result)) 
                          << 0x00000020U) | (QData)((IData)(
                                                            ((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[3U] 
                                                              << 0x00000018U) 
                                                             | (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[2U] 
                                                                >> 8U)))))) 
                >> 0x00000016U) | ((IData)(((((QData)((IData)(vlSelfRef.tb_core__DOT__dut__DOT__E_alu_result)) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(
                                                               ((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[3U] 
                                                                 << 0x00000018U) 
                                                                | (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[2U] 
                                                                   >> 8U))))) 
                                            >> 0x00000020U)) 
                                   << 0x0000000aU));
        vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[2U] 
            = (((IData)((((QData)((IData)((1U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[5U] 
                                                 >> 8U)))) 
                          << 0x00000020U) | (QData)((IData)(
                                                            ((IData)(4U) 
                                                             + 
                                                             ((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[5U] 
                                                               << 0x00000018U) 
                                                              | (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[4U] 
                                                                 >> 8U))))))) 
                << 0x0000000aU) | ((IData)(((((QData)((IData)(vlSelfRef.tb_core__DOT__dut__DOT__E_alu_result)) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(
                                                               ((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[3U] 
                                                                 << 0x00000018U) 
                                                                | (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[2U] 
                                                                   >> 8U))))) 
                                            >> 0x00000020U)) 
                                   >> 0x00000016U));
        vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[3U] 
            = (((IData)((((QData)((IData)((1U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[5U] 
                                                 >> 8U)))) 
                          << 0x00000020U) | (QData)((IData)(
                                                            ((IData)(4U) 
                                                             + 
                                                             ((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[5U] 
                                                               << 0x00000018U) 
                                                              | (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[4U] 
                                                                 >> 8U))))))) 
                >> 0x00000016U) | ((IData)(((((QData)((IData)(
                                                              (1U 
                                                               & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[5U] 
                                                                  >> 8U)))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(
                                                               ((IData)(4U) 
                                                                + 
                                                                ((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[5U] 
                                                                  << 0x00000018U) 
                                                                 | (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[4U] 
                                                                    >> 8U)))))) 
                                            >> 0x00000020U)) 
                                   << 0x0000000aU));
    }
    vlSelfRef.__VdfgRegularize_he50b618e_0_2 = (((QData)((IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__A_sel)) 
                                                 << 0x0000001eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__B_sel) 
                                                                    << 0x0000001bU) 
                                                                   | __VdfgRegularize_he50b618e_0_1))));
    if (__VdlySet__tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem__v0) {
        vlSelfRef.tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem[__VdlyDim0__tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem
                [__VdlyDim0__tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem__v0]) 
               | (IData)(__VdlyVal__tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem__v0));
        vlSelfRef.tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem[__VdlyDim0__tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem
                [__VdlyDim0__tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem__v1) 
                  << 8U));
        vlSelfRef.tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem[__VdlyDim0__tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem
                [__VdlyDim0__tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem__v2) 
                  << 0x00000010U));
        vlSelfRef.tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem[__VdlyDim0__tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem__v3] 
            = ((0x00ffffffU & vlSelfRef.tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem
                [__VdlyDim0__tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__tb_core__DOT__dut__DOT__mem_inst__DOT__dmem_inst__DOT__mem__v3) 
                  << 0x00000018U));
    }
    __VdfgRegularize_h6e95ff9d_0_1 = ((vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[0U] 
                                       >> 2U) & (0U 
                                                 != 
                                                 (0x0000001fU 
                                                  & (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[0U] 
                                                     >> 5U))));
    if (((IData)(vlSelfRef.tb_core__DOT__rst) | ((IData)(vlSelfRef.tb_core__DOT__dut__DOT__ifid_reg__DOT__stall) 
                                                 | (IData)(vlSelfRef.tb_core__DOT__dut__DOT__ifid_reg__DOT__flush)))) {
        vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[1U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[2U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[3U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[4U] = 0U;
        vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[5U] = 0U;
    } else {
        vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
            = vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[0U];
        vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[1U] 
            = vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[1U];
        vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[2U] 
            = vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[2U];
        vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[3U] 
            = vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[3U];
        vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[4U] 
            = vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[4U];
        vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[5U] 
            = vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[5U];
    }
    vlSelfRef.tb_core__DOT__dut__DOT__forwardingunit_inst__DOT__forwardA_br 
        = (((IData)(__VdfgRegularize_h6e95ff9d_0_1) 
            & ((0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[0U] 
                               >> 5U)) == (0x0000001fU 
                                           & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                              >> 0x0000000fU))))
            ? 1U : (((IData)(__VdfgRegularize_h6e95ff9d_0_2) 
                     & ((0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[0U] 
                                        >> 3U)) == 
                        (0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                        >> 0x0000000fU))))
                     ? 2U : 0U));
    vlSelfRef.tb_core__DOT__dut__DOT__forwardingunit_inst__DOT__forwardB_br 
        = (((IData)(__VdfgRegularize_h6e95ff9d_0_1) 
            & ((0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[0U] 
                               >> 5U)) == (0x0000001fU 
                                           & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                              >> 0x00000014U))))
            ? 1U : (((IData)(__VdfgRegularize_h6e95ff9d_0_2) 
                     & ((0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[0U] 
                                        >> 3U)) == 
                        (0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                        >> 0x00000014U))))
                     ? 2U : 0U));
    vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[0U] 
        = ((0xfe000000U & vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[0U]) 
           | ((0x01ff8000U & ((IData)(__VdfgRegularize_he50b618e_0_0) 
                              << 0x0000000aU)) | ((
                                                   (3U 
                                                    == (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type)) 
                                                   << 0x0000000eU) 
                                                  | (((0x23U 
                                                       == (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__instruction_type)) 
                                                      << 0x0000000dU) 
                                                     | (((IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__regwen) 
                                                         << 0x0000000cU) 
                                                        | (0x00000fffU 
                                                           & (__VdfgRegularize_he50b618e_0_1 
                                                              >> 0x0000000fU)))))));
    vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[0U] 
        = ((0x01ffffffU & vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[0U]) 
           | (((0x00007c00U & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                               << 3U)) | (((IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op) 
                                           << 6U) | 
                                          (0x0000003fU 
                                           & (IData)(
                                                     (vlSelfRef.__VdfgRegularize_he50b618e_0_2 
                                                      >> 0x0000001bU))))) 
              << 0x00000019U));
    vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[1U] 
        = ((0xffffff00U & vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[1U]) 
           | (((0x00007c00U & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                               << 3U)) | (((IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__alu_op) 
                                           << 6U) | 
                                          (0x0000003fU 
                                           & (IData)(
                                                     (vlSelfRef.__VdfgRegularize_he50b618e_0_2 
                                                      >> 0x0000001bU))))) 
              >> 7U));
    vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[1U] 
        = ((0x000000ffU & vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[1U]) 
           | (((4U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel))
                ? ((2U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel))
                    ? 0U : ((1U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel))
                             ? 0U : (((- (IData)((vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                  >> 0x0000001fU))) 
                                      << 0x00000014U) 
                                     | ((((0x000001feU 
                                           & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                              >> 0x0000000bU)) 
                                          | (1U & (
                                                   vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                   >> 0x00000014U))) 
                                         << 0x0000000bU) 
                                        | (0x000007feU 
                                           & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                              >> 0x00000014U))))))
                : ((2U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel))
                    ? ((1U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel))
                        ? (0xfffff000U & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])
                        : (((- (IData)((vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                        >> 0x0000001fU))) 
                            << 0x0000000dU) | ((((2U 
                                                  & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                     >> 0x0000001eU)) 
                                                 | (1U 
                                                    & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                       >> 7U))) 
                                                << 0x0000000bU) 
                                               | ((0x000007e0U 
                                                   & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                      >> 0x00000014U)) 
                                                  | (0x0000001eU 
                                                     & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                        >> 7U))))))
                    : ((1U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel))
                        ? (((- (IData)((vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                        >> 0x0000001fU))) 
                            << 0x0000000cU) | ((0x00000fe0U 
                                                & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                   >> 0x00000014U)) 
                                               | (0x0000001fU 
                                                  & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                     >> 7U))))
                        : (((- (IData)((vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                        >> 0x0000001fU))) 
                            << 0x0000000cU) | (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                               >> 0x00000014U))))) 
              << 8U));
    vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[2U] 
        = ((0xffffff00U & vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[2U]) 
           | (((4U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel))
                ? ((2U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel))
                    ? 0U : ((1U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel))
                             ? 0U : (((- (IData)((vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                  >> 0x0000001fU))) 
                                      << 0x00000014U) 
                                     | ((((0x000001feU 
                                           & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                              >> 0x0000000bU)) 
                                          | (1U & (
                                                   vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                   >> 0x00000014U))) 
                                         << 0x0000000bU) 
                                        | (0x000007feU 
                                           & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                              >> 0x00000014U))))))
                : ((2U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel))
                    ? ((1U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel))
                        ? (0xfffff000U & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])
                        : (((- (IData)((vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                        >> 0x0000001fU))) 
                            << 0x0000000dU) | ((((2U 
                                                  & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                     >> 0x0000001eU)) 
                                                 | (1U 
                                                    & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                       >> 7U))) 
                                                << 0x0000000bU) 
                                               | ((0x000007e0U 
                                                   & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                      >> 0x00000014U)) 
                                                  | (0x0000001eU 
                                                     & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                        >> 7U))))))
                    : ((1U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__control_inst__DOT__imm_sel))
                        ? (((- (IData)((vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                        >> 0x0000001fU))) 
                            << 0x0000000cU) | ((0x00000fe0U 
                                                & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                   >> 0x00000014U)) 
                                               | (0x0000001fU 
                                                  & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                     >> 7U))))
                        : (((- (IData)((vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                        >> 0x0000001fU))) 
                            << 0x0000000cU) | (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                               >> 0x00000014U))))) 
              >> 0x00000018U));
    vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[2U] 
        = ((0x000000ffU & vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[2U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile
                                        [(0x0000001fU 
                                          & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                             >> 0x0000000fU))])) 
                        << 0x00000020U) | (QData)((IData)(
                                                          vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile
                                                          [
                                                          (0x0000001fU 
                                                           & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                              >> 0x00000014U))])))) 
              << 8U));
    vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[3U] 
        = (((IData)((((QData)((IData)(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile
                                      [(0x0000001fU 
                                        & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                           >> 0x0000000fU))])) 
                      << 0x00000020U) | (QData)((IData)(
                                                        vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile
                                                        [
                                                        (0x0000001fU 
                                                         & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                            >> 0x00000014U))])))) 
            >> 0x00000018U) | ((IData)(((((QData)((IData)(
                                                          vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile
                                                          [
                                                          (0x0000001fU 
                                                           & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                              >> 0x0000000fU))])) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile
                                                           [
                                                           (0x0000001fU 
                                                            & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                               >> 0x00000014U))]))) 
                                        >> 0x00000020U)) 
                               << 8U));
    vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[4U] 
        = ((0xffffff00U & vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[4U]) 
           | ((IData)(((((QData)((IData)(vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile
                                         [(0x0000001fU 
                                           & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                              >> 0x0000000fU))])) 
                         << 0x00000020U) | (QData)((IData)(
                                                           vlSelfRef.tb_core__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regfile
                                                           [
                                                           (0x0000001fU 
                                                            & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                               >> 0x00000014U))]))) 
                       >> 0x00000020U)) >> 0x00000018U));
    vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[4U] 
        = ((0x000000ffU & vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[4U]) 
           | ((IData)((0x00000001ffffffffULL & (((QData)((IData)(
                                                                 vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[2U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[1U]))))) 
              << 8U));
    vlSelfRef.tb_core__DOT__dut__DOT__idex_reg__DOT__d[5U] 
        = (0x000001ffU & (((IData)((0x00000001ffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[2U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(
                                                         vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[1U]))))) 
                           >> 0x00000018U) | ((IData)(
                                                      ((0x00000001ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[2U])) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(
                                                                             vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[1U])))) 
                                                       >> 0x00000020U)) 
                                              << 8U)));
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.tb_core__DOT__dut__DOT__forwardingunit_inst__DOT__forwardA_br)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.tb_core__DOT__dut__DOT__forwardingunit_inst__DOT__forwardA_br)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.tb_core__DOT__dut__DOT__forwardingunit_inst__DOT__forwardA_br)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.tb_core__DOT__dut__DOT__forwardingunit_inst__DOT__forwardA_br)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.tb_core__DOT__dut__DOT__forwardingunit_inst__DOT__forwardA_br)) 
                                << 1U) | (0U == (IData)(vlSelfRef.tb_core__DOT__dut__DOT__forwardingunit_inst__DOT__forwardA_br)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: execute.sv:85: Assertion failed in %Ntb_core.dut.execute_inst: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.tb_core__DOT__dut__DOT__forwardingunit_inst__DOT__forwardA_br));
                VL_STOP_MT("rtl/pipelinestages/execute.sv", 85, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.tb_core__DOT__dut__DOT__forwardingunit_inst__DOT__forwardB_br)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.tb_core__DOT__dut__DOT__forwardingunit_inst__DOT__forwardB_br)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.tb_core__DOT__dut__DOT__forwardingunit_inst__DOT__forwardB_br)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.tb_core__DOT__dut__DOT__forwardingunit_inst__DOT__forwardB_br)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.tb_core__DOT__dut__DOT__forwardingunit_inst__DOT__forwardB_br)) 
                                << 1U) | (0U == (IData)(vlSelfRef.tb_core__DOT__dut__DOT__forwardingunit_inst__DOT__forwardB_br)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: execute.sv:91: Assertion failed in %Ntb_core.dut.execute_inst: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.tb_core__DOT__dut__DOT__forwardingunit_inst__DOT__forwardB_br));
                VL_STOP_MT("rtl/pipelinestages/execute.sv", 91, "");
            }
        }
    }
    vlSelfRef.tb_core__DOT__dut__DOT__ifid_reg__DOT__stall 
        = ((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[5U] 
            >> 8U) & ((3U == (0x0000007fU & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U])) 
                      & (((IData)(vlSelfRef.tb_core__DOT__dut__DOT__hazard_unit_inst__DOT__id_uses_rs1) 
                          & (((0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[1U] 
                                              >> 3U)) 
                              == (0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                 >> 0x0000000fU))) 
                             & (0U != (0x0000001fU 
                                       & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                          >> 0x0000000fU))))) 
                         | (((0x00000040U & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])
                              ? ((1U & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                        >> 5U)) && 
                                 ((1U & (~ (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                            >> 4U))) 
                                  && ((1U & (~ (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                >> 3U))) 
                                      && ((1U & (~ 
                                                 (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U]))))))
                              : ((1U & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                        >> 5U)) && 
                                 ((0x00000010U & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U])
                                   ? ((1U & (~ (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                >> 3U))) 
                                      && ((1U & (~ 
                                                 (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U]))))
                                   : ((1U & (~ (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                >> 3U))) 
                                      && ((1U & (~ 
                                                 (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U]))))))) 
                            & (((0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[1U] 
                                                >> 3U)) 
                                == (0x0000001fU & (
                                                   vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                                   >> 0x00000014U))) 
                               & (0U != (0x0000001fU 
                                         & (vlSelfRef.tb_core__DOT__dut__DOT__if_id_reg_q[0U] 
                                            >> 0x00000014U))))))));
    vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs1 
        = ((0U == (IData)(vlSelfRef.tb_core__DOT__dut__DOT__forwardingunit_inst__DOT__forwardA_br))
            ? ((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[4U] 
                << 0x00000018U) | (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[3U] 
                                   >> 8U)) : ((1U == (IData)(vlSelfRef.tb_core__DOT__dut__DOT__forwardingunit_inst__DOT__forwardA_br))
                                               ? ((
                                                   vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[2U] 
                                                   << 0x00000016U) 
                                                  | (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[1U] 
                                                     >> 0x0000000aU))
                                               : ((2U 
                                                   == (IData)(vlSelfRef.tb_core__DOT__dut__DOT__forwardingunit_inst__DOT__forwardA_br))
                                                   ? 
                                                  ((vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[2U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[1U] 
                                                      >> 8U))
                                                   : 0xdeadbeefU)));
    vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs2 
        = ((0U == (IData)(vlSelfRef.tb_core__DOT__dut__DOT__forwardingunit_inst__DOT__forwardB_br))
            ? ((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[3U] 
                << 0x00000018U) | (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[2U] 
                                   >> 8U)) : ((1U == (IData)(vlSelfRef.tb_core__DOT__dut__DOT__forwardingunit_inst__DOT__forwardB_br))
                                               ? ((
                                                   vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[2U] 
                                                   << 0x00000016U) 
                                                  | (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[1U] 
                                                     >> 0x0000000aU))
                                               : ((2U 
                                                   == (IData)(vlSelfRef.tb_core__DOT__dut__DOT__forwardingunit_inst__DOT__forwardB_br))
                                                   ? 
                                                  ((vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[2U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[1U] 
                                                      >> 8U))
                                                   : 0xdeadbeefU)));
    vlSelfRef.tb_core__DOT__dut__DOT__forwardA = (7U 
                                                  & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                                     >> 0x0000001cU));
    if ((((vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[0U] 
           >> 2U) & (0U != (0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[0U] 
                                           >> 5U)))) 
         & ((0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[0U] 
                            >> 5U)) == (0x0000001fU 
                                        & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                           >> 0x00000014U))))) {
        vlSelfRef.tb_core__DOT__dut__DOT__forwardA = 3U;
    } else if ((((vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[0U] 
                  >> 2U) & (0U != (0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[0U] 
                                                  >> 3U)))) 
                & ((0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[0U] 
                                   >> 3U)) == (0x0000001fU 
                                               & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                                  >> 0x00000014U))))) {
        vlSelfRef.tb_core__DOT__dut__DOT__forwardA = 4U;
    }
    vlSelfRef.tb_core__DOT__dut__DOT__forwardB = (7U 
                                                  & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                                     >> 0x00000019U));
    if (((((vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[0U] 
            >> 2U) & (0U != (0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[0U] 
                                            >> 5U)))) 
          & ((0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[0U] 
                             >> 5U)) == (0x0000001fU 
                                         & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                            >> 0x0000000fU)))) 
         & (1U != (7U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                         >> 0x00000019U))))) {
        vlSelfRef.tb_core__DOT__dut__DOT__forwardB = 3U;
    } else if (((((vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[0U] 
                   >> 2U) & (0U != (0x0000001fU & (
                                                   vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[0U] 
                                                   >> 3U)))) 
                 & ((0x0000001fU & (vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[0U] 
                                    >> 3U)) == (0x0000001fU 
                                                & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                                   >> 0x0000000fU)))) 
                & (1U != (7U & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                >> 0x00000019U))))) {
        vlSelfRef.tb_core__DOT__dut__DOT__forwardB = 4U;
    }
    vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__pcreg_inst__DOT__pc_sel 
        = (IData)(((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[5U] 
                    >> 8U) & ((0x00000200U & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U])
                               ? ((0x00000100U & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U])
                                   ? (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                      >> 7U) : ((0x00000080U 
                                                 & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U])
                                                 ? 
                                                (vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs1 
                                                 >= vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs2)
                                                 : 
                                                (vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs1 
                                                 < vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs2)))
                               : ((0x00000100U & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U])
                                   ? ((0x00000080U 
                                       & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U])
                                       ? VL_GTES_III(32, vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs1, vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs2)
                                       : VL_LTS_III(32, vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs1, vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs2))
                                   : ((0x00000080U 
                                       & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U])
                                       ? (vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs1 
                                          != vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs2)
                                       : (vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs1 
                                          == vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__brcmp_inst__DOT__rs2))))));
    vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__A 
        = ((4U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__forwardA))
            ? ((2U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__forwardA))
                ? 0xdeadbeefU : ((1U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__forwardA))
                                  ? 0xdeadbeefU : (
                                                   (vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[2U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[1U] 
                                                      >> 8U))))
            : ((2U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__forwardA))
                ? ((1U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__forwardA))
                    ? ((vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[2U] 
                        << 0x00000016U) | (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[1U] 
                                           >> 0x0000000aU))
                    : 0U) : ((1U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__forwardA))
                              ? ((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[5U] 
                                  << 0x00000018U) | 
                                 (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[4U] 
                                  >> 8U)) : ((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[4U] 
                                              << 0x00000018U) 
                                             | (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[3U] 
                                                >> 8U)))));
    vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__B 
        = ((4U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__forwardB))
            ? ((2U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__forwardB))
                ? 0xdeadbeefU : ((1U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__forwardB))
                                  ? 0xdeadbeefU : (
                                                   (vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[2U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_core__DOT__dut__DOT__mem_wb_reg_q[1U] 
                                                      >> 8U))))
            : ((2U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__forwardB))
                ? ((1U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__forwardB))
                    ? ((vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[2U] 
                        << 0x00000016U) | (vlSelfRef.tb_core__DOT__dut__DOT__ex_mem_reg_q[1U] 
                                           >> 0x0000000aU))
                    : 4U) : ((1U & (IData)(vlSelfRef.tb_core__DOT__dut__DOT__forwardB))
                              ? ((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[2U] 
                                  << 0x00000018U) | 
                                 (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[1U] 
                                  >> 8U)) : ((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[3U] 
                                              << 0x00000018U) 
                                             | (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[2U] 
                                                >> 8U)))));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__pcreg_inst__DOT__pc_sel) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__pcreg_inst__DOT__pc_sel)))))))) {
        if ((0U != (((IData)(vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__pcreg_inst__DOT__pc_sel) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__pcreg_inst__DOT__pc_sel)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: pcreg.sv:20: Assertion failed in %Ntb_core.dut.fetch_inst.pcreg_inst: unique case, but multiple matches found for '32'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)(vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__pcreg_inst__DOT__pc_sel));
                VL_STOP_MT("rtl/units/pcreg.sv", 20, "");
            }
        }
    }
    vlSelfRef.tb_core__DOT__dut__DOT__ifid_reg__DOT__flush 
        = (((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[5U] 
             >> 8U) & ((IData)(vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__pcreg_inst__DOT__pc_sel) 
                       & (0x63U == (0x0000007fU & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U])))) 
           | (((0x6fU == (0x0000007fU & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U])) 
               | (0x67U == (0x0000007fU & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U]))) 
              & (vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[5U] 
                 >> 8U)));
    vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__shamt 
        = (0x0000001fU & vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__B);
    vlSelfRef.tb_core__DOT__dut__DOT__E_alu_result 
        = ((4U & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[1U])
            ? ((2U & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[1U])
                ? 0U : ((1U & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[1U])
                         ? 0U : ((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                                  >> 0x0000001fU) ? 
                                 ((vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__A 
                                   < vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__B)
                                   ? 1U : 0U) : (VL_LTS_III(32, vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__A, vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__B)
                                                  ? 1U
                                                  : 0U))))
            : ((2U & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[1U])
                ? ((1U & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[1U])
                    ? ((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                        >> 0x0000001fU) ? VL_SHIFTRS_III(32,32,5, vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__A, (IData)(vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__shamt))
                        : (vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__A 
                           >> (IData)(vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__shamt)))
                    : ((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                        >> 0x0000001fU) ? (vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__A 
                                           << (IData)(vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__shamt))
                        : (vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__A 
                           ^ vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__B)))
                : ((1U & vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[1U])
                    ? ((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                        >> 0x0000001fU) ? (vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__A 
                                           | vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__B)
                        : (vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__A 
                           & vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__B))
                    : ((vlSelfRef.tb_core__DOT__dut__DOT__id_ex_reg_q[0U] 
                        >> 0x0000001fU) ? (vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__A 
                                           - vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__B)
                        : (vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__A 
                           + vlSelfRef.tb_core__DOT__dut__DOT__execute_inst__DOT__alu_inst__DOT__B)))));
    vlSelfRef.tb_core__DOT__dut__DOT__E_zero = (0U 
                                                == vlSelfRef.tb_core__DOT__dut__DOT__E_alu_result);
    vlSelfRef.tb_core__DOT__dut__DOT__E_neg = (vlSelfRef.tb_core__DOT__dut__DOT__E_alu_result 
                                               >> 0x1fU);
    vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__pcreg_inst__DOT__pc_next 
        = ((IData)(vlSelfRef.tb_core__DOT__dut__DOT__fetch_inst__DOT__pcreg_inst__DOT__pc_sel)
            ? vlSelfRef.tb_core__DOT__dut__DOT__E_alu_result
            : ((IData)(4U) + vlSelfRef.tb_core__DOT__dut__DOT__pc));
}
