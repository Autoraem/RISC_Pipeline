// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vcontroldecoder_tb__Syms.h"


VL_ATTR_COLD void Vcontroldecoder_tb___024root__trace_init_sub__TOP__0(Vcontroldecoder_tb___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroldecoder_tb___024root__trace_init_sub__TOP__0\n"); );
    Vcontroldecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("controldecoder_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+10,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ctrl", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+1,0,"alu_op",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+2,0,"regwen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"imm_sel",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+4,0,"A_sel",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+5,0,"B_sel",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+11,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+12,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+13,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+10,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("control_signals", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+1,0,"alu_op",1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+2,0,"regwen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"imm_sel",2, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+4,0,"A_sel",3, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+5,0,"B_sel",4, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+11,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+12,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+13,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->declBus(c+11,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+12,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+13,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+6,0,"alu_op",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+2,0,"regwen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"imm_sel",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+8,0,"A_sel",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+9,0,"B_sel",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcontroldecoder_tb___024root__trace_init_top(Vcontroldecoder_tb___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroldecoder_tb___024root__trace_init_top\n"); );
    Vcontroldecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcontroldecoder_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcontroldecoder_tb___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vcontroldecoder_tb___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vcontroldecoder_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vcontroldecoder_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vcontroldecoder_tb___024root__trace_register(Vcontroldecoder_tb___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroldecoder_tb___024root__trace_register\n"); );
    Vcontroldecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vcontroldecoder_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vcontroldecoder_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vcontroldecoder_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vcontroldecoder_tb___024root__trace_cleanup, vlSelf);
    }

    VL_ATTR_COLD void Vcontroldecoder_tb___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroldecoder_tb___024root__trace_const_0\n"); );
        // Init
        Vcontroldecoder_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcontroldecoder_tb___024root*>(voidSelf);

        Vcontroldecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;

    }

    VL_ATTR_COLD void Vcontroldecoder_tb___024root__trace_full_0_sub_0(Vcontroldecoder_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

    VL_ATTR_COLD void Vcontroldecoder_tb___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroldecoder_tb___024root__trace_full_0\n"); );
        // Init
        Vcontroldecoder_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcontroldecoder_tb___024root*>(voidSelf);

        Vcontroldecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;

        // Body
        Vcontroldecoder_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
    }

    VL_ATTR_COLD void Vcontroldecoder_tb___024root__trace_full_0_sub_0(Vcontroldecoder_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroldecoder_tb___024root__trace_full_0_sub_0\n"); );
        Vcontroldecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
        auto& vlSelfRef = std::ref(*vlSelf).get();
        // Init
        uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);

        // Body
        bufp->fullCData(oldp+1,(vlSelfRef.controldecoder_tb__DOT__dut__DOT__alu_op),4);
        bufp->fullBit(oldp+2,(vlSelfRef.controldecoder_tb__DOT__dut__DOT__regwen));
        bufp->fullCData(oldp+3,(vlSelfRef.controldecoder_tb__DOT__dut__DOT__imm_sel),3);
        bufp->fullCData(oldp+4,(vlSelfRef.controldecoder_tb__DOT__dut__DOT__A_sel),2);
        bufp->fullCData(oldp+5,(vlSelfRef.controldecoder_tb__DOT__dut__DOT__B_sel),2);
        bufp->fullCData(oldp+6,(vlSelfRef.controldecoder_tb__DOT__dut__DOT__alu_op),4);
        bufp->fullCData(oldp+7,(vlSelfRef.controldecoder_tb__DOT__dut__DOT__imm_sel),3);
        bufp->fullCData(oldp+8,(vlSelfRef.controldecoder_tb__DOT__dut__DOT__A_sel),2);
        bufp->fullCData(oldp+9,(vlSelfRef.controldecoder_tb__DOT__dut__DOT__B_sel),2);
        bufp->fullIData(oldp+10,(vlSelfRef.controldecoder_tb__DOT__instr),32);
        bufp->fullCData(oldp+11,((0x0000001fU & (vlSelfRef.controldecoder_tb__DOT__instr 
                                                 >> 0x0000000fU))),5);
        bufp->fullCData(oldp+12,((0x0000001fU & (vlSelfRef.controldecoder_tb__DOT__instr 
                                                 >> 0x00000014U))),5);
        bufp->fullCData(oldp+13,((0x0000001fU & (vlSelfRef.controldecoder_tb__DOT__instr 
                                                 >> 7U))),5);
    }
