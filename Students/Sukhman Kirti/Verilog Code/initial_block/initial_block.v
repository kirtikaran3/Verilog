`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:40:23 03/31/2016 
// Design Name: 
// Module Name:    initial_block 
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
module initial_block(a,b,c );
input c;
output a;
reg =a;
inout b;
begin
 a = b;
 b = c;
end
endmodule
