`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:30:01 04/09/2016 
// Design Name: 
// Module Name:    andtestbench 
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
module andgate(a,b,out);
input a,b;
output out;
assign out = a&b;
endmodule
module andtestbench;
reg a,b;
wire out;
andgate an (a,b,out);
initial
begin
$monitor($time,"out=%a,b",out);
//$display($time,"i=%b",i);
end
initial
begin
#5 a=1'b0; b=1'b0;
#5 a=1'b0; b=1'b1;
#5 a=1'b1; b=1'b0;
#5 a=1'b1; b=1'b1;
end
endmodule
