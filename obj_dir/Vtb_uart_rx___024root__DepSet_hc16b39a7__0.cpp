// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_uart_rx.h for the primary calling header

#include "Vtb_uart_rx__pch.h"
#include "Vtb_uart_rx___024root.h"

VlCoroutine Vtb_uart_rx___024root___eval_initial__TOP__Vtiming__0(Vtb_uart_rx___024root* vlSelf);
VlCoroutine Vtb_uart_rx___024root___eval_initial__TOP__Vtiming__1(Vtb_uart_rx___024root* vlSelf);
VlCoroutine Vtb_uart_rx___024root___eval_initial__TOP__Vtiming__2(Vtb_uart_rx___024root* vlSelf);

void Vtb_uart_rx___024root___eval_initial(Vtb_uart_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root___eval_initial\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_uart_rx___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_uart_rx___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_uart_rx___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_uart_rx___024root___eval_initial__TOP__Vtiming__0(Vtb_uart_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_uart_rx__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/tb_uart_rx.sv", 
                                             20);
        vlSelfRef.tb_uart_rx__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_uart_rx__DOT__clk)));
    }
}

VlCoroutine Vtb_uart_rx___024root___eval_initial__TOP__Vtiming__1__0(Vtb_uart_rx___024root* vlSelf);
VlCoroutine Vtb_uart_rx___024root___eval_initial__TOP__Vtiming__1__1(Vtb_uart_rx___024root* vlSelf);

VL_INLINE_OPT VlCoroutine Vtb_uart_rx___024root___eval_initial__TOP__Vtiming__1(Vtb_uart_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await Vtb_uart_rx___024root___eval_initial__TOP__Vtiming__1__0(vlSelf);
    co_await Vtb_uart_rx___024root___eval_initial__TOP__Vtiming__1__1(vlSelf);
}

VlCoroutine Vtb_uart_rx___024root___eval_initial__TOP__Vtiming__1__1(Vtb_uart_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root___eval_initial__TOP__Vtiming__1__1\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_uart_rx__DOT__unnamedblk1_7__DOT____Vrepeat6;
    tb_uart_rx__DOT__unnamedblk1_7__DOT____Vrepeat6 = 0;
    // Body
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         54);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x1dU;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         54);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x1cU;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         54);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x1bU;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         54);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x1aU;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         54);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x19U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         54);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x18U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         54);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x17U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         54);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x16U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         54);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x15U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         54);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x14U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         54);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x13U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         54);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x12U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         54);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x11U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         54);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x10U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         54);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0xfU;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         54);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0xeU;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         54);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0xdU;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         54);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0xcU;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         54);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0xbU;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         54);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0xaU;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         54);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_2__DOT____Vrepeat1 = 9U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         54);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_2__DOT____Vrepeat1 = 8U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         54);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_2__DOT____Vrepeat1 = 7U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         54);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_2__DOT____Vrepeat1 = 6U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         54);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_2__DOT____Vrepeat1 = 5U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         54);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_2__DOT____Vrepeat1 = 4U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         54);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_2__DOT____Vrepeat1 = 3U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         54);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         54);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_2__DOT____Vrepeat1 = 1U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         54);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0U;
    vlSelfRef.tb_uart_rx__DOT__sendbyte__Vstatic__i = 8U;
    vlSelfRef.tb_uart_rx__DOT__rx = 1U;
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x40U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x3fU;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x3eU;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x3dU;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x3cU;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x3bU;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x3aU;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x39U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x38U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x37U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x36U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x35U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x34U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x33U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x32U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x31U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x30U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x2fU;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x2eU;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x2dU;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x2cU;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x2bU;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x2aU;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x29U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x28U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x27U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x26U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x25U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x24U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x23U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x22U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x21U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x20U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x1fU;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x1eU;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x1dU;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x1cU;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x1bU;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x1aU;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x19U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x18U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x17U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x16U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x15U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x14U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x13U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x12U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x11U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x10U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0xfU;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0xeU;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0xdU;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0xcU;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0xbU;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0xaU;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 9U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 8U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 7U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 6U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 5U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 4U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 3U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 2U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 1U;
    co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_uart_rx.clk)", 
                                                         "tb/tb_uart_rx.sv", 
                                                         58);
    vlSelfRef.__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0U;
    tb_uart_rx__DOT__unnamedblk1_7__DOT____Vrepeat6 = 0x64U;
    while (VL_LTS_III(32, 0U, tb_uart_rx__DOT__unnamedblk1_7__DOT____Vrepeat6)) {
        co_await vlSelfRef.__VtrigSched_he70091b4__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_uart_rx.clk)", 
                                                             "tb/tb_uart_rx.sv", 
                                                             92);
        tb_uart_rx__DOT__unnamedblk1_7__DOT____Vrepeat6 
            = (tb_uart_rx__DOT__unnamedblk1_7__DOT____Vrepeat6 
               - (IData)(1U));
    }
    VL_FINISH_MT("tb/tb_uart_rx.sv", 93, "");
}

VL_INLINE_OPT VlCoroutine Vtb_uart_rx___024root___eval_initial__TOP__Vtiming__2(Vtb_uart_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0xf4240ULL, 
                                         nullptr, "tb/tb_uart_rx.sv", 
                                         98);
    VL_WRITEF_NX("ERROR: Simulation timed out! Signals got stuck.\n",0);
    VL_FINISH_MT("tb/tb_uart_rx.sv", 100, "");
}

void Vtb_uart_rx___024root___act_sequent__TOP__0(Vtb_uart_rx___024root* vlSelf);

void Vtb_uart_rx___024root___eval_act(Vtb_uart_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root___eval_act\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_uart_rx___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_uart_rx___024root___act_sequent__TOP__0(Vtb_uart_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root___act_sequent__TOP__0\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_rx_done = 0U;
    vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_count 
        = vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_count;
    vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_bit_count 
        = vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_bit_count;
    vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_data_reg 
        = vlSelfRef.tb_uart_rx__DOT__dut__DOT__data_reg;
    vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_state 
        = vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_state;
    if ((2U & (IData)(vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_state))) {
        if ((1U & (IData)(vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_state))) {
            if (vlSelfRef.tb_uart_rx__DOT__s_tick) {
                if ((0xfU == (IData)(vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_count))) {
                    if (vlSelfRef.tb_uart_rx__DOT__rx) {
                        vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_rx_done = 1U;
                    }
                    vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_state = 0U;
                } else {
                    vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_state = 3U;
                }
                if ((0xfU != (IData)(vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_count))) {
                    vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_count 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_count)));
                }
            }
        } else if (vlSelfRef.tb_uart_rx__DOT__s_tick) {
            if ((0xfU == (IData)(vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_count))) {
                vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_count = 0U;
                vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_state 
                    = ((7U == (IData)(vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_bit_count))
                        ? 3U : 2U);
            } else {
                vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_count 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_count)));
                vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_state = 2U;
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_state)))) {
            if (vlSelfRef.tb_uart_rx__DOT__s_tick) {
                if ((0xfU == (IData)(vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_count))) {
                    if ((7U != (IData)(vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_bit_count))) {
                        vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_bit_count 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_bit_count)));
                    }
                    vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_data_reg 
                        = (((IData)(vlSelfRef.tb_uart_rx__DOT__rx) 
                            << 7U) | (0x7fU & ((IData)(vlSelfRef.tb_uart_rx__DOT__dut__DOT__data_reg) 
                                               >> 1U)));
                }
            }
        }
    } else {
        if ((1U & (IData)(vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_state))) {
            if (vlSelfRef.tb_uart_rx__DOT__s_tick) {
                if ((7U == (IData)(vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_count))) {
                    if ((1U & (~ (IData)(vlSelfRef.tb_uart_rx__DOT__rx)))) {
                        vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_count = 0U;
                    }
                    vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_state 
                        = ((IData)(vlSelfRef.tb_uart_rx__DOT__rx)
                            ? 0U : 2U);
                } else {
                    vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_count 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_count)));
                    vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_state = 1U;
                }
            }
        } else {
            if ((1U & (~ (IData)(vlSelfRef.tb_uart_rx__DOT__rx)))) {
                vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_count = 0U;
            }
            vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_state 
                = ((IData)(vlSelfRef.tb_uart_rx__DOT__rx)
                    ? 0U : 1U);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_state)))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_uart_rx__DOT__rx)))) {
                vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_bit_count = 0U;
            }
        }
    }
}

void Vtb_uart_rx___024root___nba_sequent__TOP__0(Vtb_uart_rx___024root* vlSelf);
void Vtb_uart_rx___024root___nba_sequent__TOP__1(Vtb_uart_rx___024root* vlSelf);
void Vtb_uart_rx___024root___nba_sequent__TOP__2(Vtb_uart_rx___024root* vlSelf);
void Vtb_uart_rx___024root___nba_comb__TOP__0(Vtb_uart_rx___024root* vlSelf);

void Vtb_uart_rx___024root___eval_nba(Vtb_uart_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root___eval_nba\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_uart_rx___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_uart_rx___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_uart_rx___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_uart_rx___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_uart_rx___024root___nba_sequent__TOP__1(Vtb_uart_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root___nba_sequent__TOP__1\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vdly__tb_uart_rx__DOT__tick_counter;
    __Vdly__tb_uart_rx__DOT__tick_counter = 0;
    // Body
    __Vdly__tb_uart_rx__DOT__tick_counter = vlSelfRef.tb_uart_rx__DOT__tick_counter;
    if (vlSelfRef.tb_uart_rx__DOT__rst_n) {
        if ((3U == (IData)(vlSelfRef.tb_uart_rx__DOT__tick_counter))) {
            vlSelfRef.tb_uart_rx__DOT__s_tick = 1U;
            __Vdly__tb_uart_rx__DOT__tick_counter = 0U;
        } else {
            __Vdly__tb_uart_rx__DOT__tick_counter = 
                (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_uart_rx__DOT__tick_counter)));
            vlSelfRef.tb_uart_rx__DOT__s_tick = 0U;
        }
    } else {
        __Vdly__tb_uart_rx__DOT__tick_counter = 0U;
        vlSelfRef.tb_uart_rx__DOT__s_tick = 0U;
    }
    vlSelfRef.tb_uart_rx__DOT__tick_counter = __Vdly__tb_uart_rx__DOT__tick_counter;
}

VL_INLINE_OPT void Vtb_uart_rx___024root___nba_sequent__TOP__2(Vtb_uart_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root___nba_sequent__TOP__2\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_uart_rx__DOT__rx_done = ((IData)(vlSelfRef.tb_uart_rx__DOT__rst_n) 
                                          && (IData)(vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_rx_done));
    if (vlSelfRef.tb_uart_rx__DOT__rst_n) {
        vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_bit_count 
            = vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_bit_count;
        vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_count 
            = vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_count;
        vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_state 
            = vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_state;
        vlSelfRef.tb_uart_rx__DOT__dut__DOT__data_reg 
            = vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_data_reg;
    } else {
        vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_bit_count = 0U;
        vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_count = 0U;
        vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_state = 0U;
        vlSelfRef.tb_uart_rx__DOT__dut__DOT__data_reg = 0U;
    }
}

VL_INLINE_OPT void Vtb_uart_rx___024root___nba_comb__TOP__0(Vtb_uart_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root___nba_comb__TOP__0\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_rx_done = 0U;
    vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_count 
        = vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_count;
    vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_bit_count 
        = vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_bit_count;
    vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_state 
        = vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_state;
    vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_data_reg 
        = vlSelfRef.tb_uart_rx__DOT__dut__DOT__data_reg;
    if ((2U & (IData)(vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_state))) {
        if ((1U & (IData)(vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_state))) {
            if (vlSelfRef.tb_uart_rx__DOT__s_tick) {
                if ((0xfU == (IData)(vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_count))) {
                    if (vlSelfRef.tb_uart_rx__DOT__rx) {
                        vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_rx_done = 1U;
                    }
                    vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_state = 0U;
                } else {
                    vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_state = 3U;
                }
                if ((0xfU != (IData)(vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_count))) {
                    vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_count 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_count)));
                }
            }
        } else if (vlSelfRef.tb_uart_rx__DOT__s_tick) {
            if ((0xfU == (IData)(vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_count))) {
                vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_count = 0U;
                vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_state 
                    = ((7U == (IData)(vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_bit_count))
                        ? 3U : 2U);
            } else {
                vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_count 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_count)));
                vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_state = 2U;
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_state)))) {
            if (vlSelfRef.tb_uart_rx__DOT__s_tick) {
                if ((0xfU == (IData)(vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_count))) {
                    if ((7U != (IData)(vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_bit_count))) {
                        vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_bit_count 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_bit_count)));
                    }
                    vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_data_reg 
                        = (((IData)(vlSelfRef.tb_uart_rx__DOT__rx) 
                            << 7U) | (0x7fU & ((IData)(vlSelfRef.tb_uart_rx__DOT__dut__DOT__data_reg) 
                                               >> 1U)));
                }
            }
        }
    } else {
        if ((1U & (IData)(vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_state))) {
            if (vlSelfRef.tb_uart_rx__DOT__s_tick) {
                if ((7U == (IData)(vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_count))) {
                    if ((1U & (~ (IData)(vlSelfRef.tb_uart_rx__DOT__rx)))) {
                        vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_count = 0U;
                    }
                    vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_state 
                        = ((IData)(vlSelfRef.tb_uart_rx__DOT__rx)
                            ? 0U : 2U);
                } else {
                    vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_count 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_count)));
                    vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_state = 1U;
                }
            }
        } else {
            if ((1U & (~ (IData)(vlSelfRef.tb_uart_rx__DOT__rx)))) {
                vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_count = 0U;
            }
            vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_state 
                = ((IData)(vlSelfRef.tb_uart_rx__DOT__rx)
                    ? 0U : 1U);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_state)))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_uart_rx__DOT__rx)))) {
                vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_bit_count = 0U;
            }
        }
    }
}

void Vtb_uart_rx___024root___timing_resume(Vtb_uart_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root___timing_resume\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_he70091b4__0.resume(
                                                   "@(posedge tb_uart_rx.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_uart_rx___024root___timing_commit(Vtb_uart_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root___timing_commit\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_he70091b4__0.commit(
                                                   "@(posedge tb_uart_rx.clk)");
    }
}

void Vtb_uart_rx___024root___eval_triggers__act(Vtb_uart_rx___024root* vlSelf);

bool Vtb_uart_rx___024root___eval_phase__act(Vtb_uart_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root___eval_phase__act\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_uart_rx___024root___eval_triggers__act(vlSelf);
    Vtb_uart_rx___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_uart_rx___024root___timing_resume(vlSelf);
        Vtb_uart_rx___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_uart_rx___024root___eval_phase__nba(Vtb_uart_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root___eval_phase__nba\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_uart_rx___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_uart_rx___024root___dump_triggers__nba(Vtb_uart_rx___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_uart_rx___024root___dump_triggers__act(Vtb_uart_rx___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_uart_rx___024root___eval(Vtb_uart_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root___eval\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_uart_rx___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_uart_rx.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_uart_rx___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_uart_rx.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_uart_rx___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_uart_rx___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_uart_rx___024root___eval_debug_assertions(Vtb_uart_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root___eval_debug_assertions\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
