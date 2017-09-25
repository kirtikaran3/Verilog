`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:43:58 04/21/2016 
// Design Name: 
// Module Name:    melay_machine 
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
module melay_machine(en,in,pst,nst,out );
input en,in;
input [2:0] pst;
output [2:0]nst;
output out;
reg [2:0] nst;
reg out;
parameter a=001,b=010,c=100,d=110;
always @(en)
begin
case (pst)
a:
begin
if (in==0)
begin
nst<=a;
out<=0;
end
else
begin
nst <=b;
out<=1;
end
end
b:
begin
if (in==0)
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
if (in==0)
begin
nst<=b;
out<=1;
end
else
begin
nst <=c;
out<=0;
end
end
d:
begin
if (in==0)
begin
nst<=c;
out<=0;
end
else
begin
nst <=a;
out<=1;
end
end
endcase
end
endmodule
