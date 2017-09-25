`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:50:52 04/15/2016 
// Design Name: 
// Module Name:    fa_function 
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
module fa_function(a,b,c,en,out);
input en,a,b,c;
output [1:0] out;
reg [1:0] out;
always @(en)
begin
out = ha(a,b);
out = ha(c,out); 
end
function [1:0] ha ;
input a,b;
ha = {a&b,a^b};
endfunction

endmodule
