// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontroldecoder_tb.h for the primary calling header

#include "Vcontroldecoder_tb__pch.h"
#include "Vcontroldecoder_tb__Syms.h"
#include "Vcontroldecoder_tb___024root.h"

VlCoroutine Vcontroldecoder_tb___024root___eval_initial__TOP__Vtiming__0(Vcontroldecoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroldecoder_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vcontroldecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    std::string __Vtask_controldecoder_tb__DOT__check__0__name;
    CData/*0:0*/ __Vtask_controldecoder_tb__DOT__check__0__cond;
    __Vtask_controldecoder_tb__DOT__check__0__cond = 0;
    std::string __Vtask_controldecoder_tb__DOT__check__1__name;
    CData/*0:0*/ __Vtask_controldecoder_tb__DOT__check__1__cond;
    __Vtask_controldecoder_tb__DOT__check__1__cond = 0;
    std::string __Vtask_controldecoder_tb__DOT__check__2__name;
    CData/*0:0*/ __Vtask_controldecoder_tb__DOT__check__2__cond;
    __Vtask_controldecoder_tb__DOT__check__2__cond = 0;
    std::string __Vtask_controldecoder_tb__DOT__check__3__name;
    CData/*0:0*/ __Vtask_controldecoder_tb__DOT__check__3__cond;
    __Vtask_controldecoder_tb__DOT__check__3__cond = 0;
    std::string __Vtask_controldecoder_tb__DOT__check__4__name;
    CData/*0:0*/ __Vtask_controldecoder_tb__DOT__check__4__cond;
    __Vtask_controldecoder_tb__DOT__check__4__cond = 0;
    std::string __Vtask_controldecoder_tb__DOT__check__5__name;
    CData/*0:0*/ __Vtask_controldecoder_tb__DOT__check__5__cond;
    __Vtask_controldecoder_tb__DOT__check__5__cond = 0;
    std::string __Vtask_controldecoder_tb__DOT__check__6__name;
    CData/*0:0*/ __Vtask_controldecoder_tb__DOT__check__6__cond;
    __Vtask_controldecoder_tb__DOT__check__6__cond = 0;
    std::string __Vtask_controldecoder_tb__DOT__check__7__name;
    CData/*0:0*/ __Vtask_controldecoder_tb__DOT__check__7__cond;
    __Vtask_controldecoder_tb__DOT__check__7__cond = 0;
    // Body
    vlSymsp->_vm_contextp__->dumpfile("sim/waves/controldecoder_tb_wave.vcd"s);
    vlSymsp->_traceDumpOpen();
    VL_WRITEF_NX("=== RISC-V Decoder Test ===\n",0);
    vlSelfRef.controldecoder_tb__DOT__instr = 0x003100b3U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "rtl/testbenches/controldecoder_tb.sv", 
                                         30);
    __Vtask_controldecoder_tb__DOT__check__0__cond 
        = (0U == (0x0000000fU & (vlSelfRef.controldecoder_tb__DOT__ctrl 
                                 >> 0x00000017U)));
    __Vtask_controldecoder_tb__DOT__check__0__name = "ADD opcode"s;
    if (__Vtask_controldecoder_tb__DOT__check__0__cond) {
        VL_WRITEF_NX("[PASS] %@\n",0,-1,&(__Vtask_controldecoder_tb__DOT__check__0__name));
    } else {
        VL_WRITEF_NX("[FAIL] %@\n",0,-1,&(__Vtask_controldecoder_tb__DOT__check__0__name));
    }
    __Vtask_controldecoder_tb__DOT__check__1__cond 
        = (2U == (0x0000001fU & (vlSelfRef.controldecoder_tb__DOT__ctrl 
                                 >> 0x0000000aU)));
    __Vtask_controldecoder_tb__DOT__check__1__name = "ADD rs1"s;
    if (__Vtask_controldecoder_tb__DOT__check__1__cond) {
        VL_WRITEF_NX("[PASS] %@\n",0,-1,&(__Vtask_controldecoder_tb__DOT__check__1__name));
    } else {
        VL_WRITEF_NX("[FAIL] %@\n",0,-1,&(__Vtask_controldecoder_tb__DOT__check__1__name));
    }
    __Vtask_controldecoder_tb__DOT__check__2__cond 
        = (3U == (0x0000001fU & (vlSelfRef.controldecoder_tb__DOT__ctrl 
                                 >> 5U)));
    __Vtask_controldecoder_tb__DOT__check__2__name = "ADD rs2"s;
    if (__Vtask_controldecoder_tb__DOT__check__2__cond) {
        VL_WRITEF_NX("[PASS] %@\n",0,-1,&(__Vtask_controldecoder_tb__DOT__check__2__name));
    } else {
        VL_WRITEF_NX("[FAIL] %@\n",0,-1,&(__Vtask_controldecoder_tb__DOT__check__2__name));
    }
    __Vtask_controldecoder_tb__DOT__check__3__cond 
        = (1U == (0x0000001fU & vlSelfRef.controldecoder_tb__DOT__ctrl));
    __Vtask_controldecoder_tb__DOT__check__3__name = "ADD rd"s;
    if (__Vtask_controldecoder_tb__DOT__check__3__cond) {
        VL_WRITEF_NX("[PASS] %@\n",0,-1,&(__Vtask_controldecoder_tb__DOT__check__3__name));
    } else {
        VL_WRITEF_NX("[FAIL] %@\n",0,-1,&(__Vtask_controldecoder_tb__DOT__check__3__name));
    }
    vlSelfRef.controldecoder_tb__DOT__instr = 0x0080a283U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "rtl/testbenches/controldecoder_tb.sv", 
                                         38);
    __Vtask_controldecoder_tb__DOT__check__4__cond 
        = (1U & (vlSelfRef.controldecoder_tb__DOT__ctrl 
                 >> 0x00000016U));
    __Vtask_controldecoder_tb__DOT__check__4__name = "LW regwen"s;
    if (__Vtask_controldecoder_tb__DOT__check__4__cond) {
        VL_WRITEF_NX("[PASS] %@\n",0,-1,&(__Vtask_controldecoder_tb__DOT__check__4__name));
    } else {
        VL_WRITEF_NX("[FAIL] %@\n",0,-1,&(__Vtask_controldecoder_tb__DOT__check__4__name));
    }
    __Vtask_controldecoder_tb__DOT__check__5__cond 
        = (0U == (7U & (vlSelfRef.controldecoder_tb__DOT__ctrl 
                        >> 0x00000013U)));
    __Vtask_controldecoder_tb__DOT__check__5__name = "LW imm_sel"s;
    if (__Vtask_controldecoder_tb__DOT__check__5__cond) {
        VL_WRITEF_NX("[PASS] %@\n",0,-1,&(__Vtask_controldecoder_tb__DOT__check__5__name));
    } else {
        VL_WRITEF_NX("[FAIL] %@\n",0,-1,&(__Vtask_controldecoder_tb__DOT__check__5__name));
    }
    vlSelfRef.controldecoder_tb__DOT__instr = 0x02512023U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "rtl/testbenches/controldecoder_tb.sv", 
                                         44);
    __Vtask_controldecoder_tb__DOT__check__6__cond 
        = (1U == (7U & (vlSelfRef.controldecoder_tb__DOT__ctrl 
                        >> 0x00000013U)));
    __Vtask_controldecoder_tb__DOT__check__6__name = "SW imm_sel"s;
    if (__Vtask_controldecoder_tb__DOT__check__6__cond) {
        VL_WRITEF_NX("[PASS] %@\n",0,-1,&(__Vtask_controldecoder_tb__DOT__check__6__name));
    } else {
        VL_WRITEF_NX("[FAIL] %@\n",0,-1,&(__Vtask_controldecoder_tb__DOT__check__6__name));
    }
    vlSelfRef.controldecoder_tb__DOT__instr = 0x00208063U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "rtl/testbenches/controldecoder_tb.sv", 
                                         49);
    __Vtask_controldecoder_tb__DOT__check__7__cond 
        = (2U == (7U & (vlSelfRef.controldecoder_tb__DOT__ctrl 
                        >> 0x00000013U)));
    __Vtask_controldecoder_tb__DOT__check__7__name = "BEQ imm_sel"s;
    if (__Vtask_controldecoder_tb__DOT__check__7__cond) {
        VL_WRITEF_NX("[PASS] %@\n",0,-1,&(__Vtask_controldecoder_tb__DOT__check__7__name));
    } else {
        VL_WRITEF_NX("[FAIL] %@\n",0,-1,&(__Vtask_controldecoder_tb__DOT__check__7__name));
    }
    VL_FINISH_MT("rtl/testbenches/controldecoder_tb.sv", 52, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontroldecoder_tb___024root___dump_triggers__act(Vcontroldecoder_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcontroldecoder_tb___024root___eval_triggers__act(Vcontroldecoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroldecoder_tb___024root___eval_triggers__act\n"); );
    Vcontroldecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcontroldecoder_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
