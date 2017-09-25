`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:41:04 04/14/2016 
// Design Name: 
// Module Name:    exercise_delay 
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
module exercise_delay(a);
output a;
reg a;
initial
begin
#5 a=6;
#6 a=5;
#2 a=1;
#9 a=0;
#1 a=5;
end
endmodule
module exercisetestbench;
wire a;
exercise_delay n1(a);
initial

$monitor ($time,"a=%b",a);
endmodule 