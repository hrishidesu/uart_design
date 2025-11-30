// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_uart_rx__Syms.h"


VL_ATTR_COLD void Vtb_uart_rx___024root__trace_init_sub__TOP__0(Vtb_uart_rx___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root__trace_init_sub__TOP__0\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_uart_rx", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+18,0,"TICK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"s_tick",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"rx_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+7,0,"rx_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"tick_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+16,0,"expected_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+17,0,"sendbyte__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+11,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"s_tick",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"rx_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+7,0,"rx_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2,0,"next_rx_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"current_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+3,0,"next_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+10,0,"current_bit_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+4,0,"next_bit_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+6,0,"data_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"next_data_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_uart_rx___024root__trace_init_top(Vtb_uart_rx___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root__trace_init_top\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_uart_rx___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_uart_rx___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_uart_rx___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_uart_rx___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_uart_rx___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_uart_rx___024root__trace_register(Vtb_uart_rx___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root__trace_register\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_uart_rx___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_uart_rx___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_uart_rx___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_uart_rx___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_uart_rx___024root__trace_const_0_sub_0(Vtb_uart_rx___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_uart_rx___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root__trace_const_0\n"); );
    // Init
    Vtb_uart_rx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_uart_rx___024root*>(voidSelf);
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_uart_rx___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_uart_rx___024root__trace_const_0_sub_0(Vtb_uart_rx___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root__trace_const_0_sub_0\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+18,(4U),32);
}

VL_ATTR_COLD void Vtb_uart_rx___024root__trace_full_0_sub_0(Vtb_uart_rx___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_uart_rx___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root__trace_full_0\n"); );
    // Init
    Vtb_uart_rx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_uart_rx___024root*>(voidSelf);
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_uart_rx___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_uart_rx___024root__trace_full_0_sub_0(Vtb_uart_rx___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root__trace_full_0_sub_0\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_state),2);
    bufp->fullBit(oldp+2,(vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_rx_done));
    bufp->fullCData(oldp+3,(vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_count),4);
    bufp->fullCData(oldp+4,(vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_bit_count),3);
    bufp->fullCData(oldp+5,(vlSelfRef.tb_uart_rx__DOT__dut__DOT__next_data_reg),8);
    bufp->fullCData(oldp+6,(vlSelfRef.tb_uart_rx__DOT__dut__DOT__data_reg),8);
    bufp->fullBit(oldp+7,(vlSelfRef.tb_uart_rx__DOT__rx_done));
    bufp->fullCData(oldp+8,(vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_state),2);
    bufp->fullCData(oldp+9,(vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_count),4);
    bufp->fullCData(oldp+10,(vlSelfRef.tb_uart_rx__DOT__dut__DOT__current_bit_count),3);
    bufp->fullBit(oldp+11,(vlSelfRef.tb_uart_rx__DOT__clk));
    bufp->fullBit(oldp+12,(vlSelfRef.tb_uart_rx__DOT__rst_n));
    bufp->fullBit(oldp+13,(vlSelfRef.tb_uart_rx__DOT__s_tick));
    bufp->fullBit(oldp+14,(vlSelfRef.tb_uart_rx__DOT__rx));
    bufp->fullCData(oldp+15,(vlSelfRef.tb_uart_rx__DOT__tick_counter),4);
    bufp->fullCData(oldp+16,(vlSelfRef.tb_uart_rx__DOT__expected_val),8);
    bufp->fullIData(oldp+17,(vlSelfRef.tb_uart_rx__DOT__sendbyte__Vstatic__i),32);
}
