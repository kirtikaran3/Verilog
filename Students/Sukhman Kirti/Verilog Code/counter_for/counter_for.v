`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:47:07 04/07/2016 
// Design Name: 
// Module Name:    counter_for 
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
/////////////////////////////////////////////////////////////////////////////////
module up_counter(clk,q,i);
input clk;
output [3:0] q;
reg [3:0] q;
output i;
integer i;
initial
begin
q =0;
end
always @(posedge clk)
begin
for (i=0;i<=16;i=i+1)
begin
q<=q+1;
end
end
endmodule
