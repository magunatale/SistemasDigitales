module porton_fsm_smart (
    input logic clk,
    input logic rst,
    input logic button,
    input logic [1:0] posicion,
    output logic abrir,
    output logic cerrar,
    output logic pausa,
    output logic abierto,
    output logic cerrado
);
  // 1. creo los nombres de los estados, agrego dos pausas para saber a donde volver
  typedef enum logic [2:0] {
    CERRADO = 3'b000, 
    ABRIENDO = 3'b001,
    PAUSA_ABRIENDO = 3'b010,
    ABIERTO = 3'b011, 
    PAUSA_CERRANDO = 3'b100,
    CERRANDO = 3'b101
 } state_t;
 state_t current_state, next_state;

 // 2. en un clk: si reseteo el estado vuelve a CERRADO, sino cambia al siguiente estado.
 always_ff @(posedge clk) begin // no entendi si tengo q agregar posedge rst
    if (rst) 
      current_state <= CERRADO;
    else       
      current_state <= next_state;
  end

// 3. armo mis casos, si toco el boton estando en abriendo o cerrando 
// se hace la pausa y vuelve al estado inverso.
always_comb begin
  next_state = current_state;
  case (current_state)
    CERRADO: 
      if (button) next_state = ABRIENDO;
    ABRIENDO:
      if (posicion == 2'b11) next_state = ABIERTO; // llega al tope
      else if (button) next_state = PAUSA_ABRIENDO; // tocaron el boton y lo pausaron
    ABIERTO:
      if (button) next_state = CERRANDO;
    CERRANDO:
      if (posicion == 2'b00) next_state = CERRADO;
      else if (button) next_state = PAUSA_CERRANDO;
    PAUSA_ABRIENDO:
      if (button) next_state = CERRANDO;
    PAUSA_CERRANDO:
      if (button) next_state = ABRIENDO;
    default: next_state = CERRADO;
  endcase
 end

 // 4. prendo mis led segun el estado actual agregando la led de pausa
always_comb begin
    cerrado = 1'b0;
    abrir = 1'b0;
    abierto = 1'b0;
    cerrar = 1'b0;
    pausa = 1'b0;

    unique case (current_state)
        CERRADO:  cerrado = 1'b1;
        ABRIENDO: abrir = 1'b1;
        ABIERTO:  abierto = 1'b1;
        CERRANDO: cerrar = 1'b1;
        PAUSA_ABRIENDO: pausa = 1'b1;
        PAUSA_CERRANDO: pausa = 1'b1;
    endcase
end
endmodule

