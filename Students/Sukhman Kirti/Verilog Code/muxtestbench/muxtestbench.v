`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:16:23 04/09/2016 
// Design Name: 
// Module Name:    muxtestbench 
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
module mux(in0,in1,in2,in3,s,c,y);
input [1:0]s;
input in0,in1,in2,in3;
input c;
output y;
reg y;
always @(c)
begin
if (s==00)
begin
y<=in0;
end
else if (s==01)
begin
y<=in1;
end
else if (s==10)
begin
y<=in2;
end
else
y<=in3;
end
endmodule
module muxtestbench;
reg [1:0]s;
reg in0,in1,in2,in3,c;
wire y;
mux n1(in0,in1,in2,in3,s,c,y);

initial
begin
$monitor($time,"y=%b,s=%b,in0=%b,in1=%b,in2=%b,in3=%b",y,in0,in1,in2,in3,s);
end
initial
begin
 c=1'b1;s=2'b00;in0=1'b1; 
 s=2'b01;in1=1'b1; 
 s=2'b10;in2=1'b1; 
 s=2'b11;in3=1'b1;
 
 
end
endmodule
