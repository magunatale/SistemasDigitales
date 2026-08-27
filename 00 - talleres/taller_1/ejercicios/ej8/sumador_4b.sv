module sumador_4b (
    input  logic [3:0] a,
    input  logic [3:0] b,
    input  logic       cin,
    output logic [3:0] sum,
    output logic       cout
);
  logic c1, c2, c3;
  sumador_completo sumaUno (
    .a(a[0]),
    .b(b[0]),
    .cin(cin),
    .sum(sum[0]),
    .cout(c1)
  );
    sumador_completo sumaDos (
    .a(a[1]),
    .b(b[1]),
    .cin(c1),
    .sum(sum[1]),
    .cout(c2)
  );
    sumador_completo sumaTres (
    .a(a[2]),
    .b(b[2]),
    .cin(c2),
    .sum(sum[2]),
    .cout(c3)
  );
    sumador_completo sumaCuatro (
    .a(a[3]),
    .b(b[3]),
    .cin(c3),
    .sum(sum[3]),
    .cout(cout)
  );
endmodule

/* 
Calcular a mano a = 4'b0111, b = 4'b0001, cin = 0
lo hice en mi carpeta :) termina dando sum = 4´b1000 lo cual tine sentido ya que 
a es 7 en decimal y b es 1 que sumados dan 8 y 4´b1000 es 8 en decimal yey 
*/