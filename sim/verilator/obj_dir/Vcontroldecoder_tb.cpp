// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcontroldecoder_tb__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vcontroldecoder_tb::Vcontroldecoder_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcontroldecoder_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vcontroldecoder_tb::Vcontroldecoder_tb(const char* _vcname__)
    : Vcontroldecoder_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcontroldecoder_tb::~Vcontroldecoder_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcontroldecoder_tb___024root___eval_debug_assertions(Vcontroldecoder_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vcontroldecoder_tb___024root___eval_static(Vcontroldecoder_tb___024root* vlSelf);
void Vcontroldecoder_tb___024root___eval_initial(Vcontroldecoder_tb___024root* vlSelf);
void Vcontroldecoder_tb___024root___eval_settle(Vcontroldecoder_tb___024root* vlSelf);
void Vcontroldecoder_tb___024root___eval(Vcontroldecoder_tb___024root* vlSelf);

void Vcontroldecoder_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcontroldecoder_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcontroldecoder_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcontroldecoder_tb___024root___eval_static(&(vlSymsp->TOP));
        Vcontroldecoder_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vcontroldecoder_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcontroldecoder_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vcontroldecoder_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vcontroldecoder_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vcontroldecoder_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vcontroldecoder_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vcontroldecoder_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcontroldecoder_tb___024root___eval_final(Vcontroldecoder_tb___024root* vlSelf);

VL_ATTR_COLD void Vcontroldecoder_tb::final() {
    Vcontroldecoder_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcontroldecoder_tb::hierName() const { return vlSymsp->name(); }
const char* Vcontroldecoder_tb::modelName() const { return "Vcontroldecoder_tb"; }
unsigned Vcontroldecoder_tb::threads() const { return 1; }
void Vcontroldecoder_tb::prepareClone() const { contextp()->prepareClone(); }
void Vcontroldecoder_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vcontroldecoder_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vcontroldecoder_tb___024root__trace_decl_types(VerilatedFst* tracep);

void Vcontroldecoder_tb___024root__trace_init_top(Vcontroldecoder_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcontroldecoder_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcontroldecoder_tb___024root*>(voidSelf);
    Vcontroldecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vcontroldecoder_tb___024root__trace_decl_types(tracep);
    Vcontroldecoder_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcontroldecoder_tb___024root__trace_register(Vcontroldecoder_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vcontroldecoder_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vcontroldecoder_tb::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vcontroldecoder_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
