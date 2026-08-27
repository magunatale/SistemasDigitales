module restador_4b (
    input  logic [3:0] a,
    input  logic [3:0] b,
    input  logic       bin,
    output logic [3:0] diff,
    output logic       bout
);
  logic b1, b2, b3;
  restador_completo restaUno (
    .a(a[0]),
    .b(b[0]),
    .bin(bin),
    .diff(diff[0]),
    .bout(b1)
  );
    restador_completo restaDos (
    .a(a[1]),
    .b(b[1]),
    .bin(b1),
    .diff(diff[1]),
    .bout(b2)
  );
    restador_completo restaTres (
    .a(a[2]),
    .b(b[2]),
    .bin(b2),
    .diff(diff[2]),
    .bout(b3)
  );
    restador_completo restaCuatro (
    .a(a[3]),
    .b(b[3]),
    .bin(b3),
    .diff(diff[3]),
    .bout(bout)
  );
endmodule

/* 
a) Con a = 4`b0100 (4 en decimal), b = 4`b0001 (1 en decimal) y 0 de bin 
obtengo diff = 4`b0011 (3 en decimal, tiene sentido :)) y bout = 0

b) Si b > a, el bout final nos va a dar 0. 
*/