`timescale 1ps/1ps

module tb_uart_tx;

    localparam TICK_PERIOD = 4;

    logic clk;
    logic rst_n;
    logic s_tick;
    logic tx_start;
    logic [7:0] tx_data;
    logic tx;
    logic tx_done;

    logic [3:0] tick_counter = 0;

    always #5 clk = ~clk;
    
    uart_tx dut (
        .clk(clk),
        .rst_n(rst_n),
        .s_tick(s_tick),
        .tx_start(tx_start),
        .tx_data(tx_data),
        .tx(tx),
        .tx_done(tx_done)
    );


    always @(posedge clk) begin
        if(tick_counter == TICK_PERIOD-1) begin
            s_tick <= 1'b1;
            tick_counter <= 0;
        end else begin
            s_tick <= 1'b0;
            tick_counter <= tick_counter + 1;
        end
    end

    initial begin

        $dumpfile("uart_wave.vcd"); // Create the file
        $dumpvars(0, tb_uart_tx);   // Record all signals
        
        clk = 1'b0;
        rst_n = 1'b0;
        s_tick = 1'b0;
        tx_start = 1'b0;
        tx_data = 8'h00;

        #20 rst_n = 1'b1;
        #20;

        // C. Test Case 1: Send 0x55 (01010101)
        $display("TEST 1: Sending 0x55");
        @(posedge clk);
        tx_data = 8'h55;
        tx_start = 1'b1;
        @(posedge clk);
        tx_start = 1'b0;

        wait(tx_done == 1'b1);
        $display("TEST 1: Transmission Complete");

        #100;

        // D. Test Case 2: Send 0xAB (10101011)
        $display("TEST 2: Sending 0xAB");
        @(posedge clk);
        tx_data = 8'hAB;
        tx_start = 1'b1;
        @(posedge clk);
        tx_start = 1'b0;

        wait(tx_done == 1'b1);
        $display("TEST 2: Transmission Complete");

        #100;
        $finish;
    end
endmodule