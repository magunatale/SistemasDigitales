module uupal (
    input  logic       clk,
    input  logic       rst,
    input  logic [3:0] force_in,
    input  logic       force_en,
    input  logic       we0,
    input  logic       we1,
    input  logic       we2,
    input  logic       we3,
    input  logic [1:0] src_a,
    input  logic [1:0] src_b,
    input  logic       load_op_a,
    input  logic       load_op_b,
    input  logic [1:0] op,
    output logic [3:0] r0,
    output logic [3:0] r1,
    output logic [3:0] r2,
    output logic [3:0] r3,
    output logic [3:0] operand_a,
    output logic [3:0] operand_b,
    output logic [3:0] and_value,
    output logic [3:0] or_value,
    output logic [3:0] result
);
  logic [3:0] bus_a;
  logic [3:0] bus_b;
  logic [3:0] bus;
  logic [3:0] add_value;
  logic [3:0] sub_value;
  logic cout;
  logic bout;

  // 1. mux src_a -> bus de lectura A; mux src_b -> bus de lectura B;
  always_comb begin
    case (src_a) // usamos el selector para que bus_a guarde el valor de uno de los registros
        2'b00: bus_a = r0;
        2'b01: bus_a = r1;
        2'b10: bus_a = r2;
        default: bus_a = r3;
    endcase
end
  always_comb begin
    case (src_b) // lo mismo para el bus_b !!!
        2'b00: bus_b = r0;
        2'b01: bus_b = r1;
        2'b10: bus_b = r2;
        default: bus_b = r3;
    endcase
end

// 2. registros operand_a y operand_b (load_op_a / load_op_b);
  registro_4b operando_a (
    .clk(clk),
    .rst(rst),
    .we (load_op_a),    // si we=1 guardo din en q, si w=0 q queda con el valor anterior
    .din(bus_a),       // lo que quiero guardar
    .q  (operand_a)    // lo que tengo guardado
  );
    registro_4b operando_b (
    .clk(clk),
    .rst(rst),
    .we (load_op_b),    
    .din(bus_b),       
    .q  (operand_b)    
  );

  // 3. AND y OR de 4 bits e instancias sumador_4b y restador_4b;
  compuerta_and_4b compuerta_and_4b (
    .a     (operand_a),
    .b     (operand_b),
    .result(and_value)
  );
  compuerta_or_4b compuerta_or_4b (
    .a     (operand_a),
    .b     (operand_b),
    .result(or_value)
  );
  sumador_4b sumador_4b (
    .a   (operand_a),
    .b   (operand_b),
    .cin (0),
    .sum (add_value),
    .cout(cout)
  );
  restador_4b restador_4b (
    .a   (operand_a),
    .b   (operand_b),
    .bin (0),
    .diff(sub_value),
    .bout(bout)
  );

  // 4. mux op -> result;
  always_comb begin
    case (op)
    2'b00: result = and_value;
    2'b01: result = or_value;
    2'b10: result = add_value;
    default: result = sub_value;
  endcase
  end

  // 5. mux force_en: force_in vs result -> bus de escritura;
  assign bus = force_en ? force_in : result;

  // 6. cuatro registro_4b (r0..r3) con we0..we3.;
  registro_4b R0 (
    .clk(clk),
    .rst(rst),
    .we (we0),
    .din(bus), // quiero guardar el valor de bus en el registro que tengo su we=1
    .q  (r0)
  );
  registro_4b R1 (
    .clk(clk),
    .rst(rst),
    .we (we1),
    .din(bus),
    .q  (r1)
  );
  registro_4b R2 (
    .clk(clk),
    .rst(rst),
    .we (we2),
    .din(bus),
    .q  (r2)
  );
  registro_4b R3 (
    .clk(clk),
    .rst(rst),
    .we (we3),
    .din(bus),
    .q  (r3)
  );
endmodule
