`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:25:37 04/07/2016 
// Design Name: 
// Module Name:    repeat_statement 
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
module repeat_statement(i,en );
input en;
output i;
integer i;
initial
begin
i=1;
end
always @(en)
begin
repeat(8)
begin
$display($time,"i=%b",i);
end
end
endmodule
