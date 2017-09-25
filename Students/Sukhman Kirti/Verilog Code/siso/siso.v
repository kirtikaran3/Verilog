`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:53:54 04/13/2016 
// Design Name: 
// Module Name:    siso 
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
module siso(clk,clr,a,q );
input a,clk,clr;
output q;
reg q;
always @(posedge clk)
begin
if(clr ==1'b1)
q<=1'b0;
else
q<=a;
end
endmodule
