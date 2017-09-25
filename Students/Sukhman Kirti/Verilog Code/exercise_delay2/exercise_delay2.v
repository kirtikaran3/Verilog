`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:51:37 04/14/2016 
// Design Name: 
// Module Name:    exercise_delay2 
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
module exercise_delay2(i,o);
input [4:0] i;
output [4:0] o;
reg [4:0]o;
always @(i)
begin
o=i;
$monitor ($time,"i=$d",i,"o=%d",o);
 end
endmodule
module exercisetestbench;
reg [4:0] i;
wire [4:0]o;
exercise_delay2 n1(i,o);
initial
begin
#0 i=5'd3;
#0 i=5'd2;
 i=5'd4;
 i=5'd3;
i=5'd7;
end
endmodule 


