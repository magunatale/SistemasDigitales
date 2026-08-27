module formula_and_or_not (
    input  logic x,
    input  logic y,
    input  logic z,
    output logic f
);
  // assign f = (x | y) & (x | ~y) & (x | z); ------------> formula extendida
  assign f = x; // formula simplificada

endmodule