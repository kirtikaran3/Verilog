`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:24:50 04/02/2016 
// Design Name: 
// Module Name:    priority_encoder 
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
module priority_encoder(in,enable,out);
input [3:0] in;
input enable;
output [1:0] out;
reg [1:0] out;
always @ (enable)
begin
case (in)
4'b0001:
begin
out[1]=0;
out[0]=0;
end
4'b001z:
begin
out[1]=0;
out[0]=1;
end 
4'b01zz:
begin
out[1]=1;
out[0]=0;
end
4'b1zzz:
begin
out[1]=1;
out[0]=1;
end
endcase
end

endmodule
