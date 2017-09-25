`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:45:06 04/22/2016 
// Design Name: 
// Module Name:    orgate_file 
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
`include "primitive_orgate.v"
module ortestbench;
reg a,b;
wire out;
primitive_orgate n(out,a,b);
initial
begin
$monitor($time,"out=%b,a=%b,b=%b",out,a,b);
end
initial
begin
#5 a=1'b0; b=1'b0;
#5 a=1'b0; b=1'b1;
#5 a=1'b1; b=1'b0;
#5 a=1'b1; b=1'b1;
end
initial 
#40 $stop ;
endmodule

