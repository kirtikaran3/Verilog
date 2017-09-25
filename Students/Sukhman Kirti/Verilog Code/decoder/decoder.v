`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:19:51 03/29/2016 
// Design Name: 
// Module Name:    decoder 
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
module decoder (a,b,i0,i1,i2,i3);
input a,b;
output i0,i1,i2,i3;
wire o0,o1;
assign o0 = ~ a;
assign o1 = ~ b;
assign i0 = o0 & 01;
assign i1 = o0 & b;
assign i2 = a & o1;
assign i3 = a & b;

endmodule
