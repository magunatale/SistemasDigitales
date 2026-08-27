module datapath_sumador (
    input  logic       clk,
    input  logic       rst,
    input  logic [3:0] force_in,
    input  logic       we_a,
    input  logic       we_b,
    input  logic       we_s,
    output logic [3:0] r_a,
    output logic [3:0] r_b,
    output logic [3:0] r_s,
    output logic       cout
);
  logic [3:0] suma_resultado;
  registro_4b R_a (
    .clk(clk),
    .rst(rst),
    .we (we_a),
    .din(force_in),
    .q  (r_a)
  );
  registro_4b R_b (
    .clk(clk),
    .rst(rst),
    .we (we_b),
    .din(force_in),
    .q  (r_b)
  );
  sumador_4b sumador (
    .a   (r_a),
    .b   (r_b),
    .cin ('0),
    .sum (suma_resultado),
    .cout(cout)
  );
  registro_4b R_s (
    .clk(clk),
    .rst(rst),
    .we (we_s),
    .din(suma_resultado),
    .q  (r_s)
  );

endmodule
