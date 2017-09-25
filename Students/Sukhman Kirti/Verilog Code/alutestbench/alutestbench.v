`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:52:45 04/12/2016 
// Design Name: 
// Module Name:    alutestbench 
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
module alu(a,b,s,y);
input [3:0] a;
input [3:0] b;
input [2:0] s;
output [7:0] y;
reg [7:0] y;
always @(a,b,s)
begin
case(s)
3'b000:y=a+b;
3'b001:y=a-b;
3'b010:y=a&b;
3'b011:y=a|b;
3'b100:y=a*b;
3'b101:y=a;
3'b110:y=b;
3'b111:y=a^b;
endcase
end
endmodule
module alutestbench;
reg [3:0] a,b;
reg [2:0] s;
wire [7:0] y;
alu n1 (a,b,s,y);
initial
$monitor($time,"y=%b,a=%b,b=%b,s=%b",y,a,b,s);
initial
begin
a=4'b1101;
b=4'b1001;
s=3'b000;
s=3'b001;
s=3'b010;
s=3'b011;
s=3'b100;
s=3'b101;
s=3'b110;
s=3'b111;
end
endmodule
