`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    04:37:06 04/01/2016 
// Design Name: 
// Module Name:    decoder 
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
module decoder(in,out,c);

input [1:0] in; 
output [3:0] out;  
reg [3:0] out;
input c;

always @(c) 
begin
 out = (in==2'b00)? 1:(in==2'b01)? 2: 
				 (in==2'b10)? 4:(in==2'b11)? 8: 
				  2'bzz;
end				

endmodule
