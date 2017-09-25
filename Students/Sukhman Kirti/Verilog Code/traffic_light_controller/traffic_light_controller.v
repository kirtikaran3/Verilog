`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:49:45 04/21/2016 
// Design Name: 
// Module Name:    traffic_light_controller 
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
module traffic_light_controller( en,pst,nst,out);
input en;
input [2:0] pst;
output [2:0]nst,out;
reg [2:0] nst,out;
parameter s0=001,s1=010,s2=100;
always @(en)
begin
case (pst)
s0:
begin
nst<=s2;
out<=s2;
end

s1:
begin
nst<=s0;
out<=s0;
end

s2:
begin
nst<=s1;
out<=s1;
end

endcase
end
endmodule
