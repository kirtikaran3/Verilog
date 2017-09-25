`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:07:00 04/21/2016 
// Design Name: 
// Module Name:    traffic_light_controller4 
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
module traffic_light_controller4(en,pst,nst,out);
input en;
input [3:0] pst;
output [3:0]nst,out;
reg [3:0] nst,out;
parameter s0=001,s1=010,s2=100;
always @(en)
begin
case (pst)
4'b1001:
begin
nst<=4'b1010;
out<=4'b0001;
end

4'b1010:
begin
nst<=4'b1011;
out<=4'b0000;
end


4'b1011:
begin
nst<=4'b1100;
out<=4'b0010;
end

4'b1100:
begin
nst<=4'b1101;
out<=4'b0000;
end

4'b1101:
begin
nst<=4'b1110;
out<=4'b01000;
end

4'b1110:
begin
nst<=4'b1111;
out<=4'b0000;
end

4'b1111:
begin
nst<=4'b0111;
out<=4'b1000;
end

4'b0111:
begin
nst<=4'b1001;
out<=4'b0000;
end

endcase
end
endmodule
