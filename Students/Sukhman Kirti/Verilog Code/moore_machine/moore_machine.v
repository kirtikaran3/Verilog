`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:22:30 04/21/2016 
// Design Name: 
// Module Name:    moore_machine 
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
module moore_machine(en,in,pst,nst,out);
input en,in;
input [2:0] pst;
output [2:0]nst;
output out;
reg [2:0] nst;
reg out;
parameter a=001,b=010,c=100,d=110,e=111;
always @(en)
begin
case (pst)
a:
begin
out<=0;
if (in==0)
nst<=a;
else
nst <=b;
end

b:
begin
out<=0;
if (in==0)
nst<=b;
else
nst <=c;
end

c:
begin
out<=1;
if (in==0)
nst<=d;
else
nst <=e;
end

d:
begin
out<=0;
if (in==0)
nst<=d;
else
nst <=a;
end


e:
begin
out<=1;
if (in==0)
nst<=e;
else
nst <=d;
end

endcase
end
endmodule

