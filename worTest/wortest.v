`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:05:08 10/23/2016 
// Design Name: 
// Module Name:    wortest 
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
module wortest(
 a,b,c,out   );

input a,b,c; 
output out; 

wor f; 

assign f=a&b; 
assign f=b|c; 

assign out=f;

endmodule







