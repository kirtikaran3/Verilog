`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:18:51 01/21/2017 
// Design Name: 
// Module Name:    shift 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
// Design
module shift
(
  input clk,
  input reset,
  input data_in,
  output data_out
);

parameter DEPTH = 3;
wire [DEPTH:0] connect_wire;

assign data_out = connect_wire[DEPTH];
assign connect_wire[0] = data_in;

genvar i;
generate
   for (i=1; i <= DEPTH; i=i+1) begin
      dff DFF(clk, reset,
        connect_wire[i-1], connect_wire[i]);
   end
endgenerate

endmodule

// D flip-flop
module dff (clk, reset,
  d, q);
  input      clk;
  input      reset;
  input      d;
  output     q;

  reg        q;

  always @(posedge clk or posedge reset)
  begin
    if (reset) begin
      q = 1'b0;
    end else begin
      q = d;
    end
  end
endmodule