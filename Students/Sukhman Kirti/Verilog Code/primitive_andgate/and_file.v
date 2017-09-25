`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:02:04 04/22/2016 
// Design Name: 
// Module Name:    and_file 
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
`include "primitive_andgate.v"
module andtestbench;
reg a,b;
wire out;
primitive_andgate n(out,a,b);
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
