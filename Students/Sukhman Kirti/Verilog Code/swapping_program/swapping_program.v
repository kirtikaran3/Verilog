`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:32:29 04/28/2016 
// Design Name: 
// Module Name:    swapping_program 
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
module swapping_program(a,b);
inout a,b;
reg a,b;
reg t1;
initial
begin
assign t1=b;
#5 assign b = a;
assign a= t1;
end
endmodule
