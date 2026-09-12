module shifter_4b (
    input logic [3:0] dato,
    input logic aritmetico,
    output logic [3:0] resultado,
    output logic negativo, zero
);
    assign resultado[2:0] = dato[3:1];
    assign resultado[3]   = aritmetico ? dato[3] : 1'b0;
    logic n_calc, z_calc;

    negativo_4b det_neg (
        .dato(resultado),
        .negativo(n_calc)
    );

    zero_4b det_zero (
        .dato(resultado),
        .zero(z_calc)
    );

    assign negativo = aritmetico ? n_calc : 1'b0;
    assign zero = aritmetico ? z_calc : 1'b0;
endmodule
