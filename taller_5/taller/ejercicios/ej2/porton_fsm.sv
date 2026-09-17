module porton_fsm_long (
    input logic clk, 
    input logic rst, 
    input logic button,
    input logic [1:0] posicion,
    output logic subir, 
    output logic bajar,
    output logic abierto, 
    output logic cerrado
);
// 1. creo los nombres de los estados.
  typedef enum logic [1:0] {
    CERRADO = 2'b00, 
    ABRIENDO = 2'b01,
    ABIERTO = 2'b10, 
    CERRANDO = 2'b11
 } state_t;
 state_t current_state, next_state;

// 2. en un clk: si reseteo el estado vuelve a CERRADO, sino cambia al siguiente estado.
 always_ff @(posedge clk) begin // no entendi si tengo q agregar posedge rst
    if (rst) 
      current_state <= CERRADO;
    else       
      current_state <= next_state;
  end

// 3. armo mis casos, si hay boton paso al siguiente estado, sino me quedo en CERRADO o ABIERTO
// en abriendo y cerrando tengo que pasar por 4 clks para poder pasar al next_state
always_comb begin
  next_state = current_state;
  case (current_state)
    CERRADO: 
      if (button) next_state = ABRIENDO;
    ABRIENDO:
      if (posicion == 2'b11) next_state = ABIERTO; // pasa a abierto cuando llega al maximo
    ABIERTO:
      if (button) next_state = CERRANDO;
    CERRANDO:
        if (posicion == 2'b00) next_state = CERRADO; // pasa a cerrado cuando llega al minimo
    default: next_state = CERRADO;
  endcase
 end

 // 4. prendo mis led segun el estado actual.
always_comb begin
    cerrado = 1'b0;
    subir = 1'b0;
    abierto = 1'b0;
    bajar = 1'b0;

    unique case (current_state)
        CERRADO:  cerrado = 1'b1;
        ABRIENDO: subir = 1'b1;
        ABIERTO:  abierto = 1'b1;
        CERRANDO: bajar = 1'b1;
    endcase
end
endmodule
