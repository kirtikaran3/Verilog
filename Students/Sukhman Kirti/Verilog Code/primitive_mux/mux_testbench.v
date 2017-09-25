`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:03:37 04/22/2016 
// Design Name: 
// Module Name:    mux_testbench 
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
`include "primitive_mux.v"
module muxtestbench;
reg s0,s1,a,b,c,d;
wire out;
primitive_mux n(out,s0,s1,a,b,c,d);
initial
begin
$monitor($time,"out=%b,s0=%b,s1=%b,a=%b,b=%b,c=%b,d=%b",out,s0,s1,a,b,c,d);
end
initial
begin
 a=1'b1; b=1'b1;  c=1'b1; d=1'b1;
#5 s0=1'b0; s1=1'b0;
#5 s0=1'b0; s1=1'b1;
#5 s0=1'b1; s1=1'b0;
#5 s0=1'b1; s1=1'b1;
end
initial 
#40 $stop ;

endmodule
