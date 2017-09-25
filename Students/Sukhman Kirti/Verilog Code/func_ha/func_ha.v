`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:39:13 04/14/2016 
// Design Name: 
// Module Name:    func_ha 
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
module func_ha(a,b,en,out);
input en,a,b;
output [1:0] out;
reg [1:0] out;
always @(en)
begin
out = ha(a,b); 
end
function [1:0] ha ;
input a,b;
ha = {a&b,a^b};
endfunction
//send
endmodule


