`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:59:22 04/15/2016 
// Design Name: 
// Module Name:    mux_function 
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
module mux_function( in,sel,en,out );
input [7:0] in;
input[2:0] sel;
input en;
output [6:0] out;
reg [6:0] out;
always @ (en)
begin
out[0] = mux(in[0],in[1],sel[0]);
out[1] = mux(in[2],in[3],sel[0]);
out[2] = mux(in[4],in[5],sel[0]);
out[3] = mux(in[6],in[7],sel[0]);
out[4] = mux(out[0],out[1],sel[1]);
out[5] = mux(out[2],out[3],sel[1]);
out[6] = mux(out[4],out[5],sel[2]);
end
function automatic mux;
input in0,in1;
input s;
 mux = (((~s)& in0) | (s &in1)) ;
endfunction
endmodule 