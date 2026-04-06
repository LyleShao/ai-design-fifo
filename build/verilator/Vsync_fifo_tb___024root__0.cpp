// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsync_fifo_tb.h for the primary calling header

#include "Vsync_fifo_tb__pch.h"

VL_ATTR_COLD void Vsync_fifo_tb___024root___eval_initial__TOP(Vsync_fifo_tb___024root* vlSelf);
VlCoroutine Vsync_fifo_tb___024root___eval_initial__TOP__Vtiming__0(Vsync_fifo_tb___024root* vlSelf);
VlCoroutine Vsync_fifo_tb___024root___eval_initial__TOP__Vtiming__1(Vsync_fifo_tb___024root* vlSelf);

void Vsync_fifo_tb___024root___eval_initial(Vsync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root___eval_initial\n"); );
    Vsync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsync_fifo_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vsync_fifo_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vsync_fifo_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vsync_fifo_tb___024root____VbeforeTrig_habc4c356__0(Vsync_fifo_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vsync_fifo_tb___024root___eval_initial__TOP__Vtiming__0(Vsync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vsync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_sync_fifo_tb__DOT__apply_reset__0__sync_fifo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_sync_fifo_tb__DOT__apply_reset__0__sync_fifo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_sync_fifo_tb__DOT__test_full_condition__2__unnamedblk1__DOT__i;
    __Vtask_sync_fifo_tb__DOT__test_full_condition__2__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_sync_fifo_tb__DOT__test_full_condition__2__unnamedblk2__DOT__i;
    __Vtask_sync_fifo_tb__DOT__test_full_condition__2__unnamedblk2__DOT__i = 0;
    // Body
    VL_WRITEF_NX("=========================================\nStarting Verilog Synchronous FIFO Testbench\nFIFO Configuration:\n  DATA_WIDTH = 32\n  FIFO_DEPTH = 16\n  ALMOST_FULL_THRESHOLD = 12\n  ALMOST_EMPTY_THRESHOLD = 4\n  MEMORY_TYPE = REGISTER\n=========================================\n",0);
    vlSymsp->_vm_contextp__->dumpfile("sync_fifo_waveform.vcd"s);
    vlSymsp->_traceDumpOpen();
    VL_WRITEF_NX("[%0t] VCD waveform dump enabled: sync_fifo_waveform.vcd\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    VL_WRITEF_NX("[%0t] Applying reset...\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9);
    vlSelfRef.sync_fifo_tb__DOT__rst = 1U;
    __Vtask_sync_fifo_tb__DOT__apply_reset__0__sync_fifo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_sync_fifo_tb__DOT__apply_reset__0__sync_fifo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vsync_fifo_tb___024root____VbeforeTrig_habc4c356__0(vlSelf, 
                                                            "@(posedge sync_fifo_tb.clk)");
        co_await vlSelfRef.__VtrigSched_habc4c356__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge sync_fifo_tb.clk)", 
                                                             "tb_verilog/sync_fifo_tb.v", 
                                                             117);
        __Vtask_sync_fifo_tb__DOT__apply_reset__0__sync_fifo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_sync_fifo_tb__DOT__apply_reset__0__sync_fifo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[166]);
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb_verilog/sync_fifo_tb.v", 
                                         118);
    vlSelfRef.sync_fifo_tb__DOT__rst = 0U;
    Vsync_fifo_tb___024root____VbeforeTrig_habc4c356__0(vlSelf, 
                                                        "@(posedge sync_fifo_tb.clk)");
    co_await vlSelfRef.__VtrigSched_habc4c356__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sync_fifo_tb.clk)", 
                                                         "tb_verilog/sync_fifo_tb.v", 
                                                         120);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb_verilog/sync_fifo_tb.v", 
                                         121);
    VL_WRITEF_NX("[%0t] Reset released.\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9);
    ++(vlSymsp->__Vcoverage[167]);
    {
        vlSelfRef.sync_fifo_tb__DOT__test_total_count 
            = ((IData)(1U) + vlSelfRef.sync_fifo_tb__DOT__test_total_count);
        VL_WRITEF_NX("[%0t] Test: Basic write and read\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        if (VL_LIKELY(((0U == (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count))))) {
            ++(vlSymsp->__Vcoverage[169]);
        } else {
            VL_WRITEF_NX("  ERROR: FIFO not empty after reset\n",0);
            vlSelfRef.sync_fifo_tb__DOT__test_fail_count 
                = ((IData)(1U) + vlSelfRef.sync_fifo_tb__DOT__test_fail_count);
            goto __Vlabel0;
        }
        Vsync_fifo_tb___024root____VbeforeTrig_habc4c356__0(vlSelf, 
                                                            "@(posedge sync_fifo_tb.clk)");
        co_await vlSelfRef.__VtrigSched_habc4c356__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge sync_fifo_tb.clk)", 
                                                             "tb_verilog/sync_fifo_tb.v", 
                                                             139);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "tb_verilog/sync_fifo_tb.v", 
                                             140);
        vlSelfRef.sync_fifo_tb__DOT__wr_en = 1U;
        vlSelfRef.sync_fifo_tb__DOT__wr_data = 0xa5a5a5a5U;
        Vsync_fifo_tb___024root____VbeforeTrig_habc4c356__0(vlSelf, 
                                                            "@(posedge sync_fifo_tb.clk)");
        co_await vlSelfRef.__VtrigSched_habc4c356__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge sync_fifo_tb.clk)", 
                                                             "tb_verilog/sync_fifo_tb.v", 
                                                             143);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "tb_verilog/sync_fifo_tb.v", 
                                             144);
        vlSelfRef.sync_fifo_tb__DOT__wr_en = 0U;
        if (VL_UNLIKELY(((0U == (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count))))) {
            VL_WRITEF_NX("  ERROR: FIFO still empty after write\n",0);
            vlSelfRef.sync_fifo_tb__DOT__test_fail_count 
                = ((IData)(1U) + vlSelfRef.sync_fifo_tb__DOT__test_fail_count);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[171]);
        }
        Vsync_fifo_tb___024root____VbeforeTrig_habc4c356__0(vlSelf, 
                                                            "@(posedge sync_fifo_tb.clk)");
        co_await vlSelfRef.__VtrigSched_habc4c356__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge sync_fifo_tb.clk)", 
                                                             "tb_verilog/sync_fifo_tb.v", 
                                                             155);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "tb_verilog/sync_fifo_tb.v", 
                                             156);
        vlSelfRef.sync_fifo_tb__DOT__rd_en = 1U;
        Vsync_fifo_tb___024root____VbeforeTrig_habc4c356__0(vlSelf, 
                                                            "@(posedge sync_fifo_tb.clk)");
        co_await vlSelfRef.__VtrigSched_habc4c356__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge sync_fifo_tb.clk)", 
                                                             "tb_verilog/sync_fifo_tb.v", 
                                                             158);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "tb_verilog/sync_fifo_tb.v", 
                                             159);
        vlSelfRef.sync_fifo_tb__DOT__rd_en = 0U;
        if (VL_UNLIKELY(((0xa5a5a5a5U != vlSelfRef.sync_fifo_tb__DOT__rd_data)))) {
            VL_WRITEF_NX("  ERROR: Read data mismatch. Expected 0xA5A5A5A5, got 0x%x\n",0,
                         32,vlSelfRef.sync_fifo_tb__DOT__rd_data);
            vlSelfRef.sync_fifo_tb__DOT__test_fail_count 
                = ((IData)(1U) + vlSelfRef.sync_fifo_tb__DOT__test_fail_count);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[173]);
        }
        if (VL_LIKELY(((0U == (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count))))) {
            ++(vlSymsp->__Vcoverage[175]);
        } else {
            VL_WRITEF_NX("  ERROR: FIFO not empty after read\n",0);
            vlSelfRef.sync_fifo_tb__DOT__test_fail_count 
                = ((IData)(1U) + vlSelfRef.sync_fifo_tb__DOT__test_fail_count);
            goto __Vlabel0;
        }
        VL_WRITEF_NX("  PASS: Basic write/read test\n",0);
        vlSelfRef.sync_fifo_tb__DOT__test_pass_count 
            = ((IData)(1U) + vlSelfRef.sync_fifo_tb__DOT__test_pass_count);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[176]);
    {
        vlSelfRef.sync_fifo_tb__DOT__test_total_count 
            = ((IData)(1U) + vlSelfRef.sync_fifo_tb__DOT__test_total_count);
        VL_WRITEF_NX("[%0t] Test: Full condition\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        __Vtask_sync_fifo_tb__DOT__test_full_condition__2__unnamedblk1__DOT__i = 0;
        __Vtask_sync_fifo_tb__DOT__test_full_condition__2__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00000010U, __Vtask_sync_fifo_tb__DOT__test_full_condition__2__unnamedblk1__DOT__i)) {
            Vsync_fifo_tb___024root____VbeforeTrig_habc4c356__0(vlSelf, 
                                                                "@(posedge sync_fifo_tb.clk)");
            co_await vlSelfRef.__VtrigSched_habc4c356__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge sync_fifo_tb.clk)", 
                                                                 "tb_verilog/sync_fifo_tb.v", 
                                                                 188);
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "tb_verilog/sync_fifo_tb.v", 
                                                 189);
            vlSelfRef.sync_fifo_tb__DOT__wr_en = 1U;
            vlSelfRef.sync_fifo_tb__DOT__wr_data = 
                ((IData)(1U) + __Vtask_sync_fifo_tb__DOT__test_full_condition__2__unnamedblk1__DOT__i);
            Vsync_fifo_tb___024root____VbeforeTrig_habc4c356__0(vlSelf, 
                                                                "@(posedge sync_fifo_tb.clk)");
            co_await vlSelfRef.__VtrigSched_habc4c356__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge sync_fifo_tb.clk)", 
                                                                 "tb_verilog/sync_fifo_tb.v", 
                                                                 192);
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "tb_verilog/sync_fifo_tb.v", 
                                                 193);
            vlSelfRef.sync_fifo_tb__DOT__wr_en = 0U;
            __Vtask_sync_fifo_tb__DOT__test_full_condition__2__unnamedblk1__DOT__i 
                = ((IData)(1U) + __Vtask_sync_fifo_tb__DOT__test_full_condition__2__unnamedblk1__DOT__i);
            ++(vlSymsp->__Vcoverage[177]);
        }
        if (VL_LIKELY(((0x10U == (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count))))) {
            ++(vlSymsp->__Vcoverage[179]);
        } else {
            VL_WRITEF_NX("  ERROR: FIFO not full after 16 writes\n",0);
            vlSelfRef.sync_fifo_tb__DOT__test_fail_count 
                = ((IData)(1U) + vlSelfRef.sync_fifo_tb__DOT__test_fail_count);
            goto __Vlabel1;
        }
        Vsync_fifo_tb___024root____VbeforeTrig_habc4c356__0(vlSelf, 
                                                            "@(posedge sync_fifo_tb.clk)");
        co_await vlSelfRef.__VtrigSched_habc4c356__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge sync_fifo_tb.clk)", 
                                                             "tb_verilog/sync_fifo_tb.v", 
                                                             205);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "tb_verilog/sync_fifo_tb.v", 
                                             206);
        vlSelfRef.sync_fifo_tb__DOT__wr_en = 1U;
        vlSelfRef.sync_fifo_tb__DOT__wr_data = 0xdeadbeefU;
        Vsync_fifo_tb___024root____VbeforeTrig_habc4c356__0(vlSelf, 
                                                            "@(posedge sync_fifo_tb.clk)");
        co_await vlSelfRef.__VtrigSched_habc4c356__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge sync_fifo_tb.clk)", 
                                                             "tb_verilog/sync_fifo_tb.v", 
                                                             209);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "tb_verilog/sync_fifo_tb.v", 
                                             210);
        vlSelfRef.sync_fifo_tb__DOT__wr_en = 0U;
        __Vtask_sync_fifo_tb__DOT__test_full_condition__2__unnamedblk2__DOT__i = 0;
        __Vtask_sync_fifo_tb__DOT__test_full_condition__2__unnamedblk2__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00000010U, __Vtask_sync_fifo_tb__DOT__test_full_condition__2__unnamedblk2__DOT__i)) {
            Vsync_fifo_tb___024root____VbeforeTrig_habc4c356__0(vlSelf, 
                                                                "@(posedge sync_fifo_tb.clk)");
            co_await vlSelfRef.__VtrigSched_habc4c356__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge sync_fifo_tb.clk)", 
                                                                 "tb_verilog/sync_fifo_tb.v", 
                                                                 215);
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "tb_verilog/sync_fifo_tb.v", 
                                                 216);
            vlSelfRef.sync_fifo_tb__DOT__rd_en = 1U;
            Vsync_fifo_tb___024root____VbeforeTrig_habc4c356__0(vlSelf, 
                                                                "@(posedge sync_fifo_tb.clk)");
            co_await vlSelfRef.__VtrigSched_habc4c356__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge sync_fifo_tb.clk)", 
                                                                 "tb_verilog/sync_fifo_tb.v", 
                                                                 218);
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "tb_verilog/sync_fifo_tb.v", 
                                                 219);
            vlSelfRef.sync_fifo_tb__DOT__rd_en = 0U;
            if (VL_UNLIKELY(((vlSelfRef.sync_fifo_tb__DOT__rd_data 
                              != ((IData)(1U) + __Vtask_sync_fifo_tb__DOT__test_full_condition__2__unnamedblk2__DOT__i))))) {
                VL_WRITEF_NX("  ERROR: Read data mismatch at position %0d. Expected %0d, got %0#\n",0,
                             32,__Vtask_sync_fifo_tb__DOT__test_full_condition__2__unnamedblk2__DOT__i,
                             32,((IData)(1U) + __Vtask_sync_fifo_tb__DOT__test_full_condition__2__unnamedblk2__DOT__i),
                             32,vlSelfRef.sync_fifo_tb__DOT__rd_data);
                vlSelfRef.sync_fifo_tb__DOT__test_fail_count 
                    = ((IData)(1U) + vlSelfRef.sync_fifo_tb__DOT__test_fail_count);
                goto __Vlabel1;
            } else {
                ++(vlSymsp->__Vcoverage[181]);
            }
            __Vtask_sync_fifo_tb__DOT__test_full_condition__2__unnamedblk2__DOT__i 
                = ((IData)(1U) + __Vtask_sync_fifo_tb__DOT__test_full_condition__2__unnamedblk2__DOT__i);
            ++(vlSymsp->__Vcoverage[182]);
        }
        if (VL_LIKELY(((0U == (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count))))) {
            ++(vlSymsp->__Vcoverage[184]);
        } else {
            VL_WRITEF_NX("  ERROR: FIFO not empty after reading all data\n",0);
            vlSelfRef.sync_fifo_tb__DOT__test_fail_count 
                = ((IData)(1U) + vlSelfRef.sync_fifo_tb__DOT__test_fail_count);
            goto __Vlabel1;
        }
        VL_WRITEF_NX("  PASS: Full condition test\n",0);
        vlSelfRef.sync_fifo_tb__DOT__test_pass_count 
            = ((IData)(1U) + vlSelfRef.sync_fifo_tb__DOT__test_pass_count);
        __Vlabel1: ;
    }
    ++(vlSymsp->__Vcoverage[185]);
    {
        vlSelfRef.sync_fifo_tb__DOT__test_total_count 
            = ((IData)(1U) + vlSelfRef.sync_fifo_tb__DOT__test_total_count);
        VL_WRITEF_NX("[%0t] Test: Empty condition\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        if (VL_LIKELY(((0U == (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count))))) {
            ++(vlSymsp->__Vcoverage[187]);
        } else {
            VL_WRITEF_NX("  ERROR: FIFO not empty at start of test\n",0);
            vlSelfRef.sync_fifo_tb__DOT__test_fail_count 
                = ((IData)(1U) + vlSelfRef.sync_fifo_tb__DOT__test_fail_count);
            goto __Vlabel2;
        }
        Vsync_fifo_tb___024root____VbeforeTrig_habc4c356__0(vlSelf, 
                                                            "@(posedge sync_fifo_tb.clk)");
        co_await vlSelfRef.__VtrigSched_habc4c356__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge sync_fifo_tb.clk)", 
                                                             "tb_verilog/sync_fifo_tb.v", 
                                                             254);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "tb_verilog/sync_fifo_tb.v", 
                                             255);
        vlSelfRef.sync_fifo_tb__DOT__rd_en = 1U;
        Vsync_fifo_tb___024root____VbeforeTrig_habc4c356__0(vlSelf, 
                                                            "@(posedge sync_fifo_tb.clk)");
        co_await vlSelfRef.__VtrigSched_habc4c356__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge sync_fifo_tb.clk)", 
                                                             "tb_verilog/sync_fifo_tb.v", 
                                                             257);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "tb_verilog/sync_fifo_tb.v", 
                                             258);
        vlSelfRef.sync_fifo_tb__DOT__rd_en = 0U;
        Vsync_fifo_tb___024root____VbeforeTrig_habc4c356__0(vlSelf, 
                                                            "@(posedge sync_fifo_tb.clk)");
        co_await vlSelfRef.__VtrigSched_habc4c356__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge sync_fifo_tb.clk)", 
                                                             "tb_verilog/sync_fifo_tb.v", 
                                                             262);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "tb_verilog/sync_fifo_tb.v", 
                                             263);
        vlSelfRef.sync_fifo_tb__DOT__wr_en = 1U;
        vlSelfRef.sync_fifo_tb__DOT__wr_data = 0x12345678U;
        Vsync_fifo_tb___024root____VbeforeTrig_habc4c356__0(vlSelf, 
                                                            "@(posedge sync_fifo_tb.clk)");
        co_await vlSelfRef.__VtrigSched_habc4c356__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge sync_fifo_tb.clk)", 
                                                             "tb_verilog/sync_fifo_tb.v", 
                                                             266);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "tb_verilog/sync_fifo_tb.v", 
                                             267);
        vlSelfRef.sync_fifo_tb__DOT__wr_en = 0U;
        Vsync_fifo_tb___024root____VbeforeTrig_habc4c356__0(vlSelf, 
                                                            "@(posedge sync_fifo_tb.clk)");
        co_await vlSelfRef.__VtrigSched_habc4c356__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge sync_fifo_tb.clk)", 
                                                             "tb_verilog/sync_fifo_tb.v", 
                                                             270);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "tb_verilog/sync_fifo_tb.v", 
                                             271);
        vlSelfRef.sync_fifo_tb__DOT__rd_en = 1U;
        Vsync_fifo_tb___024root____VbeforeTrig_habc4c356__0(vlSelf, 
                                                            "@(posedge sync_fifo_tb.clk)");
        co_await vlSelfRef.__VtrigSched_habc4c356__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge sync_fifo_tb.clk)", 
                                                             "tb_verilog/sync_fifo_tb.v", 
                                                             273);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "tb_verilog/sync_fifo_tb.v", 
                                             274);
        vlSelfRef.sync_fifo_tb__DOT__rd_en = 0U;
        if (VL_UNLIKELY(((0x12345678U != vlSelfRef.sync_fifo_tb__DOT__rd_data)))) {
            VL_WRITEF_NX("  ERROR: Data mismatch after empty test\n",0);
            vlSelfRef.sync_fifo_tb__DOT__test_fail_count 
                = ((IData)(1U) + vlSelfRef.sync_fifo_tb__DOT__test_fail_count);
            goto __Vlabel2;
        } else {
            ++(vlSymsp->__Vcoverage[189]);
        }
        VL_WRITEF_NX("  PASS: Empty condition test\n",0);
        vlSelfRef.sync_fifo_tb__DOT__test_pass_count 
            = ((IData)(1U) + vlSelfRef.sync_fifo_tb__DOT__test_pass_count);
        __Vlabel2: ;
    }
    ++(vlSymsp->__Vcoverage[190]);
    VL_WRITEF_NX("=========================================\nTest Summary:\n  Total tests: %0d\n  Passed: %0d\n  Failed: %0d\n",0,
                 32,vlSelfRef.sync_fifo_tb__DOT__test_total_count,
                 32,vlSelfRef.sync_fifo_tb__DOT__test_pass_count,
                 32,vlSelfRef.sync_fifo_tb__DOT__test_fail_count);
    if ((0U == vlSelfRef.sync_fifo_tb__DOT__test_fail_count)) {
        VL_WRITEF_NX("ALL TESTS PASSED!\n",0);
        ++(vlSymsp->__Vcoverage[163]);
    } else {
        VL_WRITEF_NX("SOME TESTS FAILED!\n",0);
        ++(vlSymsp->__Vcoverage[164]);
    }
    VL_WRITEF_NX("=========================================\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000186a0ULL, 
                                         nullptr, "tb_verilog/sync_fifo_tb.v", 
                                         108);
    VL_FINISH_MT("tb_verilog/sync_fifo_tb.v", 109, "");
    ++(vlSymsp->__Vcoverage[165]);
    co_return;
}

VlCoroutine Vsync_fifo_tb___024root___eval_initial__TOP__Vtiming__1(Vsync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vsync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb_verilog/sync_fifo_tb.v", 
                                             55);
        vlSelfRef.sync_fifo_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.sync_fifo_tb__DOT__clk)));
        if ((1U & (~ (IData)(vlSelfRef.sync_fifo_tb__DOT__clk)))) {
            ++(vlSymsp->__Vcoverage[156]);
        }
        if (vlSelfRef.sync_fifo_tb__DOT__clk) {
            ++(vlSymsp->__Vcoverage[157]);
        }
        ++(vlSymsp->__Vcoverage[158]);
    }
    co_return;
}

void Vsync_fifo_tb___024root___eval_triggers_vec__act(Vsync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root___eval_triggers_vec__act\n"); );
    Vsync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.sync_fifo_tb__DOT__clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sync_fifo_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__sync_fifo_tb__DOT__clk__0 
        = vlSelfRef.sync_fifo_tb__DOT__clk;
}

bool Vsync_fifo_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vsync_fifo_tb___024root___act_sequent__TOP__0(Vsync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root___act_sequent__TOP__0\n"); );
    Vsync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.sync_fifo_tb__DOT__clk) 
         ^ (IData)(vlSelfRef.sync_fifo_tb__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 0, vlSelfRef.sync_fifo_tb__DOT__clk, vlSelfRef.sync_fifo_tb__DOT____Vtogcov__clk);
        vlSelfRef.sync_fifo_tb__DOT____Vtogcov__clk 
            = vlSelfRef.sync_fifo_tb__DOT__clk;
    }
}

void Vsync_fifo_tb___024root___act_comb__TOP__0(Vsync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root___act_comb__TOP__0\n"); );
    Vsync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ sync_fifo_tb__DOT__dut__DOT____VdfgExtracted_hc81cc6a2__0;
    sync_fifo_tb__DOT__dut__DOT____VdfgExtracted_hc81cc6a2__0 = 0;
    CData/*0:0*/ sync_fifo_tb__DOT__dut__DOT____VdfgExtracted_h491041fb__0;
    sync_fifo_tb__DOT__dut__DOT____VdfgExtracted_h491041fb__0 = 0;
    // Body
    if (((IData)(vlSelfRef.sync_fifo_tb__DOT__rst) 
         ^ (IData)(vlSelfRef.sync_fifo_tb__DOT____Vtogcov__rst))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3, vlSelfRef.sync_fifo_tb__DOT__rst, vlSelfRef.sync_fifo_tb__DOT____Vtogcov__rst);
        vlSelfRef.sync_fifo_tb__DOT____Vtogcov__rst 
            = vlSelfRef.sync_fifo_tb__DOT__rst;
    }
    if (((IData)(vlSelfRef.sync_fifo_tb__DOT__wr_en) 
         ^ (IData)(vlSelfRef.sync_fifo_tb__DOT____Vtogcov__wr_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 6, vlSelfRef.sync_fifo_tb__DOT__wr_en, vlSelfRef.sync_fifo_tb__DOT____Vtogcov__wr_en);
        vlSelfRef.sync_fifo_tb__DOT____Vtogcov__wr_en 
            = vlSelfRef.sync_fifo_tb__DOT__wr_en;
    }
    if ((vlSelfRef.sync_fifo_tb__DOT__wr_data ^ vlSelfRef.sync_fifo_tb__DOT____Vtogcov__wr_data)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 8, vlSelfRef.sync_fifo_tb__DOT__wr_data, vlSelfRef.sync_fifo_tb__DOT____Vtogcov__wr_data);
        vlSelfRef.sync_fifo_tb__DOT____Vtogcov__wr_data 
            = vlSelfRef.sync_fifo_tb__DOT__wr_data;
    }
    if (((IData)(vlSelfRef.sync_fifo_tb__DOT__rd_en) 
         ^ (IData)(vlSelfRef.sync_fifo_tb__DOT____Vtogcov__rd_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 76, vlSelfRef.sync_fifo_tb__DOT__rd_en, vlSelfRef.sync_fifo_tb__DOT____Vtogcov__rd_en);
        vlSelfRef.sync_fifo_tb__DOT____Vtogcov__rd_en 
            = vlSelfRef.sync_fifo_tb__DOT__rd_en;
    }
    vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_en_valid 
        = ((0x10U != (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count)) 
           & (IData)(vlSelfRef.sync_fifo_tb__DOT__wr_en));
    vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_en_valid 
        = ((0U != (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count)) 
           & (IData)(vlSelfRef.sync_fifo_tb__DOT__rd_en));
    if (((IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_en_valid) 
         ^ (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__wr_en_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 244, vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_en_valid, vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__wr_en_valid);
        vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__wr_en_valid 
            = vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_en_valid;
    }
    if (((IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_en_valid) 
         ^ (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__rd_en_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 246, vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_en_valid, vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__rd_en_valid);
        vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__rd_en_valid 
            = vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_en_valid;
    }
    vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_ptr_next 
        = vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_ptr;
    vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_ptr_next 
        = vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_ptr;
    if (vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_en_valid) {
        if ((0x0fU == (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_ptr))) {
            vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_ptr_next = 0U;
            ++(vlSymsp->__Vcoverage[254]);
        } else {
            vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_ptr_next 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_ptr)));
            ++(vlSymsp->__Vcoverage[255]);
        }
        ++(vlSymsp->__Vcoverage[256]);
    } else {
        ++(vlSymsp->__Vcoverage[257]);
    }
    if (vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_en_valid) {
        if ((0x0fU == (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_ptr))) {
            vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_ptr_next = 0U;
            ++(vlSymsp->__Vcoverage[258]);
        } else {
            vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_ptr_next 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_ptr)));
            ++(vlSymsp->__Vcoverage[259]);
        }
        ++(vlSymsp->__Vcoverage[260]);
    } else {
        ++(vlSymsp->__Vcoverage[261]);
    }
    ++(vlSymsp->__Vcoverage[262]);
    sync_fifo_tb__DOT__dut__DOT____VdfgExtracted_hc81cc6a2__0 
        = ((~ (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_en_valid)) 
           & (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_en_valid));
    sync_fifo_tb__DOT__dut__DOT____VdfgExtracted_h491041fb__0 
        = ((~ (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_en_valid)) 
           & (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_en_valid));
    if (((IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_ptr_next) 
         ^ (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__wr_ptr_next))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 218, vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_ptr_next, vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__wr_ptr_next);
        vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__wr_ptr_next 
            = vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_ptr_next;
    }
    if (((IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_ptr_next) 
         ^ (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__rd_ptr_next))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 226, vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_ptr_next, vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__rd_ptr_next);
        vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__rd_ptr_next 
            = vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_ptr_next;
    }
    vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count_next 
        = vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count;
    if (sync_fifo_tb__DOT__dut__DOT____VdfgExtracted_hc81cc6a2__0) {
        vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count_next 
            = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count)));
        ++(vlSymsp->__Vcoverage[268]);
    } else {
        if (sync_fifo_tb__DOT__dut__DOT____VdfgExtracted_h491041fb__0) {
            vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count_next 
                = (0x0000001fU & ((IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count) 
                                  - (IData)(1U)));
            ++(vlSymsp->__Vcoverage[263]);
        } else {
            ++(vlSymsp->__Vcoverage[264]);
        }
        if (sync_fifo_tb__DOT__dut__DOT____VdfgExtracted_h491041fb__0) {
            ++(vlSymsp->__Vcoverage[265]);
        }
        if ((1U & (~ (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_en_valid)))) {
            ++(vlSymsp->__Vcoverage[266]);
        }
        if (vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_en_valid) {
            ++(vlSymsp->__Vcoverage[267]);
        }
    }
    if (sync_fifo_tb__DOT__dut__DOT____VdfgExtracted_hc81cc6a2__0) {
        ++(vlSymsp->__Vcoverage[269]);
    }
    if (vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_en_valid) {
        ++(vlSymsp->__Vcoverage[270]);
    }
    if ((1U & (~ (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_en_valid)))) {
        ++(vlSymsp->__Vcoverage[271]);
    }
    ++(vlSymsp->__Vcoverage[272]);
    if (((IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count_next) 
         ^ (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__fifo_count_next))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 234, vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count_next, vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__fifo_count_next);
        vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__fifo_count_next 
            = vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count_next;
    }
}

void Vsync_fifo_tb___024root___eval_act(Vsync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root___eval_act\n"); );
    Vsync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        Vsync_fifo_tb___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        Vsync_fifo_tb___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

void Vsync_fifo_tb___024root___nba_sequent__TOP__0(Vsync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root___nba_sequent__TOP__0\n"); );
    Vsync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory__v0;
    __VdlyVal__sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory__v0 = 0;
    CData/*3:0*/ __VdlyDim0__sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory__v0;
    __VdlyDim0__sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory__v0 = 0;
    CData/*0:0*/ __VdlySet__sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory__v0;
    __VdlySet__sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory__v0 = 0;
    // Body
    ++(vlSymsp->__Vcoverage[253]);
    __VdlySet__sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory__v0 = 0U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.sync_fifo_tb__DOT__wr_en) 
                      & (0x10U != (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count)))))) {
        VL_WRITEF_NX("[%0t] WRITE: data=0x%x, count=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.sync_fifo_tb__DOT__wr_data,
                     5,(IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count));
        ++(vlSymsp->__Vcoverage[191]);
    } else {
        ++(vlSymsp->__Vcoverage[192]);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.sync_fifo_tb__DOT__rd_en) 
                      & (0U != (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count)))))) {
        VL_WRITEF_NX("[%0t] READ: data=0x%x, count=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.sync_fifo_tb__DOT__rd_data,
                     5,(IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count));
        ++(vlSymsp->__Vcoverage[196]);
    } else {
        ++(vlSymsp->__Vcoverage[197]);
    }
    if (((IData)(vlSelfRef.sync_fifo_tb__DOT__wr_en) 
         & (0x10U != (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count)))) {
        ++(vlSymsp->__Vcoverage[193]);
    }
    if ((0x10U == (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count))) {
        ++(vlSymsp->__Vcoverage[194]);
    }
    if ((1U & (~ (IData)(vlSelfRef.sync_fifo_tb__DOT__wr_en)))) {
        ++(vlSymsp->__Vcoverage[195]);
    }
    if (((IData)(vlSelfRef.sync_fifo_tb__DOT__rd_en) 
         & (0U != (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count)))) {
        ++(vlSymsp->__Vcoverage[198]);
    }
    if ((0U == (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count))) {
        ++(vlSymsp->__Vcoverage[199]);
    }
    if ((1U & (~ (IData)(vlSelfRef.sync_fifo_tb__DOT__rd_en)))) {
        ++(vlSymsp->__Vcoverage[200]);
    }
    ++(vlSymsp->__Vcoverage[201]);
    if (vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_en_valid) {
        ++(vlSymsp->__Vcoverage[250]);
        __VdlyVal__sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory__v0 
            = vlSelfRef.sync_fifo_tb__DOT__wr_data;
        __VdlyDim0__sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory__v0 
            = vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_ptr;
        __VdlySet__sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory__v0 = 1U;
    } else {
        ++(vlSymsp->__Vcoverage[251]);
    }
    ++(vlSymsp->__Vcoverage[252]);
    vlSelfRef.sync_fifo_tb__DOT__rd_data = vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory
        [vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_ptr];
    if (__VdlySet__sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory__v0) {
        vlSelfRef.sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory[__VdlyDim0__sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory__v0] 
            = __VdlyVal__sync_fifo_tb__DOT__dut__DOT__genblk1__DOT__memory__v0;
    }
    if ((vlSelfRef.sync_fifo_tb__DOT__rd_data ^ vlSelfRef.sync_fifo_tb__DOT____Vtogcov__rd_data)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 78, vlSelfRef.sync_fifo_tb__DOT__rd_data, vlSelfRef.sync_fifo_tb__DOT____Vtogcov__rd_data);
        vlSelfRef.sync_fifo_tb__DOT____Vtogcov__rd_data 
            = vlSelfRef.sync_fifo_tb__DOT__rd_data;
    }
    if (vlSelfRef.sync_fifo_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_ptr = 0U;
        vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_ptr = 0U;
        vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_ptr 
            = vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_ptr_next;
        vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_ptr 
            = vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_ptr_next;
        vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count 
            = vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count_next;
    }
    ++(vlSymsp->__Vcoverage[275]);
    if (((IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_ptr) 
         ^ (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__wr_ptr))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 202, vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_ptr, vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__wr_ptr);
        vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__wr_ptr 
            = vlSelfRef.sync_fifo_tb__DOT__dut__DOT__wr_ptr;
    }
    if (((IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_ptr) 
         ^ (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__rd_ptr))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 210, vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_ptr, vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__rd_ptr);
        vlSelfRef.sync_fifo_tb__DOT__dut__DOT____Vtogcov__rd_ptr 
            = vlSelfRef.sync_fifo_tb__DOT__dut__DOT__rd_ptr;
    }
    if (((0x10U == (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count)) 
         ^ (IData)(vlSelfRef.sync_fifo_tb__DOT____Vtogcov__full))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 72, 
                               (0x10U == (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count)), vlSelfRef.sync_fifo_tb__DOT____Vtogcov__full);
        vlSelfRef.sync_fifo_tb__DOT____Vtogcov__full 
            = (0x10U == (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count));
    }
    if (((0x0cU <= (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count)) 
         ^ (IData)(vlSelfRef.sync_fifo_tb__DOT____Vtogcov__almost_full))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 74, 
                               (0x0cU <= (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count)), vlSelfRef.sync_fifo_tb__DOT____Vtogcov__almost_full);
        vlSelfRef.sync_fifo_tb__DOT____Vtogcov__almost_full 
            = (0x0cU <= (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count));
    }
    if (((0U == (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count)) 
         ^ (IData)(vlSelfRef.sync_fifo_tb__DOT____Vtogcov__empty))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 142, 
                               (0U == (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count)), vlSelfRef.sync_fifo_tb__DOT____Vtogcov__empty);
        vlSelfRef.sync_fifo_tb__DOT____Vtogcov__empty 
            = (0U == (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count));
    }
    if (((4U >= (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count)) 
         ^ (IData)(vlSelfRef.sync_fifo_tb__DOT____Vtogcov__almost_empty))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 144, 
                               (4U >= (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count)), vlSelfRef.sync_fifo_tb__DOT____Vtogcov__almost_empty);
        vlSelfRef.sync_fifo_tb__DOT____Vtogcov__almost_empty 
            = (4U >= (IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count));
    }
    if (((IData)(vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count) 
         ^ (IData)(vlSelfRef.sync_fifo_tb__DOT____Vtogcov__wr_count))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 146, vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count, vlSelfRef.sync_fifo_tb__DOT____Vtogcov__wr_count);
        vlSelfRef.sync_fifo_tb__DOT____Vtogcov__wr_count 
            = vlSelfRef.sync_fifo_tb__DOT__dut__DOT__fifo_count;
    }
}

void Vsync_fifo_tb___024root___eval_nba(Vsync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root___eval_nba\n"); );
    Vsync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsync_fifo_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsync_fifo_tb___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsync_fifo_tb___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
}

void Vsync_fifo_tb___024root___timing_ready(Vsync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root___timing_ready\n"); );
    Vsync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_habc4c356__0.ready("@(posedge sync_fifo_tb.clk)");
    }
}

void Vsync_fifo_tb___024root___timing_resume(Vsync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root___timing_resume\n"); );
    Vsync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_habc4c356__0.moveToResumeQueue(
                                                          "@(posedge sync_fifo_tb.clk)");
    vlSelfRef.__VtrigSched_habc4c356__0.resume("@(posedge sync_fifo_tb.clk)");
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vsync_fifo_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsync_fifo_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vsync_fifo_tb___024root___eval_phase__act(Vsync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root___eval_phase__act\n"); );
    Vsync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vsync_fifo_tb___024root___eval_triggers_vec__act(vlSelf);
    Vsync_fifo_tb___024root___timing_ready(vlSelf);
    Vsync_fifo_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsync_fifo_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vsync_fifo_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vsync_fifo_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vsync_fifo_tb___024root___timing_resume(vlSelf);
        Vsync_fifo_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsync_fifo_tb___024root___eval_phase__inact(Vsync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root___eval_phase__inact\n"); );
    Vsync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb_verilog/sync_fifo_tb.v", 5, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vsync_fifo_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vsync_fifo_tb___024root___eval_phase__nba(Vsync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root___eval_phase__nba\n"); );
    Vsync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vsync_fifo_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vsync_fifo_tb___024root___eval_nba(vlSelf);
        Vsync_fifo_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vsync_fifo_tb___024root___eval(Vsync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root___eval\n"); );
    Vsync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vsync_fifo_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb_verilog/sync_fifo_tb.v", 5, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb_verilog/sync_fifo_tb.v", 5, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vsync_fifo_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb_verilog/sync_fifo_tb.v", 5, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vsync_fifo_tb___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vsync_fifo_tb___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vsync_fifo_tb___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vsync_fifo_tb___024root____VbeforeTrig_habc4c356__0(Vsync_fifo_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root____VbeforeTrig_habc4c356__0\n"); );
    Vsync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.sync_fifo_tb__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sync_fifo_tb__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__sync_fifo_tb__DOT__clk__0 
        = vlSelfRef.sync_fifo_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_habc4c356__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_habc4c356__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_habc4c356__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_habc4c356__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_habc4c356__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_habc4c356__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_habc4c356__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_habc4c356__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_habc4c356__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_habc4c356__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_habc4c356__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_habc4c356__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_habc4c356__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_habc4c356__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_habc4c356__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_habc4c356__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_habc4c356__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_habc4c356__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vsync_fifo_tb___024root___eval_debug_assertions(Vsync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_fifo_tb___024root___eval_debug_assertions\n"); );
    Vsync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
