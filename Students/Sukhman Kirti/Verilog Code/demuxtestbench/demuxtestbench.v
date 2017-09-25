`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:39:05 04/09/2016 
// Design Name: 
// Module Name:    demuxtestbench 
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
module demux(in,s,c,y0,y1,y2,y3);
input [1:0]s;
input in,c;
output y0,y1,y2,y3;
reg y0,y1,y2,y3;
always @(c)
begin
if (s==00)
begin
y0<=in;
end
else if (s==01)
begin
y1<=in;
end
else if (s==10)
begin
y2<=in;
end
else
y3<=in;
end
endmodule
module demuxtestbench;
reg [1:0]s;
reg in,c;
wire y0,y1,y2,y3;
demux n1(in,s,c,y0,y1,y2,y3);

initial
begin
$monitor($time,"y0=%b,y1=%b,y2=%b,y3=%b,in=%b,s=%b",y0,y1,y2,y3,in,s);
end
initial
begin
 c=1'b1;s=2'b00;in=1'b1; 
 s=2'b01; 
 s=2'b10; 
 s=2'b11;
 
 
end
endmodule
