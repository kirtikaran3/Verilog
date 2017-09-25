`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:53:35 04/09/2016 
// Design Name: 
// Module Name:    decodertestbench 
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
module decoder (a,b,y0,y1,y2,y3);
input a,b;
output y0,y1,y2,y3;
wire o0,o1;
assign o0 = ~ a;
assign o1 = ~ b;
assign y0 = o0 & 01;
assign y1 = o0 & b;
assign y2 = a & o1;
assign y3 = a & b;
endmodule
module decodertestbench;
reg a,b;
wire y0,y1,y2,y3;
decoder n1(a,b,y0,y1,y2,y3);

initial
begin
$monitor($time,"y0=%b,y1=%b,y2=%b,y3=%b,a=%b,b=%b",y0,y1,y2,y3,a,b);
end
initial
begin 
a=1'b0; b=1'b0;
 a=1'b0; b=1'b1;
  a=1'b1; b=1'b0;
   a=1'b1; b=1'b1;
end
endmodule
