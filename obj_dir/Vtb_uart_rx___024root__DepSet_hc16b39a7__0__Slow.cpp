// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_uart_rx.h for the primary calling header

#include "Vtb_uart_rx__pch.h"
#include "Vtb_uart_rx___024root.h"

VL_ATTR_COLD void Vtb_uart_rx___024root___eval_static__TOP(Vtb_uart_rx___024root* vlSelf);

VL_ATTR_COLD void Vtb_uart_rx___024root___eval_static(Vtb_uart_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root___eval_static\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_uart_rx___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_uart_rx__DOT__clk__0 
        = vlSelfRef.tb_uart_rx__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_uart_rx__DOT__rx_done__0 
        = vlSelfRef.tb_uart_rx__DOT__rx_done;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_uart_rx__DOT__rst_n__0 
        = vlSelfRef.tb_uart_rx__DOT__rst_n;
}

VL_ATTR_COLD void Vtb_uart_rx___024root___eval_static__TOP(Vtb_uart_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root___eval_static__TOP\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_uart_rx__DOT__tick_counter = 0U;
}

VL_ATTR_COLD void Vtb_uart_rx___024root___eval_final(Vtb_uart_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root___eval_final\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_uart_rx___024root___dump_triggers__stl(Vtb_uart_rx___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_uart_rx___024root___eval_phase__stl(Vtb_uart_rx___024root* vlSelf);

VL_ATTR_COLD void Vtb_uart_rx___024root___eval_settle(Vtb_uart_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root___eval_settle\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_uart_rx___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_uart_rx.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_uart_rx___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_uart_rx___024root___dump_triggers__stl(Vtb_uart_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root___dump_triggers__stl\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtb_uart_rx___024root___act_sequent__TOP__0(Vtb_uart_rx___024root* vlSelf);
VL_ATTR_COLD void Vtb_uart_rx___024root____Vm_traceActivitySetAll(Vtb_uart_rx___024root* vlSelf);

VL_ATTR_COLD void Vtb_uart_rx___024root___eval_stl(Vtb_uart_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root___eval_stl\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_uart_rx___024root___act_sequent__TOP__0(vlSelf);
        Vtb_uart_rx___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_uart_rx___024root___eval_triggers__stl(Vtb_uart_rx___024root* vlSelf);

VL_ATTR_COLD bool Vtb_uart_rx___024root___eval_phase__stl(Vtb_uart_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root___eval_phase__stl\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_uart_rx___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_uart_rx___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_uart_rx___024root___dump_triggers__act(Vtb_uart_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root___dump_triggers__act\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_uart_rx.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_uart_rx.rx_done)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge tb_uart_rx.rst_n)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_uart_rx___024root___dump_triggers__nba(Vtb_uart_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root___dump_triggers__nba\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_uart_rx.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_uart_rx.rx_done)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge tb_uart_rx.rst_n)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_uart_rx___024root____Vm_traceActivitySetAll(Vtb_uart_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root____Vm_traceActivitySetAll\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vtb_uart_rx___024root___ctor_var_reset(Vtb_uart_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root___ctor_var_reset\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->tb_uart_rx__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1991025216439364515ull);
    vlSelf->tb_uart_rx__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9122472119743969923ull);
    vlSelf->tb_uart_rx__DOT__s_tick = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3005670674015276511ull);
    vlSelf->tb_uart_rx__DOT__rx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8538949934204812408ull);
    vlSelf->tb_uart_rx__DOT__rx_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 208549057568001194ull);
    vlSelf->tb_uart_rx__DOT__tick_counter = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2917968646326302198ull);
    vlSelf->tb_uart_rx__DOT__expected_val = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7509924463017363422ull);
    vlSelf->tb_uart_rx__DOT__sendbyte__Vstatic__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14166165732839627004ull);
    vlSelf->tb_uart_rx__DOT__dut__DOT__current_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17684227073704057971ull);
    vlSelf->tb_uart_rx__DOT__dut__DOT__next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14866479457468474842ull);
    vlSelf->tb_uart_rx__DOT__dut__DOT__next_rx_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12385608974664217691ull);
    vlSelf->tb_uart_rx__DOT__dut__DOT__current_count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15728125996200522851ull);
    vlSelf->tb_uart_rx__DOT__dut__DOT__next_count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16815040119270231920ull);
    vlSelf->tb_uart_rx__DOT__dut__DOT__current_bit_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4258819087700020815ull);
    vlSelf->tb_uart_rx__DOT__dut__DOT__next_bit_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10780651653833350657ull);
    vlSelf->tb_uart_rx__DOT__dut__DOT__data_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13382161561008764887ull);
    vlSelf->tb_uart_rx__DOT__dut__DOT__next_data_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7258447567217174612ull);
    vlSelf->__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_2__DOT____Vrepeat1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7965686334500173843ull);
    vlSelf->__Vtask_tb_uart_rx__DOT__sendbyte__1__tb_uart_rx__DOT__unnamedblk1_3__DOT____Vrepeat2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15806669303389890224ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_uart_rx__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12074410500819637669ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_uart_rx__DOT__rx_done__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17697305718357436264ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_uart_rx__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3104493615005490576ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
