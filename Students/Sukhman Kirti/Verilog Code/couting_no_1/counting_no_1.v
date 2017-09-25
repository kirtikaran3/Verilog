`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:06:55 04/14/2016 
// Design Name: 
// Module Name:    counting_no_1 
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
module counting_no_1(clk,a,i,count);
input i,clk;
output a;
reg a;
output [3:0] count;
reg [3:0] count;
initial
begin
count=4'b0000;
end
always @(i)
begin
a=i;
if(i)
count=count+1;
end

endmodule
