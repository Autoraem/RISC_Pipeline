// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vimmgen_tb__Syms.h"


VL_ATTR_COLD void Vimmgen_tb___024root__trace_init_sub__TOP__0(Vimmgen_tb___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen_tb___024root__trace_init_sub__TOP__0\n"); );
    Vimmgen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("immgen_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"imm_sel",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+3,0,"imm_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"failures",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"imm_sel",1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+3,0,"imm_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+5,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vimmgen_tb___024root__trace_init_top(Vimmgen_tb___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen_tb___024root__trace_init_top\n"); );
    Vimmgen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vimmgen_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vimmgen_tb___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vimmgen_tb___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vimmgen_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vimmgen_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vimmgen_tb___024root__trace_register(Vimmgen_tb___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen_tb___024root__trace_register\n"); );
    Vimmgen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vimmgen_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vimmgen_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vimmgen_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vimmgen_tb___024root__trace_cleanup, vlSelf);
    }

    VL_ATTR_COLD void Vimmgen_tb___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen_tb___024root__trace_const_0\n"); );
        // Init
        Vimmgen_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vimmgen_tb___024root*>(voidSelf);

        Vimmgen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;

    }

    VL_ATTR_COLD void Vimmgen_tb___024root__trace_full_0_sub_0(Vimmgen_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

    VL_ATTR_COLD void Vimmgen_tb___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen_tb___024root__trace_full_0\n"); );
        // Init
        Vimmgen_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vimmgen_tb___024root*>(voidSelf);

        Vimmgen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;

        // Body
        Vimmgen_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
    }

    VL_ATTR_COLD void Vimmgen_tb___024root__trace_full_0_sub_0(Vimmgen_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen_tb___024root__trace_full_0_sub_0\n"); );
        Vimmgen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
        auto& vlSelfRef = std::ref(*vlSelf).get();
        // Init
        uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);

        // Body
        bufp->fullIData(oldp+1,(vlSelfRef.immgen_tb__DOT__instr),32);
        bufp->fullCData(oldp+2,(vlSelfRef.immgen_tb__DOT__imm_sel),3);
        bufp->fullIData(oldp+3,(vlSelfRef.immgen_tb__DOT__dut__DOT__imm_out),32);
        bufp->fullIData(oldp+4,(vlSelfRef.immgen_tb__DOT__failures),32);
        bufp->fullIData(oldp+5,(vlSelfRef.immgen_tb__DOT__unnamedblk1__DOT__i),32);
    }
