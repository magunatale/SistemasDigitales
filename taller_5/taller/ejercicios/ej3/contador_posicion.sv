module contador_posicion (
    input logic clk,
    input logic rst,
    input logic subir,
    input logic bajar,
    output logic [1:0] posicion
);
  always_ff @(posedge clk) begin
    if (rst) posicion <= 0;
    else if (subir && posicion != 2'b11) posicion <= posicion + 1;
    else if (bajar && posicion != 2'b00) posicion <= posicion - 1;
  end
endmodule
