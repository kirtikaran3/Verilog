`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:01:29 03/31/2016 
// Design Name: 
// Module Name:    mux_using_if 
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
module mux_using_if(in,s,c,y);
input [1:0] s;
input [3:0] in;
input c;
output y;
reg y;
always @(c)
begin
if ( s==00)
begin
y = in[0];
end
else if ( s==01)
begin
y =in[1];
end
else if ( s==10)
begin 
y = in[2];
end
else
y = in[3];
end
endmodule
