module inversor_cond (
    input  logic [3:0] x,
    input  logic       ctrl,
    output logic [3:0] y
);
  assign y = ctrl ? ~x : x; // o assign y = x ^ {4{ctrl}};
endmodule