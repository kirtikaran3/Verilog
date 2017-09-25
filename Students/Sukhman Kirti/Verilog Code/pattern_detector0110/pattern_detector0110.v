`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:22:51 04/21/2016 
// Design Name: 
// Module Name:    pattern_detector0110 
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
module pattern_detector0110(i,en,pst,nst,out );
input  i;
input en;
input [1:0] pst;
output [1:0]nst;
output out;
reg [1:0] nst;
reg out;
parameter a=00,b=01,c=10,d=11;
always @(posedge en)
begin
case (pst)
a:
begin
if (i==0)
begin
nst<=b;
out<=0;
end
else
begin
nst <=a;
out<=0;
end
end
b:
begin
if (i==0)
begin
nst<=b;
out<=0;
end
else
begin
nst <=c;
out<=0;
end
end
c:
begin
if (i==0)
begin
nst<=b;
out<=0;
end
else
begin
nst <=d;
out<=0;
end
end
d:
begin
if (i==0)
begin
nst<=b;
out<=1;
end
else
begin
nst<=a;
out<=0;
end
end
endcase
end
endmodule

