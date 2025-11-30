module baud_gen #(
    parameter WIDTH = 14
)(
    input logic clk,
    input logic rst_n,
    input logic [WIDTH-1:0] dvsr,
    output logic tick
);
    logic [WIDTH-1:0] count;

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) 
            count <= {WIDTH{1'b0}};
        else if(count == 0) 
            count <= dvsr;
        else
            count <= count - 1;
    end

    assign tick = (count == 0);

endmodule