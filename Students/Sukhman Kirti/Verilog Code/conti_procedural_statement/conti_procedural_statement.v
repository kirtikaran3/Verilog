`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:16:16 04/14/2016 
// Design Name: 
// Module Name:    conti_procedural_statement 
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
module conti_procedural_statement(clk,a,x);
input clk,a;
output x;
reg x;
always @(posedge clk)
begin
assign x=a;
deassign x;
end


endmodule
