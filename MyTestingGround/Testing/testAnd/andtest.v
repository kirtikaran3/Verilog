`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:40:57 10/22/2016 
// Design Name: 
// Module Name:    andtest 
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
module andtest( a,b,out  );

input a,b; 
output [2:0] out; 

//Dataflow style

assign out[0] = a & b; 
assign out[1] = a | b; 
assign out[2] = a ^ b;




endmodule





