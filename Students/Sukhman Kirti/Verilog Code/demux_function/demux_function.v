`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:35:55 04/15/2016 
// Design Name: 
// Module Name:    demux_function 
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
module demux_function(in,sel,out,en );
input in,en;
input [1:0] sel;
output [3:0] out;
reg [3:0] out;
always @ (en)
begin
out[0] = demux(in,sel[0],sel[1]);
out[1] = demux(in,sel[0],sel[1]);
out[2] = demux(in,sel[0],sel[1]);
out[3] = demux(in,sel[0],sel[1]);
end
function [3:0] demux;
input in;
input s0,s1;
begin
out[0] = (in &(~s0)& (~s1)) ;
out[1]= (in & (~s0) & s1);
out[2]=(in & s0 & (~s1)) ;
out[3] = (in & s0 &s1) ;
end
endfunction
endmodule 