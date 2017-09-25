`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:55:15 04/01/2016 
// Design Name: 
// Module Name:    demux_using_beh 
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
module demux_using_beh(in,s,out);
input in;
input [1:0] s;
output [3:0] out;
reg [3:0] out;
always @ (in)
begin
case (s) 

00:
begin
out[0]<=1;
out[1]<=0;
out[2]<=0;
out[3]<=0;
end
01:
begin
out[0]<=0;
out[1]<=1;
out[2]<=0;
out[3]<=0;
end
10:
begin
out[0]<=0;
out[1]<=0;
out[2]<=1;
out[3]<=0;
end
11:
begin
out[0]<=0;
out[1]<=0;
out[2]<=0;
out[3]<=1;
end

endcase
end
endmodule
