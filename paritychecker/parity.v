`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:30:37 02/21/2016 
// Design Name: 
// Module Name:    parity 
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
module parity(in,parity);
 
 input [7:0] in; 
 output parity; 
 
 wire [7:0] in; 
 wire parity; 
 
 assign parity=(in[0]^in[1])^(in[2]^in[3])^(in[4]^in[5])^(in[6]^in[7]);

endmodule
























