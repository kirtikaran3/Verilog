`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:03:13 04/19/2016 
// Design Name: 
// Module Name:    encoder_function 
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
module encoder_function(in,enable,out);
input [3:0] in;
input enable;
output [1:0] out;
reg [1:0] out;
always @ (enable)
begin
out = encoder ( in);
end
function [1:0] encoder;
input [3:0]  in ;
begin
if(in==0001)
encoder=00;
else if (in==0010)
encoder=01;
else if (in==0100)
encoder=10;
else
encoder=11;
end
endfunction
endmodule
