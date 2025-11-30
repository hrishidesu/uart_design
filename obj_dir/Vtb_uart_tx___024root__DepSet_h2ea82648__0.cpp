// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_uart_tx.h for the primary calling header

#include "Vtb_uart_tx__pch.h"
#include "Vtb_uart_tx___024root.h"

VlCoroutine Vtb_uart_tx___024root___eval_initial__TOP__Vtiming__0(Vtb_uart_tx___024root* vlSelf);
VlCoroutine Vtb_uart_tx___024root___eval_initial__TOP__Vtiming__1(Vtb_uart_tx___024root* vlSelf);

void Vtb_uart_tx___024root___eval_initial(Vtb_uart_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_tx___024root___eval_initial\n"); );
    Vtb_uart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_uart_tx___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_uart_tx___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vtb_uart_tx___024root___act_comb__TOP__0(Vtb_uart_tx___024root* vlSelf);

void Vtb_uart_tx___024root___eval_act(Vtb_uart_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_tx___024root___eval_act\n"); );
    Vtb_uart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0xdULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_uart_tx___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_uart_tx___024root___act_comb__TOP__0(Vtb_uart_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_tx___024root___act_comb__TOP__0\n"); );
    Vtb_uart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_uart_tx__DOT__dut__DOT__next_tx_done = 0U;
    vlSelfRef.tb_uart_tx__DOT__dut__DOT__next_bit_count 
        = vlSelfRef.tb_uart_tx__DOT__dut__DOT__current_bit_count;
    vlSelfRef.tb_uart_tx__DOT__dut__DOT__next_count 
        = vlSelfRef.tb_uart_tx__DOT__dut__DOT__current_count;
    vlSelfRef.tb_uart_tx__DOT__dut__DOT__next_state 
        = vlSelfRef.tb_uart_tx__DOT__dut__DOT__current_state;
    vlSelfRef.tb_uart_tx__DOT__dut__DOT__next_data_reg 
        = vlSelfRef.tb_uart_tx__DOT__dut__DOT__data_reg;
    if ((2U & (IData)(vlSelfRef.tb_uart_tx__DOT__dut__DOT__current_state))) {
        if ((1U & (IData)(vlSelfRef.tb_uart_tx__DOT__dut__DOT__current_state))) {
            if (vlSelfRef.tb_uart_tx__DOT__s_tick) {
                if ((0xfU == (IData)(vlSelfRef.tb_uart_tx__DOT__dut__DOT__current_count))) {
                    vlSelfRef.tb_uart_tx__DOT__dut__DOT__next_tx_done = 1U;
                    vlSelfRef.tb_uart_tx__DOT__dut__DOT__next_state = 0U;
                } else {
                    vlSelfRef.tb_uart_tx__DOT__dut__DOT__next_state = 3U;
                }
                if ((0xfU != (IData)(vlSelfRef.tb_uart_tx__DOT__dut__DOT__current_count))) {
                    vlSelfRef.tb_uart_tx__DOT__dut__DOT__next_count 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_uart_tx__DOT__dut__DOT__current_count)));
                }
            }
        } else if (vlSelfRef.tb_uart_tx__DOT__s_tick) {
            if ((0xfU == (IData)(vlSelfRef.tb_uart_tx__DOT__dut__DOT__current_count))) {
                vlSelfRef.tb_uart_tx__DOT__dut__DOT__next_count = 0U;
                if ((7U == (IData)(vlSelfRef.tb_uart_tx__DOT__dut__DOT__current_bit_count))) {
                    vlSelfRef.tb_uart_tx__DOT__dut__DOT__next_state = 3U;
                }
            } else {
                vlSelfRef.tb_uart_tx__DOT__dut__DOT__next_count 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_uart_tx__DOT__dut__DOT__current_count)));
                vlSelfRef.tb_uart_tx__DOT__dut__DOT__next_state = 2U;
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_uart_tx__DOT__dut__DOT__current_state)))) {
            if (vlSelfRef.tb_uart_tx__DOT__s_tick) {
                if ((0xfU == (IData)(vlSelfRef.tb_uart_tx__DOT__dut__DOT__current_count))) {
                    vlSelfRef.tb_uart_tx__DOT__dut__DOT__next_bit_count 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_uart_tx__DOT__dut__DOT__current_bit_count)));
                    vlSelfRef.tb_uart_tx__DOT__dut__DOT__next_data_reg 
                        = (0xffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.tb_uart_tx__DOT__dut__DOT__data_reg), 1U));
                }
            }
        }
    } else {
        if ((1U & (IData)(vlSelfRef.tb_uart_tx__DOT__dut__DOT__current_state))) {
            if (vlSelfRef.tb_uart_tx__DOT__s_tick) {
                if ((0xfU == (IData)(vlSelfRef.tb_uart_tx__DOT__dut__DOT__current_count))) {
                    vlSelfRef.tb_uart_tx__DOT__dut__DOT__next_bit_count = 0U;
                    vlSelfRef.tb_uart_tx__DOT__dut__DOT__next_count = 0U;
                    vlSelfRef.tb_uart_tx__DOT__dut__DOT__next_state = 2U;
                } else {
                    vlSelfRef.tb_uart_tx__DOT__dut__DOT__next_count 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_uart_tx__DOT__dut__DOT__current_count)));
                    vlSelfRef.tb_uart_tx__DOT__dut__DOT__next_state = 1U;
                }
            }
        } else if (vlSelfRef.tb_uart_tx__DOT__tx_start) {
            vlSelfRef.tb_uart_tx__DOT__dut__DOT__next_count = 0U;
            vlSelfRef.tb_uart_tx__DOT__dut__DOT__next_state = 1U;
        } else {
            vlSelfRef.tb_uart_tx__DOT__dut__DOT__next_state = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_uart_tx__DOT__dut__DOT__current_state)))) {
            if (vlSelfRef.tb_uart_tx__DOT__tx_start) {
                vlSelfRef.tb_uart_tx__DOT__dut__DOT__next_data_reg 
                    = vlSelfRef.tb_uart_tx__DOT__tx_data;
            }
        }
    }
}

void Vtb_uart_tx___024root___nba_sequent__TOP__0(Vtb_uart_tx___024root* vlSelf);
void Vtb_uart_tx___024root___nba_sequent__TOP__1(Vtb_uart_tx___024root* vlSelf);

void Vtb_uart_tx___024root___eval_nba(Vtb_uart_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_tx___024root___eval_nba\n"); );
    Vtb_uart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_uart_tx___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_uart_tx___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((0xfULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_uart_tx___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_uart_tx___024root___nba_sequent__TOP__0(Vtb_uart_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_tx___024root___nba_sequent__TOP__0\n"); );
    Vtb_uart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__tb_uart_tx__DOT__s_tick;
    __Vdly__tb_uart_tx__DOT__s_tick = 0;
    CData/*0:0*/ __VdlyMask__tb_uart_tx__DOT__s_tick;
    __VdlyMask__tb_uart_tx__DOT__s_tick = 0;
    CData/*3:0*/ __Vdly__tb_uart_tx__DOT__tick_counter;
    __Vdly__tb_uart_tx__DOT__tick_counter = 0;
    // Body
    __Vdly__tb_uart_tx__DOT__tick_counter = vlSelfRef.tb_uart_tx__DOT__tick_counter;
    if ((3U == (IData)(vlSelfRef.tb_uart_tx__DOT__tick_counter))) {
        __Vdly__tb_uart_tx__DOT__s_tick = 1U;
        __VdlyMask__tb_uart_tx__DOT__s_tick = 1U;
        __Vdly__tb_uart_tx__DOT__tick_counter = 0U;
    } else {
        __Vdly__tb_uart_tx__DOT__tick_counter = (0xfU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.tb_uart_tx__DOT__tick_counter)));
        __Vdly__tb_uart_tx__DOT__s_tick = 0U;
        __VdlyMask__tb_uart_tx__DOT__s_tick = 1U;
    }
    vlSelfRef.tb_uart_tx__DOT__tick_counter = __Vdly__tb_uart_tx__DOT__tick_counter;
    vlSelfRef.tb_uart_tx__DOT__s_tick = (((IData)(__Vdly__tb_uart_tx__DOT__s_tick) 
                                          & (IData)(__VdlyMask__tb_uart_tx__DOT__s_tick)) 
                                         | ((IData)(vlSelfRef.tb_uart_tx__DOT__s_tick) 
                                            & (~ (IData)(__VdlyMask__tb_uart_tx__DOT__s_tick))));
    __VdlyMask__tb_uart_tx__DOT__s_tick = 0U;
}

VL_INLINE_OPT void Vtb_uart_tx___024root___nba_sequent__TOP__1(Vtb_uart_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_tx___024root___nba_sequent__TOP__1\n"); );
    Vtb_uart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_uart_tx__DOT__tx_done = ((IData)(vlSelfRef.tb_uart_tx__DOT__rst_n) 
                                          && (IData)(vlSelfRef.tb_uart_tx__DOT__dut__DOT__next_tx_done));
    vlSelfRef.tb_uart_tx__DOT__tx = ((1U & (~ (IData)(vlSelfRef.tb_uart_tx__DOT__rst_n))) 
                                     || (IData)(vlSelfRef.tb_uart_tx__DOT__dut__DOT__next_tx));
    if (vlSelfRef.tb_uart_tx__DOT__rst_n) {
        vlSelfRef.tb_uart_tx__DOT__dut__DOT__current_bit_count 
            = vlSelfRef.tb_uart_tx__DOT__dut__DOT__next_bit_count;
        vlSelfRef.tb_uart_tx__DOT__dut__DOT__data_reg 
            = vlSelfRef.tb_uart_tx__DOT__dut__DOT__next_data_reg;
        vlSelfRef.tb_uart_tx__DOT__dut__DOT__current_count 
            = vlSelfRef.tb_uart_tx__DOT__dut__DOT__next_count;
        vlSelfRef.tb_uart_tx__DOT__dut__DOT__current_state 
            = vlSelfRef.tb_uart_tx__DOT__dut__DOT__next_state;
    } else {
        vlSelfRef.tb_uart_tx__DOT__dut__DOT__current_state = 0U;
    }
    vlSelfRef.tb_uart_tx__DOT__dut__DOT__next_tx = vlSelfRef.tb_uart_tx__DOT__tx;
    if ((2U & (IData)(vlSelfRef.tb_uart_tx__DOT__dut__DOT__current_state))) {
        vlSelfRef.tb_uart_tx__DOT__dut__DOT__next_tx 
            = ((1U & (IData)(vlSelfRef.tb_uart_tx__DOT__dut__DOT__current_state)) 
               || (1U & (IData)(vlSelfRef.tb_uart_tx__DOT__dut__DOT__data_reg)));
    } else if ((1U & (IData)(vlSelfRef.tb_uart_tx__DOT__dut__DOT__current_state))) {
        vlSelfRef.tb_uart_tx__DOT__dut__DOT__next_tx = 0U;
    }
}

void Vtb_uart_tx___024root___timing_resume(Vtb_uart_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_tx___024root___timing_resume\n"); );
    Vtb_uart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h33c223cb__0.resume(
                                                   "@(posedge tb_uart_tx.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h09f77cee__0.resume(
                                                   "@( tb_uart_tx.tx_done)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_uart_tx___024root___timing_commit(Vtb_uart_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_tx___024root___timing_commit\n"); );
    Vtb_uart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h33c223cb__0.commit(
                                                   "@(posedge tb_uart_tx.clk)");
    }
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h09f77cee__0.commit(
                                                   "@( tb_uart_tx.tx_done)");
    }
}

void Vtb_uart_tx___024root___eval_triggers__act(Vtb_uart_tx___024root* vlSelf);

bool Vtb_uart_tx___024root___eval_phase__act(Vtb_uart_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_tx___024root___eval_phase__act\n"); );
    Vtb_uart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_uart_tx___024root___eval_triggers__act(vlSelf);
    Vtb_uart_tx___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_uart_tx___024root___timing_resume(vlSelf);
        Vtb_uart_tx___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_uart_tx___024root___eval_phase__nba(Vtb_uart_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_tx___024root___eval_phase__nba\n"); );
    Vtb_uart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_uart_tx___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_uart_tx___024root___dump_triggers__nba(Vtb_uart_tx___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_uart_tx___024root___dump_triggers__act(Vtb_uart_tx___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_uart_tx___024root___eval(Vtb_uart_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_tx___024root___eval\n"); );
    Vtb_uart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_uart_tx___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_uart_tx.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_uart_tx___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_uart_tx.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_uart_tx___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_uart_tx___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_uart_tx___024root___eval_debug_assertions(Vtb_uart_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_tx___024root___eval_debug_assertions\n"); );
    Vtb_uart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
