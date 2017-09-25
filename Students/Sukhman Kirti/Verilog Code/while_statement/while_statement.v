`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:34:36 04/07/2016 
// Design Name: 
// Module Name:    while_statement 
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
module while_statement(a,b,i,y);
input a,b;
output i,y; 
integer i;
reg y;
initial
begin
i=0;
while(i<8)
begin
i=i+1;
y=a+b;
end 
end

endmodule
