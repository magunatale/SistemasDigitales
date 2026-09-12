module top_module (
    input logic [3:0] a, b,
    output logic [3:0] sum,
    output logic overflow
);
  logic cout;
  sumador_4b sumador (
        .a(a),
        .b(b),
        .cin(1'b0),
        .sum(sum),
        .cout(cout)
    );
    overflow_4b detector (
        .a(a),
        .b(b),
        .sum(sum),
        .overflow(overflow)
    );
endmodule
