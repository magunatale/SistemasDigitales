module zero_4b (
    input logic [3:0] dato,
    output logic zero
);
  assign zero = (dato == 4'b0000);
endmodule
