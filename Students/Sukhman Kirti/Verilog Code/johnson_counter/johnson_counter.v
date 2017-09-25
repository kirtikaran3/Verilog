`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:09:16 04/11/2016 
// Design Name: 
// Module Name:    johnson_counter 
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
module johnson_counter(clk,clr,q);
input clk,clr;
output [3:0] q;
reg [3:0] q;
always @(posedge clk )
begin
if (clr==1)
q<=1'b0000;
else
begin
q[1]<=q[0];
q[2]<=q[1];
q[3]<=q[2];
q[0]<= ~ q[3];
end
end
endmodule
