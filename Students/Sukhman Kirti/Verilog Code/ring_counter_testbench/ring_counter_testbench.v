`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:50:17 04/11/2016 
// Design Name: 
// Module Name:    ring_counter_testbench 
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
module ring_counter(q,clk,clr);
input clk,clr;
output [3:0] q;
reg [3:0] q;
always @(posedge clk)
if (clr==1)
q=4'b1000;
else
begin
q[3]<=q[0];
q[2]<=q[3];
q[1]<=q[2];
q[0]<=q[1];
end
endmodule

module ring_countertestbench;
reg clk,clr;
wire [3:0] q;
ring_counter n1(q,clk,clr);
initial
begin
$monitor($time,"q=%b,clk=%b,clr=%b",q,clk,clr);
end
initial
begin
clr=1'b1;
#50 clr=1'b0;
end
always
forever
begin
 clk=1'b1; 
 #10 clk=1'b0;
end
endmodule
