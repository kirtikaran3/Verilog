`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:33:52 04/12/2016 
// Design Name: 
// Module Name:    alu 
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
module alu(a,b,s,y);
input [3:0] a;
input [3:0] b;
input [2:0] s;
output [7:0] y;
reg [7:0] y;
always @(a,b,s)
begin
case(s)
3'b000:y=a+b;
3'b001:y=a-b;
3'b010:y=a&b;
3'b011:y=a|b;
3'b100:y=a*b;
3'b101:y=a;
3'b110:y=b;
3'b111:y=a^b;
endcase
end
endmodule
