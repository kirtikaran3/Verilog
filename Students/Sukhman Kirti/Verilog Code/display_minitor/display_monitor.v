`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:59:07 04/07/2016 
// Design Name: 
// Module Name:    display_monitor 
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
module display_monitor(i,en);
input en;
output i;
integer i;
always @(en)
begin
for(i=0;i<=255;i=i+1)
begin
$monitor ($time," i = %b ",i);
end
end
endmodule
