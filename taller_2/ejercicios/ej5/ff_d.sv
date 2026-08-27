module ff_d (
    input  logic clk,
    input  logic rst,
    input  logic d,
    output logic q
);
always_ff @(posedge clk) begin // si rst = 1 → q <= 0; si no, q <= d
        if (rst) begin
            q <= 1'b0;
        end else begin 
            q <= d;
        end
    end

endmodule
