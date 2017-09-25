`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:27:34 02/08/2017 
// Design Name: 
// Module Name:    andTest 
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
module andTest(
 in,out   );

input [3:0] in; 
output [1:0] out; 

assign out[0] = in[0] & in[1]; 
assign out[1] = in[2] | in[3];

endmodule










