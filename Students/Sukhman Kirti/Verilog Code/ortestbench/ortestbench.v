`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:02:11 04/09/2016 
// Design Name: 
// Module Name:    ortestbench 
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
module orgate(a,b,out);
input a,b;
output out;
assign out = a|b;
endmodule
module ortestbench;
reg a,b;
wire out;
orgate o(a,b,out);
initial
begin
$monitor($time,"out=%a,b",out);
end
initial
begin
#5 a=1'b0; #5 b=1'b0;
#5 a=1'b0; #5 b=1'b1;
#5 a=1'b1; #5 b=1'b0;
#5 a=1'b1; #5 b=1'b1;
end
endmodule
