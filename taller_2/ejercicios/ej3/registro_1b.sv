module registro_1b (
    input  logic clk,
    input  logic rst,
    input  logic we,
    input  logic din,
    output logic q
);
  ff_d registro (
    .clk(clk),
    .rst(rst),
    .d(we ? din : q),
    .q(q)
  );
endmodule
