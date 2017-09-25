`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:12:40 03/19/2016 
// Design Name: 
// Module Name:    demux1to4 
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
module demux1to4(in,a,b,o0,o1,o2,o3);
input in,a,b;
output o0,o1,o2,o3;
wire t1,t2;
assign t1=~a;
assign t2=~b;
assign o0=in&t1&t2;
assign o1=in&t1&b;
assign o2=in&a&t2;
assign o3=in&a&b;

endmodule
