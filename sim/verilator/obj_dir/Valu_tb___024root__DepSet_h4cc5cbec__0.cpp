// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_tb.h for the primary calling header

#include "Valu_tb__pch.h"
#include "Valu_tb__Syms.h"
#include "Valu_tb___024root.h"

VlCoroutine Valu_tb___024root___eval_initial__TOP__Vtiming__0(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("sim/waves/wave.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.alu_tb__DOT__A = 0x0000000fU;
    vlSelfRef.alu_tb__DOT__B = 0x0000000aU;
    vlSelfRef.alu_tb__DOT__Opcode = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "rtl/alu_tb.sv", 
                                         27);
    vlSelfRef.alu_tb__DOT__A = 0x00000014U;
    vlSelfRef.alu_tb__DOT__B = 5U;
    vlSelfRef.alu_tb__DOT__Opcode = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "rtl/alu_tb.sv", 
                                         29);
    vlSelfRef.alu_tb__DOT__A = 0x0000000cU;
    vlSelfRef.alu_tb__DOT__B = 5U;
    vlSelfRef.alu_tb__DOT__Opcode = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "rtl/alu_tb.sv", 
                                         31);
    vlSelfRef.alu_tb__DOT__A = 0x0000000cU;
    vlSelfRef.alu_tb__DOT__B = 5U;
    vlSelfRef.alu_tb__DOT__Opcode = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "rtl/alu_tb.sv", 
                                         33);
    vlSelfRef.alu_tb__DOT__A = 0x0000000cU;
    vlSelfRef.alu_tb__DOT__B = 5U;
    vlSelfRef.alu_tb__DOT__Opcode = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "rtl/alu_tb.sv", 
                                         35);
    vlSelfRef.alu_tb__DOT__A = 8U;
    vlSelfRef.alu_tb__DOT__B = 2U;
    vlSelfRef.alu_tb__DOT__Opcode = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "rtl/alu_tb.sv", 
                                         37);
    vlSelfRef.alu_tb__DOT__A = 8U;
    vlSelfRef.alu_tb__DOT__B = 2U;
    vlSelfRef.alu_tb__DOT__Opcode = 6U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "rtl/alu_tb.sv", 
                                         39);
    vlSelfRef.alu_tb__DOT__A = 0xfffffff8U;
    vlSelfRef.alu_tb__DOT__B = 2U;
    vlSelfRef.alu_tb__DOT__Opcode = 7U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "rtl/alu_tb.sv", 
                                         41);
    vlSelfRef.alu_tb__DOT__A = 0xfffffffbU;
    vlSelfRef.alu_tb__DOT__B = 3U;
    vlSelfRef.alu_tb__DOT__Opcode = 8U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "rtl/alu_tb.sv", 
                                         43);
    vlSelfRef.alu_tb__DOT__A = 5U;
    vlSelfRef.alu_tb__DOT__B = 3U;
    vlSelfRef.alu_tb__DOT__Opcode = 9U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "rtl/alu_tb.sv", 
                                         45);
    VL_FINISH_MT("rtl/alu_tb.sv", 47, "");
    VL_WRITEF_NX("Zero: %b, Neg: %b, Overflow: 0\n",0,
                 1,vlSelfRef.alu_tb__DOT__Zero,1,(IData)(vlSelfRef.alu_tb__DOT__Neg));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_tb___024root___dump_triggers__act(Valu_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Valu_tb___024root___eval_triggers__act(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_triggers__act\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Valu_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
