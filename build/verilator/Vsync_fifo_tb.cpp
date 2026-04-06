// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsync_fifo_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vsync_fifo_tb::Vsync_fifo_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsync_fifo_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vsync_fifo_tb::Vsync_fifo_tb(const char* _vcname__)
    : Vsync_fifo_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsync_fifo_tb::~Vsync_fifo_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsync_fifo_tb___024root___eval_debug_assertions(Vsync_fifo_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vsync_fifo_tb___024root___eval_static(Vsync_fifo_tb___024root* vlSelf);
void Vsync_fifo_tb___024root___eval_initial(Vsync_fifo_tb___024root* vlSelf);
void Vsync_fifo_tb___024root___eval_settle(Vsync_fifo_tb___024root* vlSelf);
void Vsync_fifo_tb___024root___eval(Vsync_fifo_tb___024root* vlSelf);

void Vsync_fifo_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsync_fifo_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsync_fifo_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsync_fifo_tb___024root___eval_static(&(vlSymsp->TOP));
        Vsync_fifo_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vsync_fifo_tb___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsync_fifo_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vsync_fifo_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vsync_fifo_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vsync_fifo_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vsync_fifo_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vsync_fifo_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsync_fifo_tb___024root___eval_final(Vsync_fifo_tb___024root* vlSelf);

VL_ATTR_COLD void Vsync_fifo_tb::final() {
    Vsync_fifo_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsync_fifo_tb::hierName() const { return vlSymsp->name(); }
const char* Vsync_fifo_tb::modelName() const { return "Vsync_fifo_tb"; }
unsigned Vsync_fifo_tb::threads() const { return 1; }
void Vsync_fifo_tb::prepareClone() const { contextp()->prepareClone(); }
void Vsync_fifo_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vsync_fifo_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vsync_fifo_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vsync_fifo_tb___024root__trace_init_top(Vsync_fifo_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsync_fifo_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsync_fifo_tb___024root*>(voidSelf);
    Vsync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vsync_fifo_tb___024root__trace_decl_types(tracep);
    Vsync_fifo_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsync_fifo_tb___024root__trace_register(Vsync_fifo_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsync_fifo_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsync_fifo_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 45);
    Vsync_fifo_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
