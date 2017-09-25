`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:20:23 04/12/2016 
// Design Name: 
// Module Name:    johnson_counter_testbench 
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
module johnson_counter(clk,q);
input clk;
output [3:0] q;
reg [3:0] q;
initial
q=0000;

always @(posedge clk )

begin
q[1]<=q[0];
q[2]<=q[1];
q[3]<=q[2];
q[0]<= ~ q[3];
end
endmodule
module johnson_counter_testbench;
reg clk;
wire [3:0] q;
johnson_counter n1(clk,q);
initial
begin
$monitor($time,"q=%b,clk=%b",q,clk);
end
initial
begin
 clk=1'b1; 
#5 clk=1'b0;
 //clr=1'b0;
end

endmodule
