`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:24:39 04/28/2016 
// Design Name: 
// Module Name:    piso 
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
module piso(clk,rst,a,q );
input clk,rst;
input [3:0] a;
output q;
reg q;
reg [3:0] temp;
always @ (posedge clk )
begin
if ( rst ==1'b1)
begin
q<=1'b0;
temp <= a;
end
else
begin
q<=temp[0];
temp[2]<=temp[3];
temp[1]<=temp[2];
temp[0]<=temp[1];
end
end
endmodule
