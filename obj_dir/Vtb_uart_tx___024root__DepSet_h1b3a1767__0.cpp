// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_uart_tx.h for the primary calling header

#include "Vtb_uart_tx__pch.h"
#include "Vtb_uart_tx__Syms.h"
#include "Vtb_uart_tx___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_uart_tx___024root___eval_initial__TOP__Vtiming__0(Vtb_uart_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_tx___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_uart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x77617665U;
    __Vtemp_1[2U] = 0x6172745fU;
    __Vtemp_1[3U] = 0x75U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_uart_tx__DOT__clk = 0U;
    vlSelfRef.tb_uart_tx__DOT__rst_n = 0U;
    vlSelfRef.tb_uart_tx__DOT__s_tick = 0U;
    vlSelfRef.tb_uart_tx__DOT__tx_start = 0U;
    vlSelfRef.tb_uart_tx__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x14ULL, nullptr, 
                                         "tb/tb_uart_tx.sv", 
                                         51);
    vlSelfRef.tb_uart_tx__DOT__rst_n = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x14ULL, nullptr, 
                                         "tb/tb_uart_tx.sv", 
                                         52);
    VL_WRITEF_NX("TEST 1: Sending 0x55\n",0);
    co_await vlSelfRef.__VtrigSched_h33c223cb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_tx.clk)", 
                                                         "tb/tb_uart_tx.sv", 
                                                         56);
    vlSelfRef.tb_uart_tx__DOT__tx_data = 0x55U;
    vlSelfRef.tb_uart_tx__DOT__tx_start = 1U;
    co_await vlSelfRef.__VtrigSched_h33c223cb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_tx.clk)", 
                                                         "tb/tb_uart_tx.sv", 
                                                         59);
    vlSelfRef.tb_uart_tx__DOT__tx_start = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_uart_tx__DOT__tx_done)))) {
        co_await vlSelfRef.__VtrigSched_h09f77cee__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_uart_tx.tx_done)", 
                                                             "tb/tb_uart_tx.sv", 
                                                             62);
    }
    VL_WRITEF_NX("TEST 1: Transmission Complete\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "tb/tb_uart_tx.sv", 
                                         65);
    VL_WRITEF_NX("TEST 2: Sending 0xAB\n",0);
    co_await vlSelfRef.__VtrigSched_h33c223cb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_tx.clk)", 
                                                         "tb/tb_uart_tx.sv", 
                                                         69);
    vlSelfRef.tb_uart_tx__DOT__tx_data = 0xabU;
    vlSelfRef.tb_uart_tx__DOT__tx_start = 1U;
    co_await vlSelfRef.__VtrigSched_h33c223cb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_tx.clk)", 
                                                         "tb/tb_uart_tx.sv", 
                                                         72);
    vlSelfRef.tb_uart_tx__DOT__tx_start = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_uart_tx__DOT__tx_done)))) {
        co_await vlSelfRef.__VtrigSched_h09f77cee__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_uart_tx.tx_done)", 
                                                             "tb/tb_uart_tx.sv", 
                                                             75);
    }
    VL_WRITEF_NX("TEST 2: Transmission Complete\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "tb/tb_uart_tx.sv", 
                                         78);
    VL_FINISH_MT("tb/tb_uart_tx.sv", 79, "");
}

VL_INLINE_OPT VlCoroutine Vtb_uart_tx___024root___eval_initial__TOP__Vtiming__1(Vtb_uart_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_tx___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_uart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/tb_uart_tx.sv", 
                                             17);
        vlSelfRef.tb_uart_tx__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_uart_tx__DOT__clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_uart_tx___024root___dump_triggers__act(Vtb_uart_tx___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_uart_tx___024root___eval_triggers__act(Vtb_uart_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_tx___024root___eval_triggers__act\n"); );
    Vtb_uart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_uart_tx__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_uart_tx__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.tb_uart_tx__DOT__rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_uart_tx__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.setBit(3U, ((IData)(vlSelfRef.tb_uart_tx__DOT__tx_done) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_uart_tx__DOT__tx_done__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_uart_tx__DOT__clk__0 
        = vlSelfRef.tb_uart_tx__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_uart_tx__DOT__rst_n__0 
        = vlSelfRef.tb_uart_tx__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_uart_tx__DOT__tx_done__0 
        = vlSelfRef.tb_uart_tx__DOT__tx_done;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(3U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_uart_tx___024root___dump_triggers__act(vlSelf);
    }
#endif
}
