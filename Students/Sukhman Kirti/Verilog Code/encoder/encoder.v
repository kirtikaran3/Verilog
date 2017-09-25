`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:18:31 04/01/2016 
// Design Name: 
// Module Name:    encoder 
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
module encoder(in,enable,out);
input [3:0] in;
input enable;
output [1:0] out;
reg [1:0] out;
always @ (enable)
begin
case (in)
0001:
begin
out[0]<=0;
out[1]<=0;
end
0010:
begin
out[0]<=0;
out[1]<=1;
end
0100:
begin
out[0]<=1;
out[1]<=0;
end
1000:
begin
out[0]<=1;
out[1]<=1;
end
endcase
end
endmodule
