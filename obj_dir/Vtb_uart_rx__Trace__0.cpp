// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_uart_rx__Syms.h"


void Vtb_uart_rx___024root__trace_chg_0_sub_0(Vtb_uart_rx___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_uart_rx___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root__trace_chg_0\n"); );
    // Init
    Vtb_uart_rx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_uart_rx___024root*>(voidSelf);
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_uart_rx___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_uart_rx___024root__trace_chg_0_sub_0(Vtb_uart_rx___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root__trace_chg_0_sub_0\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [3U])))) {
        bufp->chgCData(oldp+0,(vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_state),2);
        bufp->chgBit(oldp+1,(vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_rx_done));
        bufp->chgCData(oldp+2,(vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_count),4);
        bufp->chgCData(oldp+3,(vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_bit_count),3);
        bufp->chgCData(oldp+4,(vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_data_reg),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+5,(vlSelfRef.tb_uart_rx__DOT__dut__DOT__data_reg),8);
        bufp->chgBit(oldp+6,(vlSelfRef.tb_uart_rx__DOT__rx_done));
        bufp->chgCData(oldp+7,(vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_state),2);
        bufp->chgCData(oldp+8,(vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_count),4);
        bufp->chgCData(oldp+9,(vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_bit_count),3);
    }
    bufp->chgBit(oldp+10,(vlSelfRef.tb_uart_rx__DOT__clk));
    bufp->chgBit(oldp+11,(vlSelfRef.tb_uart_rx__DOT__rst_n));
    bufp->chgBit(oldp+12,(vlSelfRef.tb_uart_rx__DOT__s_tick));
    bufp->chgBit(oldp+13,(vlSelfRef.tb_uart_rx__DOT__rx));
    bufp->chgCData(oldp+14,(vlSelfRef.tb_uart_rx__DOT__tick_counter),4);
    bufp->chgCData(oldp+15,(vlSelfRef.tb_uart_rx__DOT__expected_val),8);
    bufp->chgIData(oldp+16,(vlSelfRef.tb_uart_rx__DOT__sendbyte__Vstatic__i),32);
}

void Vtb_uart_rx___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root__trace_cleanup\n"); );
    // Init
    Vtb_uart_rx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_uart_rx___024root*>(voidSelf);
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
