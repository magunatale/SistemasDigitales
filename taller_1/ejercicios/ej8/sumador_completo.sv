module sumador_completo (
    input  logic a,
    input  logic b,
    input  logic cin,
    output logic sum,
    output logic cout
);
  logic d1, c1, c2;
  sumador_simple sumaUno (
    .a(a),
    .b(b),
    .sum(d1), // suma parcial
    .cout(c1) // primer acarreo
  );

  sumador_simple sumaDos (
    .a(d1), 
    .b(cin), // se suma mi suma parcial y el acarreo externo 
    .sum(sum),
    .cout(c2) // segundo acarreo
  );

  assign cout = c1 | c2;
endmodule
