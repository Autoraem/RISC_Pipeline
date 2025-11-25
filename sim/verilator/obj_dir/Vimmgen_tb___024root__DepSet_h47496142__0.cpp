// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vimmgen_tb.h for the primary calling header

#include "Vimmgen_tb__pch.h"
#include "Vimmgen_tb__Syms.h"
#include "Vimmgen_tb___024root.h"

VlCoroutine Vimmgen_tb___024root___eval_initial__TOP__Vtiming__0(Vimmgen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vimmgen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vtask_immgen_tb__DOT__run_test__0__sel;
    __Vtask_immgen_tb__DOT__run_test__0__sel = 0;
    IData/*31:0*/ __Vtask_immgen_tb__DOT__run_test__0__expected;
    __Vtask_immgen_tb__DOT__run_test__0__expected = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_I__1__Vfuncout;
    __Vfunc_immgen_tb__DOT__make_random_I__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_I__1__ins;
    __Vfunc_immgen_tb__DOT__make_random_I__1__ins = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_S__2__Vfuncout;
    __Vfunc_immgen_tb__DOT__make_random_S__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_S__2__ins;
    __Vfunc_immgen_tb__DOT__make_random_S__2__ins = 0;
    SData/*11:0*/ __Vfunc_immgen_tb__DOT__make_random_S__2__imm;
    __Vfunc_immgen_tb__DOT__make_random_S__2__imm = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_B__3__Vfuncout;
    __Vfunc_immgen_tb__DOT__make_random_B__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_B__3__ins;
    __Vfunc_immgen_tb__DOT__make_random_B__3__ins = 0;
    SData/*11:0*/ __Vfunc_immgen_tb__DOT__make_random_B__3__imm;
    __Vfunc_immgen_tb__DOT__make_random_B__3__imm = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_U__4__Vfuncout;
    __Vfunc_immgen_tb__DOT__make_random_U__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_U__4__ins;
    __Vfunc_immgen_tb__DOT__make_random_U__4__ins = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_J__5__Vfuncout;
    __Vfunc_immgen_tb__DOT__make_random_J__5__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_J__5__ins;
    __Vfunc_immgen_tb__DOT__make_random_J__5__ins = 0;
    IData/*19:0*/ __Vfunc_immgen_tb__DOT__make_random_J__5__imm;
    __Vfunc_immgen_tb__DOT__make_random_J__5__imm = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm__6__Vfuncout;
    __Vfunc_immgen_tb__DOT__ref_imm__6__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_immgen_tb__DOT__ref_imm__6__sel;
    __Vfunc_immgen_tb__DOT__ref_imm__6__sel = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm__6__ins;
    __Vfunc_immgen_tb__DOT__ref_imm__6__ins = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_J__7__Vfuncout;
    __Vfunc_immgen_tb__DOT__ref_imm_J__7__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_J__7__ins;
    __Vfunc_immgen_tb__DOT__ref_imm_J__7__ins = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_U__8__Vfuncout;
    __Vfunc_immgen_tb__DOT__ref_imm_U__8__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_U__8__ins;
    __Vfunc_immgen_tb__DOT__ref_imm_U__8__ins = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_B__9__Vfuncout;
    __Vfunc_immgen_tb__DOT__ref_imm_B__9__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_B__9__ins;
    __Vfunc_immgen_tb__DOT__ref_imm_B__9__ins = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_S__10__Vfuncout;
    __Vfunc_immgen_tb__DOT__ref_imm_S__10__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_S__10__ins;
    __Vfunc_immgen_tb__DOT__ref_imm_S__10__ins = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_I__11__Vfuncout;
    __Vfunc_immgen_tb__DOT__ref_imm_I__11__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_I__11__ins;
    __Vfunc_immgen_tb__DOT__ref_imm_I__11__ins = 0;
    CData/*2:0*/ __Vtask_immgen_tb__DOT__run_test__12__sel;
    __Vtask_immgen_tb__DOT__run_test__12__sel = 0;
    IData/*31:0*/ __Vtask_immgen_tb__DOT__run_test__12__expected;
    __Vtask_immgen_tb__DOT__run_test__12__expected = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_I__13__Vfuncout;
    __Vfunc_immgen_tb__DOT__make_random_I__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_I__13__ins;
    __Vfunc_immgen_tb__DOT__make_random_I__13__ins = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_S__14__Vfuncout;
    __Vfunc_immgen_tb__DOT__make_random_S__14__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_S__14__ins;
    __Vfunc_immgen_tb__DOT__make_random_S__14__ins = 0;
    SData/*11:0*/ __Vfunc_immgen_tb__DOT__make_random_S__14__imm;
    __Vfunc_immgen_tb__DOT__make_random_S__14__imm = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_B__15__Vfuncout;
    __Vfunc_immgen_tb__DOT__make_random_B__15__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_B__15__ins;
    __Vfunc_immgen_tb__DOT__make_random_B__15__ins = 0;
    SData/*11:0*/ __Vfunc_immgen_tb__DOT__make_random_B__15__imm;
    __Vfunc_immgen_tb__DOT__make_random_B__15__imm = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_U__16__Vfuncout;
    __Vfunc_immgen_tb__DOT__make_random_U__16__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_U__16__ins;
    __Vfunc_immgen_tb__DOT__make_random_U__16__ins = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_J__17__Vfuncout;
    __Vfunc_immgen_tb__DOT__make_random_J__17__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_J__17__ins;
    __Vfunc_immgen_tb__DOT__make_random_J__17__ins = 0;
    IData/*19:0*/ __Vfunc_immgen_tb__DOT__make_random_J__17__imm;
    __Vfunc_immgen_tb__DOT__make_random_J__17__imm = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm__18__Vfuncout;
    __Vfunc_immgen_tb__DOT__ref_imm__18__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_immgen_tb__DOT__ref_imm__18__sel;
    __Vfunc_immgen_tb__DOT__ref_imm__18__sel = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm__18__ins;
    __Vfunc_immgen_tb__DOT__ref_imm__18__ins = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_J__19__Vfuncout;
    __Vfunc_immgen_tb__DOT__ref_imm_J__19__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_J__19__ins;
    __Vfunc_immgen_tb__DOT__ref_imm_J__19__ins = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_U__20__Vfuncout;
    __Vfunc_immgen_tb__DOT__ref_imm_U__20__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_U__20__ins;
    __Vfunc_immgen_tb__DOT__ref_imm_U__20__ins = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_B__21__Vfuncout;
    __Vfunc_immgen_tb__DOT__ref_imm_B__21__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_B__21__ins;
    __Vfunc_immgen_tb__DOT__ref_imm_B__21__ins = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_S__22__Vfuncout;
    __Vfunc_immgen_tb__DOT__ref_imm_S__22__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_S__22__ins;
    __Vfunc_immgen_tb__DOT__ref_imm_S__22__ins = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_I__23__Vfuncout;
    __Vfunc_immgen_tb__DOT__ref_imm_I__23__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_I__23__ins;
    __Vfunc_immgen_tb__DOT__ref_imm_I__23__ins = 0;
    CData/*2:0*/ __Vtask_immgen_tb__DOT__run_test__24__sel;
    __Vtask_immgen_tb__DOT__run_test__24__sel = 0;
    IData/*31:0*/ __Vtask_immgen_tb__DOT__run_test__24__expected;
    __Vtask_immgen_tb__DOT__run_test__24__expected = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_I__25__Vfuncout;
    __Vfunc_immgen_tb__DOT__make_random_I__25__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_I__25__ins;
    __Vfunc_immgen_tb__DOT__make_random_I__25__ins = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_S__26__Vfuncout;
    __Vfunc_immgen_tb__DOT__make_random_S__26__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_S__26__ins;
    __Vfunc_immgen_tb__DOT__make_random_S__26__ins = 0;
    SData/*11:0*/ __Vfunc_immgen_tb__DOT__make_random_S__26__imm;
    __Vfunc_immgen_tb__DOT__make_random_S__26__imm = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_B__27__Vfuncout;
    __Vfunc_immgen_tb__DOT__make_random_B__27__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_B__27__ins;
    __Vfunc_immgen_tb__DOT__make_random_B__27__ins = 0;
    SData/*11:0*/ __Vfunc_immgen_tb__DOT__make_random_B__27__imm;
    __Vfunc_immgen_tb__DOT__make_random_B__27__imm = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_U__28__Vfuncout;
    __Vfunc_immgen_tb__DOT__make_random_U__28__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_U__28__ins;
    __Vfunc_immgen_tb__DOT__make_random_U__28__ins = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_J__29__Vfuncout;
    __Vfunc_immgen_tb__DOT__make_random_J__29__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_J__29__ins;
    __Vfunc_immgen_tb__DOT__make_random_J__29__ins = 0;
    IData/*19:0*/ __Vfunc_immgen_tb__DOT__make_random_J__29__imm;
    __Vfunc_immgen_tb__DOT__make_random_J__29__imm = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm__30__Vfuncout;
    __Vfunc_immgen_tb__DOT__ref_imm__30__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_immgen_tb__DOT__ref_imm__30__sel;
    __Vfunc_immgen_tb__DOT__ref_imm__30__sel = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm__30__ins;
    __Vfunc_immgen_tb__DOT__ref_imm__30__ins = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_J__31__Vfuncout;
    __Vfunc_immgen_tb__DOT__ref_imm_J__31__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_J__31__ins;
    __Vfunc_immgen_tb__DOT__ref_imm_J__31__ins = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_U__32__Vfuncout;
    __Vfunc_immgen_tb__DOT__ref_imm_U__32__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_U__32__ins;
    __Vfunc_immgen_tb__DOT__ref_imm_U__32__ins = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_B__33__Vfuncout;
    __Vfunc_immgen_tb__DOT__ref_imm_B__33__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_B__33__ins;
    __Vfunc_immgen_tb__DOT__ref_imm_B__33__ins = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_S__34__Vfuncout;
    __Vfunc_immgen_tb__DOT__ref_imm_S__34__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_S__34__ins;
    __Vfunc_immgen_tb__DOT__ref_imm_S__34__ins = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_I__35__Vfuncout;
    __Vfunc_immgen_tb__DOT__ref_imm_I__35__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_I__35__ins;
    __Vfunc_immgen_tb__DOT__ref_imm_I__35__ins = 0;
    CData/*2:0*/ __Vtask_immgen_tb__DOT__run_test__36__sel;
    __Vtask_immgen_tb__DOT__run_test__36__sel = 0;
    IData/*31:0*/ __Vtask_immgen_tb__DOT__run_test__36__expected;
    __Vtask_immgen_tb__DOT__run_test__36__expected = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_I__37__Vfuncout;
    __Vfunc_immgen_tb__DOT__make_random_I__37__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_I__37__ins;
    __Vfunc_immgen_tb__DOT__make_random_I__37__ins = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_S__38__Vfuncout;
    __Vfunc_immgen_tb__DOT__make_random_S__38__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_S__38__ins;
    __Vfunc_immgen_tb__DOT__make_random_S__38__ins = 0;
    SData/*11:0*/ __Vfunc_immgen_tb__DOT__make_random_S__38__imm;
    __Vfunc_immgen_tb__DOT__make_random_S__38__imm = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_B__39__Vfuncout;
    __Vfunc_immgen_tb__DOT__make_random_B__39__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_B__39__ins;
    __Vfunc_immgen_tb__DOT__make_random_B__39__ins = 0;
    SData/*11:0*/ __Vfunc_immgen_tb__DOT__make_random_B__39__imm;
    __Vfunc_immgen_tb__DOT__make_random_B__39__imm = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_U__40__Vfuncout;
    __Vfunc_immgen_tb__DOT__make_random_U__40__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_U__40__ins;
    __Vfunc_immgen_tb__DOT__make_random_U__40__ins = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_J__41__Vfuncout;
    __Vfunc_immgen_tb__DOT__make_random_J__41__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_J__41__ins;
    __Vfunc_immgen_tb__DOT__make_random_J__41__ins = 0;
    IData/*19:0*/ __Vfunc_immgen_tb__DOT__make_random_J__41__imm;
    __Vfunc_immgen_tb__DOT__make_random_J__41__imm = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm__42__Vfuncout;
    __Vfunc_immgen_tb__DOT__ref_imm__42__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_immgen_tb__DOT__ref_imm__42__sel;
    __Vfunc_immgen_tb__DOT__ref_imm__42__sel = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm__42__ins;
    __Vfunc_immgen_tb__DOT__ref_imm__42__ins = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_J__43__Vfuncout;
    __Vfunc_immgen_tb__DOT__ref_imm_J__43__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_J__43__ins;
    __Vfunc_immgen_tb__DOT__ref_imm_J__43__ins = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_U__44__Vfuncout;
    __Vfunc_immgen_tb__DOT__ref_imm_U__44__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_U__44__ins;
    __Vfunc_immgen_tb__DOT__ref_imm_U__44__ins = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_B__45__Vfuncout;
    __Vfunc_immgen_tb__DOT__ref_imm_B__45__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_B__45__ins;
    __Vfunc_immgen_tb__DOT__ref_imm_B__45__ins = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_S__46__Vfuncout;
    __Vfunc_immgen_tb__DOT__ref_imm_S__46__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_S__46__ins;
    __Vfunc_immgen_tb__DOT__ref_imm_S__46__ins = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_I__47__Vfuncout;
    __Vfunc_immgen_tb__DOT__ref_imm_I__47__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_I__47__ins;
    __Vfunc_immgen_tb__DOT__ref_imm_I__47__ins = 0;
    CData/*2:0*/ __Vtask_immgen_tb__DOT__run_test__48__sel;
    __Vtask_immgen_tb__DOT__run_test__48__sel = 0;
    IData/*31:0*/ __Vtask_immgen_tb__DOT__run_test__48__expected;
    __Vtask_immgen_tb__DOT__run_test__48__expected = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_I__49__Vfuncout;
    __Vfunc_immgen_tb__DOT__make_random_I__49__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_I__49__ins;
    __Vfunc_immgen_tb__DOT__make_random_I__49__ins = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_S__50__Vfuncout;
    __Vfunc_immgen_tb__DOT__make_random_S__50__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_S__50__ins;
    __Vfunc_immgen_tb__DOT__make_random_S__50__ins = 0;
    SData/*11:0*/ __Vfunc_immgen_tb__DOT__make_random_S__50__imm;
    __Vfunc_immgen_tb__DOT__make_random_S__50__imm = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_B__51__Vfuncout;
    __Vfunc_immgen_tb__DOT__make_random_B__51__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_B__51__ins;
    __Vfunc_immgen_tb__DOT__make_random_B__51__ins = 0;
    SData/*11:0*/ __Vfunc_immgen_tb__DOT__make_random_B__51__imm;
    __Vfunc_immgen_tb__DOT__make_random_B__51__imm = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_U__52__Vfuncout;
    __Vfunc_immgen_tb__DOT__make_random_U__52__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_U__52__ins;
    __Vfunc_immgen_tb__DOT__make_random_U__52__ins = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_J__53__Vfuncout;
    __Vfunc_immgen_tb__DOT__make_random_J__53__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__make_random_J__53__ins;
    __Vfunc_immgen_tb__DOT__make_random_J__53__ins = 0;
    IData/*19:0*/ __Vfunc_immgen_tb__DOT__make_random_J__53__imm;
    __Vfunc_immgen_tb__DOT__make_random_J__53__imm = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm__54__Vfuncout;
    __Vfunc_immgen_tb__DOT__ref_imm__54__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_immgen_tb__DOT__ref_imm__54__sel;
    __Vfunc_immgen_tb__DOT__ref_imm__54__sel = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm__54__ins;
    __Vfunc_immgen_tb__DOT__ref_imm__54__ins = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_J__55__Vfuncout;
    __Vfunc_immgen_tb__DOT__ref_imm_J__55__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_J__55__ins;
    __Vfunc_immgen_tb__DOT__ref_imm_J__55__ins = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_U__56__Vfuncout;
    __Vfunc_immgen_tb__DOT__ref_imm_U__56__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_U__56__ins;
    __Vfunc_immgen_tb__DOT__ref_imm_U__56__ins = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_B__57__Vfuncout;
    __Vfunc_immgen_tb__DOT__ref_imm_B__57__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_B__57__ins;
    __Vfunc_immgen_tb__DOT__ref_imm_B__57__ins = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_S__58__Vfuncout;
    __Vfunc_immgen_tb__DOT__ref_imm_S__58__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_S__58__ins;
    __Vfunc_immgen_tb__DOT__ref_imm_S__58__ins = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_I__59__Vfuncout;
    __Vfunc_immgen_tb__DOT__ref_imm_I__59__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_immgen_tb__DOT__ref_imm_I__59__ins;
    __Vfunc_immgen_tb__DOT__ref_imm_I__59__ins = 0;
    // Body
    vlSymsp->_vm_contextp__->dumpfile("sim/waves/immgen_tb_wave.vcd"s);
    vlSymsp->_traceDumpOpen();
    VL_WRITEF_NX("Starting randomized immgen test...\n",0);
    vlSelfRef.immgen_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x0000c350U, vlSelfRef.immgen_tb__DOT__unnamedblk1__DOT__i)) {
        __Vtask_immgen_tb__DOT__run_test__0__sel = 0U;
        __Vtask_immgen_tb__DOT__run_test__0__expected = 0;
        if ((0U == (IData)(__Vtask_immgen_tb__DOT__run_test__0__sel))) {
            __Vfunc_immgen_tb__DOT__make_random_I__1__ins = 0;
            __Vfunc_immgen_tb__DOT__make_random_I__1__ins 
                = (0x13U | ((IData)(VL_RANDOM_I()) 
                            << 7U));
            __Vfunc_immgen_tb__DOT__make_random_I__1__Vfuncout 
                = __Vfunc_immgen_tb__DOT__make_random_I__1__ins;
            vlSelfRef.immgen_tb__DOT__instr = __Vfunc_immgen_tb__DOT__make_random_I__1__Vfuncout;
        } else if ((1U == (IData)(__Vtask_immgen_tb__DOT__run_test__0__sel))) {
            __Vfunc_immgen_tb__DOT__make_random_S__2__ins = 0;
            __Vfunc_immgen_tb__DOT__make_random_S__2__imm = 0;
            __Vfunc_immgen_tb__DOT__make_random_S__2__imm 
                = (0x00000fffU & VL_RANDOM_I());
            __Vfunc_immgen_tb__DOT__make_random_S__2__ins 
                = ((0x0000007fU & __Vfunc_immgen_tb__DOT__make_random_S__2__ins) 
                   | (((0x01fc0000U & ((IData)(__Vfunc_immgen_tb__DOT__make_random_S__2__imm) 
                                       << 0x0000000dU)) 
                       | ((0x0003ffe0U & ((IData)(VL_RANDOM_I()) 
                                          << 5U)) | 
                          (0x0000001fU & (IData)(__Vfunc_immgen_tb__DOT__make_random_S__2__imm)))) 
                      << 7U));
            __Vfunc_immgen_tb__DOT__make_random_S__2__ins 
                = (0x00000023U | (0xffffff80U & __Vfunc_immgen_tb__DOT__make_random_S__2__ins));
            __Vfunc_immgen_tb__DOT__make_random_S__2__Vfuncout 
                = __Vfunc_immgen_tb__DOT__make_random_S__2__ins;
            vlSelfRef.immgen_tb__DOT__instr = __Vfunc_immgen_tb__DOT__make_random_S__2__Vfuncout;
        } else if ((2U == (IData)(__Vtask_immgen_tb__DOT__run_test__0__sel))) {
            __Vfunc_immgen_tb__DOT__make_random_B__3__ins = 0;
            __Vfunc_immgen_tb__DOT__make_random_B__3__imm = 0;
            __Vfunc_immgen_tb__DOT__make_random_B__3__imm 
                = (0x00000fffU & VL_RANDOM_I());
            __Vfunc_immgen_tb__DOT__make_random_B__3__ins 
                = ((0x000fffffU & __Vfunc_immgen_tb__DOT__make_random_B__3__ins) 
                   | (((0x00000800U & (IData)(__Vfunc_immgen_tb__DOT__make_random_B__3__imm)) 
                       | ((0x000007e0U & ((IData)(__Vfunc_immgen_tb__DOT__make_random_B__3__imm) 
                                          << 1U)) | 
                          (0x0000001fU & VL_RANDOM_I()))) 
                      << 0x00000014U));
            __Vfunc_immgen_tb__DOT__make_random_B__3__ins 
                = ((0xfff0007fU & __Vfunc_immgen_tb__DOT__make_random_B__3__ins) 
                   | (((0x00001fe0U & ((IData)(VL_RANDOM_I()) 
                                       << 5U)) | ((0x0000001eU 
                                                   & ((IData)(__Vfunc_immgen_tb__DOT__make_random_B__3__imm) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(__Vfunc_immgen_tb__DOT__make_random_B__3__imm) 
                                                        >> 0x0aU)))) 
                      << 7U));
            __Vfunc_immgen_tb__DOT__make_random_B__3__ins 
                = (0x00000063U | (0xffffff80U & __Vfunc_immgen_tb__DOT__make_random_B__3__ins));
            __Vfunc_immgen_tb__DOT__make_random_B__3__Vfuncout 
                = __Vfunc_immgen_tb__DOT__make_random_B__3__ins;
            vlSelfRef.immgen_tb__DOT__instr = __Vfunc_immgen_tb__DOT__make_random_B__3__Vfuncout;
        } else if ((3U == (IData)(__Vtask_immgen_tb__DOT__run_test__0__sel))) {
            __Vfunc_immgen_tb__DOT__make_random_U__4__ins = 0;
            __Vfunc_immgen_tb__DOT__make_random_U__4__ins = 0U;
            __Vfunc_immgen_tb__DOT__make_random_U__4__ins 
                = ((0x00000fffU & __Vfunc_immgen_tb__DOT__make_random_U__4__ins) 
                   | ((IData)(VL_RANDOM_I()) << 0x0000000cU));
            __Vfunc_immgen_tb__DOT__make_random_U__4__ins 
                = (0x00000037U | (0xffffff80U & __Vfunc_immgen_tb__DOT__make_random_U__4__ins));
            __Vfunc_immgen_tb__DOT__make_random_U__4__Vfuncout 
                = __Vfunc_immgen_tb__DOT__make_random_U__4__ins;
            vlSelfRef.immgen_tb__DOT__instr = __Vfunc_immgen_tb__DOT__make_random_U__4__Vfuncout;
        } else if ((4U == (IData)(__Vtask_immgen_tb__DOT__run_test__0__sel))) {
            __Vfunc_immgen_tb__DOT__make_random_J__5__ins = 0;
            __Vfunc_immgen_tb__DOT__make_random_J__5__imm = 0;
            __Vfunc_immgen_tb__DOT__make_random_J__5__imm 
                = (0x000fffffU & VL_RANDOM_I());
            __Vfunc_immgen_tb__DOT__make_random_J__5__ins 
                = ((0x000fffffU & __Vfunc_immgen_tb__DOT__make_random_J__5__ins) 
                   | (((0x00000800U & (__Vfunc_immgen_tb__DOT__make_random_J__5__imm 
                                       >> 8U)) | ((0x000007feU 
                                                   & (__Vfunc_immgen_tb__DOT__make_random_J__5__imm 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (__Vfunc_immgen_tb__DOT__make_random_J__5__imm 
                                                        >> 0x0aU)))) 
                      << 0x00000014U));
            __Vfunc_immgen_tb__DOT__make_random_J__5__ins 
                = (0x6fU | ((0xfff00000U & __Vfunc_immgen_tb__DOT__make_random_J__5__ins) 
                            | ((0x000ff000U & (__Vfunc_immgen_tb__DOT__make_random_J__5__imm 
                                               << 1U)) 
                               | (0x00000f80U & ((IData)(
                                                         VL_RANDOM_I()) 
                                                 << 7U)))));
            __Vfunc_immgen_tb__DOT__make_random_J__5__Vfuncout 
                = __Vfunc_immgen_tb__DOT__make_random_J__5__ins;
            vlSelfRef.immgen_tb__DOT__instr = __Vfunc_immgen_tb__DOT__make_random_J__5__Vfuncout;
        }
        vlSelfRef.immgen_tb__DOT__imm_sel = __Vtask_immgen_tb__DOT__run_test__0__sel;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "rtl/testbenches/immgen_tb.sv", 
                                             147);
        __Vfunc_immgen_tb__DOT__ref_imm__6__ins = vlSelfRef.immgen_tb__DOT__instr;
        __Vfunc_immgen_tb__DOT__ref_imm__6__sel = __Vtask_immgen_tb__DOT__run_test__0__sel;
        if ((4U & (IData)(__Vfunc_immgen_tb__DOT__ref_imm__6__sel))) {
            if ((2U & (IData)(__Vfunc_immgen_tb__DOT__ref_imm__6__sel))) {
                __Vfunc_immgen_tb__DOT__ref_imm__6__Vfuncout = 0xdeadbeefU;
            } else if ((1U & (IData)(__Vfunc_immgen_tb__DOT__ref_imm__6__sel))) {
                __Vfunc_immgen_tb__DOT__ref_imm__6__Vfuncout = 0xdeadbeefU;
            } else {
                __Vfunc_immgen_tb__DOT__ref_imm_J__7__ins 
                    = __Vfunc_immgen_tb__DOT__ref_imm__6__ins;
                __Vfunc_immgen_tb__DOT__ref_imm_J__7__Vfuncout 
                    = ((((0x00000ffeU & ((- (IData)(
                                                    (__Vfunc_immgen_tb__DOT__ref_imm_J__7__ins 
                                                     >> 0x1fU))) 
                                         << 1U)) | 
                         (__Vfunc_immgen_tb__DOT__ref_imm_J__7__ins 
                          >> 0x1fU)) << 0x00000014U) 
                       | ((((0x000001feU & (__Vfunc_immgen_tb__DOT__ref_imm_J__7__ins 
                                            >> 0x0000000bU)) 
                            | (1U & (__Vfunc_immgen_tb__DOT__ref_imm_J__7__ins 
                                     >> 0x14U))) << 0x0000000bU) 
                          | (0x000007feU & (__Vfunc_immgen_tb__DOT__ref_imm_J__7__ins 
                                            >> 0x00000014U))));
                __Vfunc_immgen_tb__DOT__ref_imm__6__Vfuncout 
                    = __Vfunc_immgen_tb__DOT__ref_imm_J__7__Vfuncout;
            }
        } else if ((2U & (IData)(__Vfunc_immgen_tb__DOT__ref_imm__6__sel))) {
            if ((1U & (IData)(__Vfunc_immgen_tb__DOT__ref_imm__6__sel))) {
                __Vfunc_immgen_tb__DOT__ref_imm_U__8__ins 
                    = __Vfunc_immgen_tb__DOT__ref_imm__6__ins;
                __Vfunc_immgen_tb__DOT__ref_imm_U__8__Vfuncout 
                    = (0xfffff000U & __Vfunc_immgen_tb__DOT__ref_imm_U__8__ins);
                __Vfunc_immgen_tb__DOT__ref_imm__6__Vfuncout 
                    = __Vfunc_immgen_tb__DOT__ref_imm_U__8__Vfuncout;
            } else {
                __Vfunc_immgen_tb__DOT__ref_imm_B__9__ins 
                    = __Vfunc_immgen_tb__DOT__ref_imm__6__ins;
                __Vfunc_immgen_tb__DOT__ref_imm_B__9__Vfuncout 
                    = (((- (IData)((__Vfunc_immgen_tb__DOT__ref_imm_B__9__ins 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | ((0x00000800U & (__Vfunc_immgen_tb__DOT__ref_imm_B__9__ins 
                                          << 4U)) | 
                          ((0x000007e0U & (__Vfunc_immgen_tb__DOT__ref_imm_B__9__ins 
                                           >> 0x00000014U)) 
                           | (0x0000001eU & (__Vfunc_immgen_tb__DOT__ref_imm_B__9__ins 
                                             >> 7U)))));
                __Vfunc_immgen_tb__DOT__ref_imm__6__Vfuncout 
                    = __Vfunc_immgen_tb__DOT__ref_imm_B__9__Vfuncout;
            }
        } else if ((1U & (IData)(__Vfunc_immgen_tb__DOT__ref_imm__6__sel))) {
            __Vfunc_immgen_tb__DOT__ref_imm_S__10__ins 
                = __Vfunc_immgen_tb__DOT__ref_imm__6__ins;
            __Vfunc_immgen_tb__DOT__ref_imm_S__10__Vfuncout 
                = (((- (IData)((__Vfunc_immgen_tb__DOT__ref_imm_S__10__ins 
                                >> 0x1fU))) << 0x0000000cU) 
                   | ((0x00000fe0U & (__Vfunc_immgen_tb__DOT__ref_imm_S__10__ins 
                                      >> 0x00000014U)) 
                      | (0x0000001fU & (__Vfunc_immgen_tb__DOT__ref_imm_S__10__ins 
                                        >> 7U))));
            __Vfunc_immgen_tb__DOT__ref_imm__6__Vfuncout 
                = __Vfunc_immgen_tb__DOT__ref_imm_S__10__Vfuncout;
        } else {
            __Vfunc_immgen_tb__DOT__ref_imm_I__11__ins 
                = __Vfunc_immgen_tb__DOT__ref_imm__6__ins;
            __Vfunc_immgen_tb__DOT__ref_imm_I__11__Vfuncout 
                = (((- (IData)((__Vfunc_immgen_tb__DOT__ref_imm_I__11__ins 
                                >> 0x1fU))) << 0x0000000cU) 
                   | (__Vfunc_immgen_tb__DOT__ref_imm_I__11__ins 
                      >> 0x14U));
            __Vfunc_immgen_tb__DOT__ref_imm__6__Vfuncout 
                = __Vfunc_immgen_tb__DOT__ref_imm_I__11__Vfuncout;
        }
        __Vtask_immgen_tb__DOT__run_test__0__expected 
            = __Vfunc_immgen_tb__DOT__ref_imm__6__Vfuncout;
        if (VL_UNLIKELY(((vlSelfRef.immgen_tb__DOT__dut__DOT__imm_out 
                          != __Vtask_immgen_tb__DOT__run_test__0__expected)))) {
            VL_WRITEF_NX("ERROR: imm mismatch sel=%0# instr=%x\n  got:      %x\n  expected: %x\n",0,
                         3,__Vtask_immgen_tb__DOT__run_test__0__sel,
                         32,vlSelfRef.immgen_tb__DOT__instr,
                         32,vlSelfRef.immgen_tb__DOT__dut__DOT__imm_out,
                         32,__Vtask_immgen_tb__DOT__run_test__0__expected);
            vlSelfRef.immgen_tb__DOT__failures = ((IData)(1U) 
                                                  + vlSelfRef.immgen_tb__DOT__failures);
        }
        __Vtask_immgen_tb__DOT__run_test__12__sel = 1U;
        __Vtask_immgen_tb__DOT__run_test__12__expected = 0;
        if ((0U == (IData)(__Vtask_immgen_tb__DOT__run_test__12__sel))) {
            __Vfunc_immgen_tb__DOT__make_random_I__13__ins = 0;
            __Vfunc_immgen_tb__DOT__make_random_I__13__ins 
                = (0x13U | ((IData)(VL_RANDOM_I()) 
                            << 7U));
            __Vfunc_immgen_tb__DOT__make_random_I__13__Vfuncout 
                = __Vfunc_immgen_tb__DOT__make_random_I__13__ins;
            vlSelfRef.immgen_tb__DOT__instr = __Vfunc_immgen_tb__DOT__make_random_I__13__Vfuncout;
        } else if ((1U == (IData)(__Vtask_immgen_tb__DOT__run_test__12__sel))) {
            __Vfunc_immgen_tb__DOT__make_random_S__14__ins = 0;
            __Vfunc_immgen_tb__DOT__make_random_S__14__imm = 0;
            __Vfunc_immgen_tb__DOT__make_random_S__14__imm 
                = (0x00000fffU & VL_RANDOM_I());
            __Vfunc_immgen_tb__DOT__make_random_S__14__ins 
                = ((0x0000007fU & __Vfunc_immgen_tb__DOT__make_random_S__14__ins) 
                   | (((0x01fc0000U & ((IData)(__Vfunc_immgen_tb__DOT__make_random_S__14__imm) 
                                       << 0x0000000dU)) 
                       | ((0x0003ffe0U & ((IData)(VL_RANDOM_I()) 
                                          << 5U)) | 
                          (0x0000001fU & (IData)(__Vfunc_immgen_tb__DOT__make_random_S__14__imm)))) 
                      << 7U));
            __Vfunc_immgen_tb__DOT__make_random_S__14__ins 
                = (0x00000023U | (0xffffff80U & __Vfunc_immgen_tb__DOT__make_random_S__14__ins));
            __Vfunc_immgen_tb__DOT__make_random_S__14__Vfuncout 
                = __Vfunc_immgen_tb__DOT__make_random_S__14__ins;
            vlSelfRef.immgen_tb__DOT__instr = __Vfunc_immgen_tb__DOT__make_random_S__14__Vfuncout;
        } else if ((2U == (IData)(__Vtask_immgen_tb__DOT__run_test__12__sel))) {
            __Vfunc_immgen_tb__DOT__make_random_B__15__ins = 0;
            __Vfunc_immgen_tb__DOT__make_random_B__15__imm = 0;
            __Vfunc_immgen_tb__DOT__make_random_B__15__imm 
                = (0x00000fffU & VL_RANDOM_I());
            __Vfunc_immgen_tb__DOT__make_random_B__15__ins 
                = ((0x000fffffU & __Vfunc_immgen_tb__DOT__make_random_B__15__ins) 
                   | (((0x00000800U & (IData)(__Vfunc_immgen_tb__DOT__make_random_B__15__imm)) 
                       | ((0x000007e0U & ((IData)(__Vfunc_immgen_tb__DOT__make_random_B__15__imm) 
                                          << 1U)) | 
                          (0x0000001fU & VL_RANDOM_I()))) 
                      << 0x00000014U));
            __Vfunc_immgen_tb__DOT__make_random_B__15__ins 
                = ((0xfff0007fU & __Vfunc_immgen_tb__DOT__make_random_B__15__ins) 
                   | (((0x00001fe0U & ((IData)(VL_RANDOM_I()) 
                                       << 5U)) | ((0x0000001eU 
                                                   & ((IData)(__Vfunc_immgen_tb__DOT__make_random_B__15__imm) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(__Vfunc_immgen_tb__DOT__make_random_B__15__imm) 
                                                        >> 0x0aU)))) 
                      << 7U));
            __Vfunc_immgen_tb__DOT__make_random_B__15__ins 
                = (0x00000063U | (0xffffff80U & __Vfunc_immgen_tb__DOT__make_random_B__15__ins));
            __Vfunc_immgen_tb__DOT__make_random_B__15__Vfuncout 
                = __Vfunc_immgen_tb__DOT__make_random_B__15__ins;
            vlSelfRef.immgen_tb__DOT__instr = __Vfunc_immgen_tb__DOT__make_random_B__15__Vfuncout;
        } else if ((3U == (IData)(__Vtask_immgen_tb__DOT__run_test__12__sel))) {
            __Vfunc_immgen_tb__DOT__make_random_U__16__ins = 0;
            __Vfunc_immgen_tb__DOT__make_random_U__16__ins = 0U;
            __Vfunc_immgen_tb__DOT__make_random_U__16__ins 
                = ((0x00000fffU & __Vfunc_immgen_tb__DOT__make_random_U__16__ins) 
                   | ((IData)(VL_RANDOM_I()) << 0x0000000cU));
            __Vfunc_immgen_tb__DOT__make_random_U__16__ins 
                = (0x00000037U | (0xffffff80U & __Vfunc_immgen_tb__DOT__make_random_U__16__ins));
            __Vfunc_immgen_tb__DOT__make_random_U__16__Vfuncout 
                = __Vfunc_immgen_tb__DOT__make_random_U__16__ins;
            vlSelfRef.immgen_tb__DOT__instr = __Vfunc_immgen_tb__DOT__make_random_U__16__Vfuncout;
        } else if ((4U == (IData)(__Vtask_immgen_tb__DOT__run_test__12__sel))) {
            __Vfunc_immgen_tb__DOT__make_random_J__17__ins = 0;
            __Vfunc_immgen_tb__DOT__make_random_J__17__imm = 0;
            __Vfunc_immgen_tb__DOT__make_random_J__17__imm 
                = (0x000fffffU & VL_RANDOM_I());
            __Vfunc_immgen_tb__DOT__make_random_J__17__ins 
                = ((0x000fffffU & __Vfunc_immgen_tb__DOT__make_random_J__17__ins) 
                   | (((0x00000800U & (__Vfunc_immgen_tb__DOT__make_random_J__17__imm 
                                       >> 8U)) | ((0x000007feU 
                                                   & (__Vfunc_immgen_tb__DOT__make_random_J__17__imm 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (__Vfunc_immgen_tb__DOT__make_random_J__17__imm 
                                                        >> 0x0aU)))) 
                      << 0x00000014U));
            __Vfunc_immgen_tb__DOT__make_random_J__17__ins 
                = (0x6fU | ((0xfff00000U & __Vfunc_immgen_tb__DOT__make_random_J__17__ins) 
                            | ((0x000ff000U & (__Vfunc_immgen_tb__DOT__make_random_J__17__imm 
                                               << 1U)) 
                               | (0x00000f80U & ((IData)(
                                                         VL_RANDOM_I()) 
                                                 << 7U)))));
            __Vfunc_immgen_tb__DOT__make_random_J__17__Vfuncout 
                = __Vfunc_immgen_tb__DOT__make_random_J__17__ins;
            vlSelfRef.immgen_tb__DOT__instr = __Vfunc_immgen_tb__DOT__make_random_J__17__Vfuncout;
        }
        vlSelfRef.immgen_tb__DOT__imm_sel = __Vtask_immgen_tb__DOT__run_test__12__sel;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "rtl/testbenches/immgen_tb.sv", 
                                             147);
        __Vfunc_immgen_tb__DOT__ref_imm__18__ins = vlSelfRef.immgen_tb__DOT__instr;
        __Vfunc_immgen_tb__DOT__ref_imm__18__sel = __Vtask_immgen_tb__DOT__run_test__12__sel;
        if ((4U & (IData)(__Vfunc_immgen_tb__DOT__ref_imm__18__sel))) {
            if ((2U & (IData)(__Vfunc_immgen_tb__DOT__ref_imm__18__sel))) {
                __Vfunc_immgen_tb__DOT__ref_imm__18__Vfuncout = 0xdeadbeefU;
            } else if ((1U & (IData)(__Vfunc_immgen_tb__DOT__ref_imm__18__sel))) {
                __Vfunc_immgen_tb__DOT__ref_imm__18__Vfuncout = 0xdeadbeefU;
            } else {
                __Vfunc_immgen_tb__DOT__ref_imm_J__19__ins 
                    = __Vfunc_immgen_tb__DOT__ref_imm__18__ins;
                __Vfunc_immgen_tb__DOT__ref_imm_J__19__Vfuncout 
                    = ((((0x00000ffeU & ((- (IData)(
                                                    (__Vfunc_immgen_tb__DOT__ref_imm_J__19__ins 
                                                     >> 0x1fU))) 
                                         << 1U)) | 
                         (__Vfunc_immgen_tb__DOT__ref_imm_J__19__ins 
                          >> 0x1fU)) << 0x00000014U) 
                       | ((((0x000001feU & (__Vfunc_immgen_tb__DOT__ref_imm_J__19__ins 
                                            >> 0x0000000bU)) 
                            | (1U & (__Vfunc_immgen_tb__DOT__ref_imm_J__19__ins 
                                     >> 0x14U))) << 0x0000000bU) 
                          | (0x000007feU & (__Vfunc_immgen_tb__DOT__ref_imm_J__19__ins 
                                            >> 0x00000014U))));
                __Vfunc_immgen_tb__DOT__ref_imm__18__Vfuncout 
                    = __Vfunc_immgen_tb__DOT__ref_imm_J__19__Vfuncout;
            }
        } else if ((2U & (IData)(__Vfunc_immgen_tb__DOT__ref_imm__18__sel))) {
            if ((1U & (IData)(__Vfunc_immgen_tb__DOT__ref_imm__18__sel))) {
                __Vfunc_immgen_tb__DOT__ref_imm_U__20__ins 
                    = __Vfunc_immgen_tb__DOT__ref_imm__18__ins;
                __Vfunc_immgen_tb__DOT__ref_imm_U__20__Vfuncout 
                    = (0xfffff000U & __Vfunc_immgen_tb__DOT__ref_imm_U__20__ins);
                __Vfunc_immgen_tb__DOT__ref_imm__18__Vfuncout 
                    = __Vfunc_immgen_tb__DOT__ref_imm_U__20__Vfuncout;
            } else {
                __Vfunc_immgen_tb__DOT__ref_imm_B__21__ins 
                    = __Vfunc_immgen_tb__DOT__ref_imm__18__ins;
                __Vfunc_immgen_tb__DOT__ref_imm_B__21__Vfuncout 
                    = (((- (IData)((__Vfunc_immgen_tb__DOT__ref_imm_B__21__ins 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | ((0x00000800U & (__Vfunc_immgen_tb__DOT__ref_imm_B__21__ins 
                                          << 4U)) | 
                          ((0x000007e0U & (__Vfunc_immgen_tb__DOT__ref_imm_B__21__ins 
                                           >> 0x00000014U)) 
                           | (0x0000001eU & (__Vfunc_immgen_tb__DOT__ref_imm_B__21__ins 
                                             >> 7U)))));
                __Vfunc_immgen_tb__DOT__ref_imm__18__Vfuncout 
                    = __Vfunc_immgen_tb__DOT__ref_imm_B__21__Vfuncout;
            }
        } else if ((1U & (IData)(__Vfunc_immgen_tb__DOT__ref_imm__18__sel))) {
            __Vfunc_immgen_tb__DOT__ref_imm_S__22__ins 
                = __Vfunc_immgen_tb__DOT__ref_imm__18__ins;
            __Vfunc_immgen_tb__DOT__ref_imm_S__22__Vfuncout 
                = (((- (IData)((__Vfunc_immgen_tb__DOT__ref_imm_S__22__ins 
                                >> 0x1fU))) << 0x0000000cU) 
                   | ((0x00000fe0U & (__Vfunc_immgen_tb__DOT__ref_imm_S__22__ins 
                                      >> 0x00000014U)) 
                      | (0x0000001fU & (__Vfunc_immgen_tb__DOT__ref_imm_S__22__ins 
                                        >> 7U))));
            __Vfunc_immgen_tb__DOT__ref_imm__18__Vfuncout 
                = __Vfunc_immgen_tb__DOT__ref_imm_S__22__Vfuncout;
        } else {
            __Vfunc_immgen_tb__DOT__ref_imm_I__23__ins 
                = __Vfunc_immgen_tb__DOT__ref_imm__18__ins;
            __Vfunc_immgen_tb__DOT__ref_imm_I__23__Vfuncout 
                = (((- (IData)((__Vfunc_immgen_tb__DOT__ref_imm_I__23__ins 
                                >> 0x1fU))) << 0x0000000cU) 
                   | (__Vfunc_immgen_tb__DOT__ref_imm_I__23__ins 
                      >> 0x14U));
            __Vfunc_immgen_tb__DOT__ref_imm__18__Vfuncout 
                = __Vfunc_immgen_tb__DOT__ref_imm_I__23__Vfuncout;
        }
        __Vtask_immgen_tb__DOT__run_test__12__expected 
            = __Vfunc_immgen_tb__DOT__ref_imm__18__Vfuncout;
        if (VL_UNLIKELY(((vlSelfRef.immgen_tb__DOT__dut__DOT__imm_out 
                          != __Vtask_immgen_tb__DOT__run_test__12__expected)))) {
            VL_WRITEF_NX("ERROR: imm mismatch sel=%0# instr=%x\n  got:      %x\n  expected: %x\n",0,
                         3,__Vtask_immgen_tb__DOT__run_test__12__sel,
                         32,vlSelfRef.immgen_tb__DOT__instr,
                         32,vlSelfRef.immgen_tb__DOT__dut__DOT__imm_out,
                         32,__Vtask_immgen_tb__DOT__run_test__12__expected);
            vlSelfRef.immgen_tb__DOT__failures = ((IData)(1U) 
                                                  + vlSelfRef.immgen_tb__DOT__failures);
        }
        __Vtask_immgen_tb__DOT__run_test__24__sel = 2U;
        __Vtask_immgen_tb__DOT__run_test__24__expected = 0;
        if ((0U == (IData)(__Vtask_immgen_tb__DOT__run_test__24__sel))) {
            __Vfunc_immgen_tb__DOT__make_random_I__25__ins = 0;
            __Vfunc_immgen_tb__DOT__make_random_I__25__ins 
                = (0x13U | ((IData)(VL_RANDOM_I()) 
                            << 7U));
            __Vfunc_immgen_tb__DOT__make_random_I__25__Vfuncout 
                = __Vfunc_immgen_tb__DOT__make_random_I__25__ins;
            vlSelfRef.immgen_tb__DOT__instr = __Vfunc_immgen_tb__DOT__make_random_I__25__Vfuncout;
        } else if ((1U == (IData)(__Vtask_immgen_tb__DOT__run_test__24__sel))) {
            __Vfunc_immgen_tb__DOT__make_random_S__26__ins = 0;
            __Vfunc_immgen_tb__DOT__make_random_S__26__imm = 0;
            __Vfunc_immgen_tb__DOT__make_random_S__26__imm 
                = (0x00000fffU & VL_RANDOM_I());
            __Vfunc_immgen_tb__DOT__make_random_S__26__ins 
                = ((0x0000007fU & __Vfunc_immgen_tb__DOT__make_random_S__26__ins) 
                   | (((0x01fc0000U & ((IData)(__Vfunc_immgen_tb__DOT__make_random_S__26__imm) 
                                       << 0x0000000dU)) 
                       | ((0x0003ffe0U & ((IData)(VL_RANDOM_I()) 
                                          << 5U)) | 
                          (0x0000001fU & (IData)(__Vfunc_immgen_tb__DOT__make_random_S__26__imm)))) 
                      << 7U));
            __Vfunc_immgen_tb__DOT__make_random_S__26__ins 
                = (0x00000023U | (0xffffff80U & __Vfunc_immgen_tb__DOT__make_random_S__26__ins));
            __Vfunc_immgen_tb__DOT__make_random_S__26__Vfuncout 
                = __Vfunc_immgen_tb__DOT__make_random_S__26__ins;
            vlSelfRef.immgen_tb__DOT__instr = __Vfunc_immgen_tb__DOT__make_random_S__26__Vfuncout;
        } else if ((2U == (IData)(__Vtask_immgen_tb__DOT__run_test__24__sel))) {
            __Vfunc_immgen_tb__DOT__make_random_B__27__ins = 0;
            __Vfunc_immgen_tb__DOT__make_random_B__27__imm = 0;
            __Vfunc_immgen_tb__DOT__make_random_B__27__imm 
                = (0x00000fffU & VL_RANDOM_I());
            __Vfunc_immgen_tb__DOT__make_random_B__27__ins 
                = ((0x000fffffU & __Vfunc_immgen_tb__DOT__make_random_B__27__ins) 
                   | (((0x00000800U & (IData)(__Vfunc_immgen_tb__DOT__make_random_B__27__imm)) 
                       | ((0x000007e0U & ((IData)(__Vfunc_immgen_tb__DOT__make_random_B__27__imm) 
                                          << 1U)) | 
                          (0x0000001fU & VL_RANDOM_I()))) 
                      << 0x00000014U));
            __Vfunc_immgen_tb__DOT__make_random_B__27__ins 
                = ((0xfff0007fU & __Vfunc_immgen_tb__DOT__make_random_B__27__ins) 
                   | (((0x00001fe0U & ((IData)(VL_RANDOM_I()) 
                                       << 5U)) | ((0x0000001eU 
                                                   & ((IData)(__Vfunc_immgen_tb__DOT__make_random_B__27__imm) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(__Vfunc_immgen_tb__DOT__make_random_B__27__imm) 
                                                        >> 0x0aU)))) 
                      << 7U));
            __Vfunc_immgen_tb__DOT__make_random_B__27__ins 
                = (0x00000063U | (0xffffff80U & __Vfunc_immgen_tb__DOT__make_random_B__27__ins));
            __Vfunc_immgen_tb__DOT__make_random_B__27__Vfuncout 
                = __Vfunc_immgen_tb__DOT__make_random_B__27__ins;
            vlSelfRef.immgen_tb__DOT__instr = __Vfunc_immgen_tb__DOT__make_random_B__27__Vfuncout;
        } else if ((3U == (IData)(__Vtask_immgen_tb__DOT__run_test__24__sel))) {
            __Vfunc_immgen_tb__DOT__make_random_U__28__ins = 0;
            __Vfunc_immgen_tb__DOT__make_random_U__28__ins = 0U;
            __Vfunc_immgen_tb__DOT__make_random_U__28__ins 
                = ((0x00000fffU & __Vfunc_immgen_tb__DOT__make_random_U__28__ins) 
                   | ((IData)(VL_RANDOM_I()) << 0x0000000cU));
            __Vfunc_immgen_tb__DOT__make_random_U__28__ins 
                = (0x00000037U | (0xffffff80U & __Vfunc_immgen_tb__DOT__make_random_U__28__ins));
            __Vfunc_immgen_tb__DOT__make_random_U__28__Vfuncout 
                = __Vfunc_immgen_tb__DOT__make_random_U__28__ins;
            vlSelfRef.immgen_tb__DOT__instr = __Vfunc_immgen_tb__DOT__make_random_U__28__Vfuncout;
        } else if ((4U == (IData)(__Vtask_immgen_tb__DOT__run_test__24__sel))) {
            __Vfunc_immgen_tb__DOT__make_random_J__29__ins = 0;
            __Vfunc_immgen_tb__DOT__make_random_J__29__imm = 0;
            __Vfunc_immgen_tb__DOT__make_random_J__29__imm 
                = (0x000fffffU & VL_RANDOM_I());
            __Vfunc_immgen_tb__DOT__make_random_J__29__ins 
                = ((0x000fffffU & __Vfunc_immgen_tb__DOT__make_random_J__29__ins) 
                   | (((0x00000800U & (__Vfunc_immgen_tb__DOT__make_random_J__29__imm 
                                       >> 8U)) | ((0x000007feU 
                                                   & (__Vfunc_immgen_tb__DOT__make_random_J__29__imm 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (__Vfunc_immgen_tb__DOT__make_random_J__29__imm 
                                                        >> 0x0aU)))) 
                      << 0x00000014U));
            __Vfunc_immgen_tb__DOT__make_random_J__29__ins 
                = (0x6fU | ((0xfff00000U & __Vfunc_immgen_tb__DOT__make_random_J__29__ins) 
                            | ((0x000ff000U & (__Vfunc_immgen_tb__DOT__make_random_J__29__imm 
                                               << 1U)) 
                               | (0x00000f80U & ((IData)(
                                                         VL_RANDOM_I()) 
                                                 << 7U)))));
            __Vfunc_immgen_tb__DOT__make_random_J__29__Vfuncout 
                = __Vfunc_immgen_tb__DOT__make_random_J__29__ins;
            vlSelfRef.immgen_tb__DOT__instr = __Vfunc_immgen_tb__DOT__make_random_J__29__Vfuncout;
        }
        vlSelfRef.immgen_tb__DOT__imm_sel = __Vtask_immgen_tb__DOT__run_test__24__sel;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "rtl/testbenches/immgen_tb.sv", 
                                             147);
        __Vfunc_immgen_tb__DOT__ref_imm__30__ins = vlSelfRef.immgen_tb__DOT__instr;
        __Vfunc_immgen_tb__DOT__ref_imm__30__sel = __Vtask_immgen_tb__DOT__run_test__24__sel;
        if ((4U & (IData)(__Vfunc_immgen_tb__DOT__ref_imm__30__sel))) {
            if ((2U & (IData)(__Vfunc_immgen_tb__DOT__ref_imm__30__sel))) {
                __Vfunc_immgen_tb__DOT__ref_imm__30__Vfuncout = 0xdeadbeefU;
            } else if ((1U & (IData)(__Vfunc_immgen_tb__DOT__ref_imm__30__sel))) {
                __Vfunc_immgen_tb__DOT__ref_imm__30__Vfuncout = 0xdeadbeefU;
            } else {
                __Vfunc_immgen_tb__DOT__ref_imm_J__31__ins 
                    = __Vfunc_immgen_tb__DOT__ref_imm__30__ins;
                __Vfunc_immgen_tb__DOT__ref_imm_J__31__Vfuncout 
                    = ((((0x00000ffeU & ((- (IData)(
                                                    (__Vfunc_immgen_tb__DOT__ref_imm_J__31__ins 
                                                     >> 0x1fU))) 
                                         << 1U)) | 
                         (__Vfunc_immgen_tb__DOT__ref_imm_J__31__ins 
                          >> 0x1fU)) << 0x00000014U) 
                       | ((((0x000001feU & (__Vfunc_immgen_tb__DOT__ref_imm_J__31__ins 
                                            >> 0x0000000bU)) 
                            | (1U & (__Vfunc_immgen_tb__DOT__ref_imm_J__31__ins 
                                     >> 0x14U))) << 0x0000000bU) 
                          | (0x000007feU & (__Vfunc_immgen_tb__DOT__ref_imm_J__31__ins 
                                            >> 0x00000014U))));
                __Vfunc_immgen_tb__DOT__ref_imm__30__Vfuncout 
                    = __Vfunc_immgen_tb__DOT__ref_imm_J__31__Vfuncout;
            }
        } else if ((2U & (IData)(__Vfunc_immgen_tb__DOT__ref_imm__30__sel))) {
            if ((1U & (IData)(__Vfunc_immgen_tb__DOT__ref_imm__30__sel))) {
                __Vfunc_immgen_tb__DOT__ref_imm_U__32__ins 
                    = __Vfunc_immgen_tb__DOT__ref_imm__30__ins;
                __Vfunc_immgen_tb__DOT__ref_imm_U__32__Vfuncout 
                    = (0xfffff000U & __Vfunc_immgen_tb__DOT__ref_imm_U__32__ins);
                __Vfunc_immgen_tb__DOT__ref_imm__30__Vfuncout 
                    = __Vfunc_immgen_tb__DOT__ref_imm_U__32__Vfuncout;
            } else {
                __Vfunc_immgen_tb__DOT__ref_imm_B__33__ins 
                    = __Vfunc_immgen_tb__DOT__ref_imm__30__ins;
                __Vfunc_immgen_tb__DOT__ref_imm_B__33__Vfuncout 
                    = (((- (IData)((__Vfunc_immgen_tb__DOT__ref_imm_B__33__ins 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | ((0x00000800U & (__Vfunc_immgen_tb__DOT__ref_imm_B__33__ins 
                                          << 4U)) | 
                          ((0x000007e0U & (__Vfunc_immgen_tb__DOT__ref_imm_B__33__ins 
                                           >> 0x00000014U)) 
                           | (0x0000001eU & (__Vfunc_immgen_tb__DOT__ref_imm_B__33__ins 
                                             >> 7U)))));
                __Vfunc_immgen_tb__DOT__ref_imm__30__Vfuncout 
                    = __Vfunc_immgen_tb__DOT__ref_imm_B__33__Vfuncout;
            }
        } else if ((1U & (IData)(__Vfunc_immgen_tb__DOT__ref_imm__30__sel))) {
            __Vfunc_immgen_tb__DOT__ref_imm_S__34__ins 
                = __Vfunc_immgen_tb__DOT__ref_imm__30__ins;
            __Vfunc_immgen_tb__DOT__ref_imm_S__34__Vfuncout 
                = (((- (IData)((__Vfunc_immgen_tb__DOT__ref_imm_S__34__ins 
                                >> 0x1fU))) << 0x0000000cU) 
                   | ((0x00000fe0U & (__Vfunc_immgen_tb__DOT__ref_imm_S__34__ins 
                                      >> 0x00000014U)) 
                      | (0x0000001fU & (__Vfunc_immgen_tb__DOT__ref_imm_S__34__ins 
                                        >> 7U))));
            __Vfunc_immgen_tb__DOT__ref_imm__30__Vfuncout 
                = __Vfunc_immgen_tb__DOT__ref_imm_S__34__Vfuncout;
        } else {
            __Vfunc_immgen_tb__DOT__ref_imm_I__35__ins 
                = __Vfunc_immgen_tb__DOT__ref_imm__30__ins;
            __Vfunc_immgen_tb__DOT__ref_imm_I__35__Vfuncout 
                = (((- (IData)((__Vfunc_immgen_tb__DOT__ref_imm_I__35__ins 
                                >> 0x1fU))) << 0x0000000cU) 
                   | (__Vfunc_immgen_tb__DOT__ref_imm_I__35__ins 
                      >> 0x14U));
            __Vfunc_immgen_tb__DOT__ref_imm__30__Vfuncout 
                = __Vfunc_immgen_tb__DOT__ref_imm_I__35__Vfuncout;
        }
        __Vtask_immgen_tb__DOT__run_test__24__expected 
            = __Vfunc_immgen_tb__DOT__ref_imm__30__Vfuncout;
        if (VL_UNLIKELY(((vlSelfRef.immgen_tb__DOT__dut__DOT__imm_out 
                          != __Vtask_immgen_tb__DOT__run_test__24__expected)))) {
            VL_WRITEF_NX("ERROR: imm mismatch sel=%0# instr=%x\n  got:      %x\n  expected: %x\n",0,
                         3,__Vtask_immgen_tb__DOT__run_test__24__sel,
                         32,vlSelfRef.immgen_tb__DOT__instr,
                         32,vlSelfRef.immgen_tb__DOT__dut__DOT__imm_out,
                         32,__Vtask_immgen_tb__DOT__run_test__24__expected);
            vlSelfRef.immgen_tb__DOT__failures = ((IData)(1U) 
                                                  + vlSelfRef.immgen_tb__DOT__failures);
        }
        __Vtask_immgen_tb__DOT__run_test__36__sel = 3U;
        __Vtask_immgen_tb__DOT__run_test__36__expected = 0;
        if ((0U == (IData)(__Vtask_immgen_tb__DOT__run_test__36__sel))) {
            __Vfunc_immgen_tb__DOT__make_random_I__37__ins = 0;
            __Vfunc_immgen_tb__DOT__make_random_I__37__ins 
                = (0x13U | ((IData)(VL_RANDOM_I()) 
                            << 7U));
            __Vfunc_immgen_tb__DOT__make_random_I__37__Vfuncout 
                = __Vfunc_immgen_tb__DOT__make_random_I__37__ins;
            vlSelfRef.immgen_tb__DOT__instr = __Vfunc_immgen_tb__DOT__make_random_I__37__Vfuncout;
        } else if ((1U == (IData)(__Vtask_immgen_tb__DOT__run_test__36__sel))) {
            __Vfunc_immgen_tb__DOT__make_random_S__38__ins = 0;
            __Vfunc_immgen_tb__DOT__make_random_S__38__imm = 0;
            __Vfunc_immgen_tb__DOT__make_random_S__38__imm 
                = (0x00000fffU & VL_RANDOM_I());
            __Vfunc_immgen_tb__DOT__make_random_S__38__ins 
                = ((0x0000007fU & __Vfunc_immgen_tb__DOT__make_random_S__38__ins) 
                   | (((0x01fc0000U & ((IData)(__Vfunc_immgen_tb__DOT__make_random_S__38__imm) 
                                       << 0x0000000dU)) 
                       | ((0x0003ffe0U & ((IData)(VL_RANDOM_I()) 
                                          << 5U)) | 
                          (0x0000001fU & (IData)(__Vfunc_immgen_tb__DOT__make_random_S__38__imm)))) 
                      << 7U));
            __Vfunc_immgen_tb__DOT__make_random_S__38__ins 
                = (0x00000023U | (0xffffff80U & __Vfunc_immgen_tb__DOT__make_random_S__38__ins));
            __Vfunc_immgen_tb__DOT__make_random_S__38__Vfuncout 
                = __Vfunc_immgen_tb__DOT__make_random_S__38__ins;
            vlSelfRef.immgen_tb__DOT__instr = __Vfunc_immgen_tb__DOT__make_random_S__38__Vfuncout;
        } else if ((2U == (IData)(__Vtask_immgen_tb__DOT__run_test__36__sel))) {
            __Vfunc_immgen_tb__DOT__make_random_B__39__ins = 0;
            __Vfunc_immgen_tb__DOT__make_random_B__39__imm = 0;
            __Vfunc_immgen_tb__DOT__make_random_B__39__imm 
                = (0x00000fffU & VL_RANDOM_I());
            __Vfunc_immgen_tb__DOT__make_random_B__39__ins 
                = ((0x000fffffU & __Vfunc_immgen_tb__DOT__make_random_B__39__ins) 
                   | (((0x00000800U & (IData)(__Vfunc_immgen_tb__DOT__make_random_B__39__imm)) 
                       | ((0x000007e0U & ((IData)(__Vfunc_immgen_tb__DOT__make_random_B__39__imm) 
                                          << 1U)) | 
                          (0x0000001fU & VL_RANDOM_I()))) 
                      << 0x00000014U));
            __Vfunc_immgen_tb__DOT__make_random_B__39__ins 
                = ((0xfff0007fU & __Vfunc_immgen_tb__DOT__make_random_B__39__ins) 
                   | (((0x00001fe0U & ((IData)(VL_RANDOM_I()) 
                                       << 5U)) | ((0x0000001eU 
                                                   & ((IData)(__Vfunc_immgen_tb__DOT__make_random_B__39__imm) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(__Vfunc_immgen_tb__DOT__make_random_B__39__imm) 
                                                        >> 0x0aU)))) 
                      << 7U));
            __Vfunc_immgen_tb__DOT__make_random_B__39__ins 
                = (0x00000063U | (0xffffff80U & __Vfunc_immgen_tb__DOT__make_random_B__39__ins));
            __Vfunc_immgen_tb__DOT__make_random_B__39__Vfuncout 
                = __Vfunc_immgen_tb__DOT__make_random_B__39__ins;
            vlSelfRef.immgen_tb__DOT__instr = __Vfunc_immgen_tb__DOT__make_random_B__39__Vfuncout;
        } else if ((3U == (IData)(__Vtask_immgen_tb__DOT__run_test__36__sel))) {
            __Vfunc_immgen_tb__DOT__make_random_U__40__ins = 0;
            __Vfunc_immgen_tb__DOT__make_random_U__40__ins = 0U;
            __Vfunc_immgen_tb__DOT__make_random_U__40__ins 
                = ((0x00000fffU & __Vfunc_immgen_tb__DOT__make_random_U__40__ins) 
                   | ((IData)(VL_RANDOM_I()) << 0x0000000cU));
            __Vfunc_immgen_tb__DOT__make_random_U__40__ins 
                = (0x00000037U | (0xffffff80U & __Vfunc_immgen_tb__DOT__make_random_U__40__ins));
            __Vfunc_immgen_tb__DOT__make_random_U__40__Vfuncout 
                = __Vfunc_immgen_tb__DOT__make_random_U__40__ins;
            vlSelfRef.immgen_tb__DOT__instr = __Vfunc_immgen_tb__DOT__make_random_U__40__Vfuncout;
        } else if ((4U == (IData)(__Vtask_immgen_tb__DOT__run_test__36__sel))) {
            __Vfunc_immgen_tb__DOT__make_random_J__41__ins = 0;
            __Vfunc_immgen_tb__DOT__make_random_J__41__imm = 0;
            __Vfunc_immgen_tb__DOT__make_random_J__41__imm 
                = (0x000fffffU & VL_RANDOM_I());
            __Vfunc_immgen_tb__DOT__make_random_J__41__ins 
                = ((0x000fffffU & __Vfunc_immgen_tb__DOT__make_random_J__41__ins) 
                   | (((0x00000800U & (__Vfunc_immgen_tb__DOT__make_random_J__41__imm 
                                       >> 8U)) | ((0x000007feU 
                                                   & (__Vfunc_immgen_tb__DOT__make_random_J__41__imm 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (__Vfunc_immgen_tb__DOT__make_random_J__41__imm 
                                                        >> 0x0aU)))) 
                      << 0x00000014U));
            __Vfunc_immgen_tb__DOT__make_random_J__41__ins 
                = (0x6fU | ((0xfff00000U & __Vfunc_immgen_tb__DOT__make_random_J__41__ins) 
                            | ((0x000ff000U & (__Vfunc_immgen_tb__DOT__make_random_J__41__imm 
                                               << 1U)) 
                               | (0x00000f80U & ((IData)(
                                                         VL_RANDOM_I()) 
                                                 << 7U)))));
            __Vfunc_immgen_tb__DOT__make_random_J__41__Vfuncout 
                = __Vfunc_immgen_tb__DOT__make_random_J__41__ins;
            vlSelfRef.immgen_tb__DOT__instr = __Vfunc_immgen_tb__DOT__make_random_J__41__Vfuncout;
        }
        vlSelfRef.immgen_tb__DOT__imm_sel = __Vtask_immgen_tb__DOT__run_test__36__sel;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "rtl/testbenches/immgen_tb.sv", 
                                             147);
        __Vfunc_immgen_tb__DOT__ref_imm__42__ins = vlSelfRef.immgen_tb__DOT__instr;
        __Vfunc_immgen_tb__DOT__ref_imm__42__sel = __Vtask_immgen_tb__DOT__run_test__36__sel;
        if ((4U & (IData)(__Vfunc_immgen_tb__DOT__ref_imm__42__sel))) {
            if ((2U & (IData)(__Vfunc_immgen_tb__DOT__ref_imm__42__sel))) {
                __Vfunc_immgen_tb__DOT__ref_imm__42__Vfuncout = 0xdeadbeefU;
            } else if ((1U & (IData)(__Vfunc_immgen_tb__DOT__ref_imm__42__sel))) {
                __Vfunc_immgen_tb__DOT__ref_imm__42__Vfuncout = 0xdeadbeefU;
            } else {
                __Vfunc_immgen_tb__DOT__ref_imm_J__43__ins 
                    = __Vfunc_immgen_tb__DOT__ref_imm__42__ins;
                __Vfunc_immgen_tb__DOT__ref_imm_J__43__Vfuncout 
                    = ((((0x00000ffeU & ((- (IData)(
                                                    (__Vfunc_immgen_tb__DOT__ref_imm_J__43__ins 
                                                     >> 0x1fU))) 
                                         << 1U)) | 
                         (__Vfunc_immgen_tb__DOT__ref_imm_J__43__ins 
                          >> 0x1fU)) << 0x00000014U) 
                       | ((((0x000001feU & (__Vfunc_immgen_tb__DOT__ref_imm_J__43__ins 
                                            >> 0x0000000bU)) 
                            | (1U & (__Vfunc_immgen_tb__DOT__ref_imm_J__43__ins 
                                     >> 0x14U))) << 0x0000000bU) 
                          | (0x000007feU & (__Vfunc_immgen_tb__DOT__ref_imm_J__43__ins 
                                            >> 0x00000014U))));
                __Vfunc_immgen_tb__DOT__ref_imm__42__Vfuncout 
                    = __Vfunc_immgen_tb__DOT__ref_imm_J__43__Vfuncout;
            }
        } else if ((2U & (IData)(__Vfunc_immgen_tb__DOT__ref_imm__42__sel))) {
            if ((1U & (IData)(__Vfunc_immgen_tb__DOT__ref_imm__42__sel))) {
                __Vfunc_immgen_tb__DOT__ref_imm_U__44__ins 
                    = __Vfunc_immgen_tb__DOT__ref_imm__42__ins;
                __Vfunc_immgen_tb__DOT__ref_imm_U__44__Vfuncout 
                    = (0xfffff000U & __Vfunc_immgen_tb__DOT__ref_imm_U__44__ins);
                __Vfunc_immgen_tb__DOT__ref_imm__42__Vfuncout 
                    = __Vfunc_immgen_tb__DOT__ref_imm_U__44__Vfuncout;
            } else {
                __Vfunc_immgen_tb__DOT__ref_imm_B__45__ins 
                    = __Vfunc_immgen_tb__DOT__ref_imm__42__ins;
                __Vfunc_immgen_tb__DOT__ref_imm_B__45__Vfuncout 
                    = (((- (IData)((__Vfunc_immgen_tb__DOT__ref_imm_B__45__ins 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | ((0x00000800U & (__Vfunc_immgen_tb__DOT__ref_imm_B__45__ins 
                                          << 4U)) | 
                          ((0x000007e0U & (__Vfunc_immgen_tb__DOT__ref_imm_B__45__ins 
                                           >> 0x00000014U)) 
                           | (0x0000001eU & (__Vfunc_immgen_tb__DOT__ref_imm_B__45__ins 
                                             >> 7U)))));
                __Vfunc_immgen_tb__DOT__ref_imm__42__Vfuncout 
                    = __Vfunc_immgen_tb__DOT__ref_imm_B__45__Vfuncout;
            }
        } else if ((1U & (IData)(__Vfunc_immgen_tb__DOT__ref_imm__42__sel))) {
            __Vfunc_immgen_tb__DOT__ref_imm_S__46__ins 
                = __Vfunc_immgen_tb__DOT__ref_imm__42__ins;
            __Vfunc_immgen_tb__DOT__ref_imm_S__46__Vfuncout 
                = (((- (IData)((__Vfunc_immgen_tb__DOT__ref_imm_S__46__ins 
                                >> 0x1fU))) << 0x0000000cU) 
                   | ((0x00000fe0U & (__Vfunc_immgen_tb__DOT__ref_imm_S__46__ins 
                                      >> 0x00000014U)) 
                      | (0x0000001fU & (__Vfunc_immgen_tb__DOT__ref_imm_S__46__ins 
                                        >> 7U))));
            __Vfunc_immgen_tb__DOT__ref_imm__42__Vfuncout 
                = __Vfunc_immgen_tb__DOT__ref_imm_S__46__Vfuncout;
        } else {
            __Vfunc_immgen_tb__DOT__ref_imm_I__47__ins 
                = __Vfunc_immgen_tb__DOT__ref_imm__42__ins;
            __Vfunc_immgen_tb__DOT__ref_imm_I__47__Vfuncout 
                = (((- (IData)((__Vfunc_immgen_tb__DOT__ref_imm_I__47__ins 
                                >> 0x1fU))) << 0x0000000cU) 
                   | (__Vfunc_immgen_tb__DOT__ref_imm_I__47__ins 
                      >> 0x14U));
            __Vfunc_immgen_tb__DOT__ref_imm__42__Vfuncout 
                = __Vfunc_immgen_tb__DOT__ref_imm_I__47__Vfuncout;
        }
        __Vtask_immgen_tb__DOT__run_test__36__expected 
            = __Vfunc_immgen_tb__DOT__ref_imm__42__Vfuncout;
        if (VL_UNLIKELY(((vlSelfRef.immgen_tb__DOT__dut__DOT__imm_out 
                          != __Vtask_immgen_tb__DOT__run_test__36__expected)))) {
            VL_WRITEF_NX("ERROR: imm mismatch sel=%0# instr=%x\n  got:      %x\n  expected: %x\n",0,
                         3,__Vtask_immgen_tb__DOT__run_test__36__sel,
                         32,vlSelfRef.immgen_tb__DOT__instr,
                         32,vlSelfRef.immgen_tb__DOT__dut__DOT__imm_out,
                         32,__Vtask_immgen_tb__DOT__run_test__36__expected);
            vlSelfRef.immgen_tb__DOT__failures = ((IData)(1U) 
                                                  + vlSelfRef.immgen_tb__DOT__failures);
        }
        __Vtask_immgen_tb__DOT__run_test__48__sel = 4U;
        __Vtask_immgen_tb__DOT__run_test__48__expected = 0;
        if ((0U == (IData)(__Vtask_immgen_tb__DOT__run_test__48__sel))) {
            __Vfunc_immgen_tb__DOT__make_random_I__49__ins = 0;
            __Vfunc_immgen_tb__DOT__make_random_I__49__ins 
                = (0x13U | ((IData)(VL_RANDOM_I()) 
                            << 7U));
            __Vfunc_immgen_tb__DOT__make_random_I__49__Vfuncout 
                = __Vfunc_immgen_tb__DOT__make_random_I__49__ins;
            vlSelfRef.immgen_tb__DOT__instr = __Vfunc_immgen_tb__DOT__make_random_I__49__Vfuncout;
        } else if ((1U == (IData)(__Vtask_immgen_tb__DOT__run_test__48__sel))) {
            __Vfunc_immgen_tb__DOT__make_random_S__50__ins = 0;
            __Vfunc_immgen_tb__DOT__make_random_S__50__imm = 0;
            __Vfunc_immgen_tb__DOT__make_random_S__50__imm 
                = (0x00000fffU & VL_RANDOM_I());
            __Vfunc_immgen_tb__DOT__make_random_S__50__ins 
                = ((0x0000007fU & __Vfunc_immgen_tb__DOT__make_random_S__50__ins) 
                   | (((0x01fc0000U & ((IData)(__Vfunc_immgen_tb__DOT__make_random_S__50__imm) 
                                       << 0x0000000dU)) 
                       | ((0x0003ffe0U & ((IData)(VL_RANDOM_I()) 
                                          << 5U)) | 
                          (0x0000001fU & (IData)(__Vfunc_immgen_tb__DOT__make_random_S__50__imm)))) 
                      << 7U));
            __Vfunc_immgen_tb__DOT__make_random_S__50__ins 
                = (0x00000023U | (0xffffff80U & __Vfunc_immgen_tb__DOT__make_random_S__50__ins));
            __Vfunc_immgen_tb__DOT__make_random_S__50__Vfuncout 
                = __Vfunc_immgen_tb__DOT__make_random_S__50__ins;
            vlSelfRef.immgen_tb__DOT__instr = __Vfunc_immgen_tb__DOT__make_random_S__50__Vfuncout;
        } else if ((2U == (IData)(__Vtask_immgen_tb__DOT__run_test__48__sel))) {
            __Vfunc_immgen_tb__DOT__make_random_B__51__ins = 0;
            __Vfunc_immgen_tb__DOT__make_random_B__51__imm = 0;
            __Vfunc_immgen_tb__DOT__make_random_B__51__imm 
                = (0x00000fffU & VL_RANDOM_I());
            __Vfunc_immgen_tb__DOT__make_random_B__51__ins 
                = ((0x000fffffU & __Vfunc_immgen_tb__DOT__make_random_B__51__ins) 
                   | (((0x00000800U & (IData)(__Vfunc_immgen_tb__DOT__make_random_B__51__imm)) 
                       | ((0x000007e0U & ((IData)(__Vfunc_immgen_tb__DOT__make_random_B__51__imm) 
                                          << 1U)) | 
                          (0x0000001fU & VL_RANDOM_I()))) 
                      << 0x00000014U));
            __Vfunc_immgen_tb__DOT__make_random_B__51__ins 
                = ((0xfff0007fU & __Vfunc_immgen_tb__DOT__make_random_B__51__ins) 
                   | (((0x00001fe0U & ((IData)(VL_RANDOM_I()) 
                                       << 5U)) | ((0x0000001eU 
                                                   & ((IData)(__Vfunc_immgen_tb__DOT__make_random_B__51__imm) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(__Vfunc_immgen_tb__DOT__make_random_B__51__imm) 
                                                        >> 0x0aU)))) 
                      << 7U));
            __Vfunc_immgen_tb__DOT__make_random_B__51__ins 
                = (0x00000063U | (0xffffff80U & __Vfunc_immgen_tb__DOT__make_random_B__51__ins));
            __Vfunc_immgen_tb__DOT__make_random_B__51__Vfuncout 
                = __Vfunc_immgen_tb__DOT__make_random_B__51__ins;
            vlSelfRef.immgen_tb__DOT__instr = __Vfunc_immgen_tb__DOT__make_random_B__51__Vfuncout;
        } else if ((3U == (IData)(__Vtask_immgen_tb__DOT__run_test__48__sel))) {
            __Vfunc_immgen_tb__DOT__make_random_U__52__ins = 0;
            __Vfunc_immgen_tb__DOT__make_random_U__52__ins = 0U;
            __Vfunc_immgen_tb__DOT__make_random_U__52__ins 
                = ((0x00000fffU & __Vfunc_immgen_tb__DOT__make_random_U__52__ins) 
                   | ((IData)(VL_RANDOM_I()) << 0x0000000cU));
            __Vfunc_immgen_tb__DOT__make_random_U__52__ins 
                = (0x00000037U | (0xffffff80U & __Vfunc_immgen_tb__DOT__make_random_U__52__ins));
            __Vfunc_immgen_tb__DOT__make_random_U__52__Vfuncout 
                = __Vfunc_immgen_tb__DOT__make_random_U__52__ins;
            vlSelfRef.immgen_tb__DOT__instr = __Vfunc_immgen_tb__DOT__make_random_U__52__Vfuncout;
        } else if ((4U == (IData)(__Vtask_immgen_tb__DOT__run_test__48__sel))) {
            __Vfunc_immgen_tb__DOT__make_random_J__53__ins = 0;
            __Vfunc_immgen_tb__DOT__make_random_J__53__imm = 0;
            __Vfunc_immgen_tb__DOT__make_random_J__53__imm 
                = (0x000fffffU & VL_RANDOM_I());
            __Vfunc_immgen_tb__DOT__make_random_J__53__ins 
                = ((0x000fffffU & __Vfunc_immgen_tb__DOT__make_random_J__53__ins) 
                   | (((0x00000800U & (__Vfunc_immgen_tb__DOT__make_random_J__53__imm 
                                       >> 8U)) | ((0x000007feU 
                                                   & (__Vfunc_immgen_tb__DOT__make_random_J__53__imm 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (__Vfunc_immgen_tb__DOT__make_random_J__53__imm 
                                                        >> 0x0aU)))) 
                      << 0x00000014U));
            __Vfunc_immgen_tb__DOT__make_random_J__53__ins 
                = (0x6fU | ((0xfff00000U & __Vfunc_immgen_tb__DOT__make_random_J__53__ins) 
                            | ((0x000ff000U & (__Vfunc_immgen_tb__DOT__make_random_J__53__imm 
                                               << 1U)) 
                               | (0x00000f80U & ((IData)(
                                                         VL_RANDOM_I()) 
                                                 << 7U)))));
            __Vfunc_immgen_tb__DOT__make_random_J__53__Vfuncout 
                = __Vfunc_immgen_tb__DOT__make_random_J__53__ins;
            vlSelfRef.immgen_tb__DOT__instr = __Vfunc_immgen_tb__DOT__make_random_J__53__Vfuncout;
        }
        vlSelfRef.immgen_tb__DOT__imm_sel = __Vtask_immgen_tb__DOT__run_test__48__sel;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "rtl/testbenches/immgen_tb.sv", 
                                             147);
        __Vfunc_immgen_tb__DOT__ref_imm__54__ins = vlSelfRef.immgen_tb__DOT__instr;
        __Vfunc_immgen_tb__DOT__ref_imm__54__sel = __Vtask_immgen_tb__DOT__run_test__48__sel;
        if ((4U & (IData)(__Vfunc_immgen_tb__DOT__ref_imm__54__sel))) {
            if ((2U & (IData)(__Vfunc_immgen_tb__DOT__ref_imm__54__sel))) {
                __Vfunc_immgen_tb__DOT__ref_imm__54__Vfuncout = 0xdeadbeefU;
            } else if ((1U & (IData)(__Vfunc_immgen_tb__DOT__ref_imm__54__sel))) {
                __Vfunc_immgen_tb__DOT__ref_imm__54__Vfuncout = 0xdeadbeefU;
            } else {
                __Vfunc_immgen_tb__DOT__ref_imm_J__55__ins 
                    = __Vfunc_immgen_tb__DOT__ref_imm__54__ins;
                __Vfunc_immgen_tb__DOT__ref_imm_J__55__Vfuncout 
                    = ((((0x00000ffeU & ((- (IData)(
                                                    (__Vfunc_immgen_tb__DOT__ref_imm_J__55__ins 
                                                     >> 0x1fU))) 
                                         << 1U)) | 
                         (__Vfunc_immgen_tb__DOT__ref_imm_J__55__ins 
                          >> 0x1fU)) << 0x00000014U) 
                       | ((((0x000001feU & (__Vfunc_immgen_tb__DOT__ref_imm_J__55__ins 
                                            >> 0x0000000bU)) 
                            | (1U & (__Vfunc_immgen_tb__DOT__ref_imm_J__55__ins 
                                     >> 0x14U))) << 0x0000000bU) 
                          | (0x000007feU & (__Vfunc_immgen_tb__DOT__ref_imm_J__55__ins 
                                            >> 0x00000014U))));
                __Vfunc_immgen_tb__DOT__ref_imm__54__Vfuncout 
                    = __Vfunc_immgen_tb__DOT__ref_imm_J__55__Vfuncout;
            }
        } else if ((2U & (IData)(__Vfunc_immgen_tb__DOT__ref_imm__54__sel))) {
            if ((1U & (IData)(__Vfunc_immgen_tb__DOT__ref_imm__54__sel))) {
                __Vfunc_immgen_tb__DOT__ref_imm_U__56__ins 
                    = __Vfunc_immgen_tb__DOT__ref_imm__54__ins;
                __Vfunc_immgen_tb__DOT__ref_imm_U__56__Vfuncout 
                    = (0xfffff000U & __Vfunc_immgen_tb__DOT__ref_imm_U__56__ins);
                __Vfunc_immgen_tb__DOT__ref_imm__54__Vfuncout 
                    = __Vfunc_immgen_tb__DOT__ref_imm_U__56__Vfuncout;
            } else {
                __Vfunc_immgen_tb__DOT__ref_imm_B__57__ins 
                    = __Vfunc_immgen_tb__DOT__ref_imm__54__ins;
                __Vfunc_immgen_tb__DOT__ref_imm_B__57__Vfuncout 
                    = (((- (IData)((__Vfunc_immgen_tb__DOT__ref_imm_B__57__ins 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | ((0x00000800U & (__Vfunc_immgen_tb__DOT__ref_imm_B__57__ins 
                                          << 4U)) | 
                          ((0x000007e0U & (__Vfunc_immgen_tb__DOT__ref_imm_B__57__ins 
                                           >> 0x00000014U)) 
                           | (0x0000001eU & (__Vfunc_immgen_tb__DOT__ref_imm_B__57__ins 
                                             >> 7U)))));
                __Vfunc_immgen_tb__DOT__ref_imm__54__Vfuncout 
                    = __Vfunc_immgen_tb__DOT__ref_imm_B__57__Vfuncout;
            }
        } else if ((1U & (IData)(__Vfunc_immgen_tb__DOT__ref_imm__54__sel))) {
            __Vfunc_immgen_tb__DOT__ref_imm_S__58__ins 
                = __Vfunc_immgen_tb__DOT__ref_imm__54__ins;
            __Vfunc_immgen_tb__DOT__ref_imm_S__58__Vfuncout 
                = (((- (IData)((__Vfunc_immgen_tb__DOT__ref_imm_S__58__ins 
                                >> 0x1fU))) << 0x0000000cU) 
                   | ((0x00000fe0U & (__Vfunc_immgen_tb__DOT__ref_imm_S__58__ins 
                                      >> 0x00000014U)) 
                      | (0x0000001fU & (__Vfunc_immgen_tb__DOT__ref_imm_S__58__ins 
                                        >> 7U))));
            __Vfunc_immgen_tb__DOT__ref_imm__54__Vfuncout 
                = __Vfunc_immgen_tb__DOT__ref_imm_S__58__Vfuncout;
        } else {
            __Vfunc_immgen_tb__DOT__ref_imm_I__59__ins 
                = __Vfunc_immgen_tb__DOT__ref_imm__54__ins;
            __Vfunc_immgen_tb__DOT__ref_imm_I__59__Vfuncout 
                = (((- (IData)((__Vfunc_immgen_tb__DOT__ref_imm_I__59__ins 
                                >> 0x1fU))) << 0x0000000cU) 
                   | (__Vfunc_immgen_tb__DOT__ref_imm_I__59__ins 
                      >> 0x14U));
            __Vfunc_immgen_tb__DOT__ref_imm__54__Vfuncout 
                = __Vfunc_immgen_tb__DOT__ref_imm_I__59__Vfuncout;
        }
        __Vtask_immgen_tb__DOT__run_test__48__expected 
            = __Vfunc_immgen_tb__DOT__ref_imm__54__Vfuncout;
        if (VL_UNLIKELY(((vlSelfRef.immgen_tb__DOT__dut__DOT__imm_out 
                          != __Vtask_immgen_tb__DOT__run_test__48__expected)))) {
            VL_WRITEF_NX("ERROR: imm mismatch sel=%0# instr=%x\n  got:      %x\n  expected: %x\n",0,
                         3,__Vtask_immgen_tb__DOT__run_test__48__sel,
                         32,vlSelfRef.immgen_tb__DOT__instr,
                         32,vlSelfRef.immgen_tb__DOT__dut__DOT__imm_out,
                         32,__Vtask_immgen_tb__DOT__run_test__48__expected);
            vlSelfRef.immgen_tb__DOT__failures = ((IData)(1U) 
                                                  + vlSelfRef.immgen_tb__DOT__failures);
        }
        vlSelfRef.immgen_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.immgen_tb__DOT__unnamedblk1__DOT__i);
    }
    if ((0U == vlSelfRef.immgen_tb__DOT__failures)) {
        VL_WRITEF_NX("PASSED: All immediate tests succeeded!\n",0);
    } else {
        VL_WRITEF_NX("FAILED: %0d mismatches detected!\n",0,
                     32,vlSelfRef.immgen_tb__DOT__failures);
    }
    VL_FINISH_MT("rtl/testbenches/immgen_tb.sv", 184, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vimmgen_tb___024root___dump_triggers__act(Vimmgen_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vimmgen_tb___024root___eval_triggers__act(Vimmgen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimmgen_tb___024root___eval_triggers__act\n"); );
    Vimmgen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vimmgen_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
