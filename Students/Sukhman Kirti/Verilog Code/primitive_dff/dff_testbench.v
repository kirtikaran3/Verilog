`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:43:01 04/22/2016 
// Design Name: 
// Module Name:    dff_testbench 
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
`include "primitive_dff.v"
module dff_testbench;
reg clk,d;
wire out;
primitive_dff n(out,clk,d);
initial
begin
$monitor($time,"out=%b,clk=%b,d=%b",out,clk,d);
end
initial
begin
#5 clk=1'b0; 
#5 clk=1'b1; d=1'b0;
#5 clk=1'b1; d=1'b1;

end
initial 
#40 $stop ;

endmodule
