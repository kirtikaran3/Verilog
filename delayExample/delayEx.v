`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:10:43 02/03/2017 
// Design Name: 
// Module Name:    delayEx 
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
module delayEx(
  in,out1,out2,clk  );
input clk; 

input [3:0] in; 
output [3:0] out1; 
reg [3:0] out1;
output [3:0] out2; 
reg [3:0] out2;
always @(posedge clk) 
begin  

	out1 = #5 in;

end 

always @(posedge clk) 

begin  

	#5 out2 = in;

end


endmodule
