// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontroldecoder_tb.h for the primary calling header

#include "Vcontroldecoder_tb__pch.h"
#include "Vcontroldecoder_tb__Syms.h"
#include "Vcontroldecoder_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontroldecoder_tb___024root___dump_triggers__stl(Vcontroldecoder_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcontroldecoder_tb___024root___eval_triggers__stl(Vcontroldecoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroldecoder_tb___024root___eval_triggers__stl\n"); );
    Vcontroldecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcontroldecoder_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
