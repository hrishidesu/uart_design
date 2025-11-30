`timescale 1ps/1ps

module tb_uart_rx;

    localparam TICK_PERIOD = 4;

    logic clk;
    logic rst_n;
    logic s_tick;
    logic rx;
    logic [7:0] rx_data;
    logic rx_done;

    logic [3:0] tick_counter = 0;

    logic [7:0] expected_val;

    initial begin
    clk = 0;
    forever #5 clk = ~clk;
    end

    uart_rx dut (
        .clk(clk),
        .rst_n(rst_n),
        .s_tick(s_tick),
        .rx(rx),
        .rx_data(rx_data),
        .rx_done(rx_done)
    );

    always @(posedge clk) begin
        if(!rst_n) begin
            tick_counter <= 0;
            s_tick <= 1'b0;
        end else if(tick_counter == TICK_PERIOD-1) begin
            s_tick <= 1'b1;
            tick_counter <= 0;
        end else begin
            tick_counter <= tick_counter + 1;
            s_tick <= 1'b0;
        end
    end

    task sendbyte(input [7:0] data);
        integer i;
        begin
            // Start bit
            rx = 1'b0;
            repeat(16*TICK_PERIOD) @(posedge clk);
            //Data bits
            for(i = 0; i < 8; i = i + 1) begin
                rx = data[i];
                repeat(16*TICK_PERIOD) @(posedge clk);
            end
            // Stop bit
            rx = 1'b1;
            repeat(16*TICK_PERIOD) @(posedge clk);
        end
    endtask

    always @(posedge rx_done) begin
        if(rx_data === expected_val) begin
            $display("PASS: Expected 0x%h, Got 0x%h", expected_val, rx_data);
        end else begin
            $error("FAIL: Expected 0x%h, Got 0x%h", expected_val, rx_data);
        end
    end

    initial begin
        $dumpfile("uart_rx.vcd");
        $dumpvars(0, tb_uart_rx);
        rst_n = 1'b0;
        rx = 1'b1; // Idle state
        expected_val = 8'h00;

        repeat(20) @(posedge clk);
        rst_n = 1'b1;
        repeat(20) @(posedge clk);

        // Test Case 1: Receive 0x37 (00110111)
        $display("TEST 1: Sending 0x37");
        expected_val = 8'h37;
        sendbyte(8'h37);

        repeat(20) @(posedge clk);
        // Test Case 2: Receive 0xA5 (10100101)
        $display("TEST 2: Sending 0xA5");
        expected_val = 8'hA5;
        sendbyte(8'hA5);

        repeat(100) @(posedge clk);
        $finish;
    end

    // 6. WATCHDOG TIMER (Safety Timeout)
    initial begin
        #1000000; // Wait 1 ms
        $display("ERROR: Simulation timed out! Signals got stuck.");
        $finish;
    end

/*fork
            sendbyte(8'h37);
        begin
            @(posedge rx_done);
                if(rx_data == 8'h37) begin
                $display("TEST 1 PASSED: Received 0x%0h", rx_data);
            end else begin
                $error("TEST 1 FAILED: Expected 0x37, Received 0x%0h", rx_data);
            end
        end
        join*/

endmodule
