`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:17:03 04/21/2016 
// Design Name: 
// Module Name:    pattern_detector1100 
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
module pattern_detector1100(i,en,pst,nst,out );
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
nst<=a;
out<=0;
end
else
begin
nst <=b;
out<=0;
end
end
b:
begin
if (i==0)
begin
nst<=a;
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
nst<=d;
out<=0;
end
else
begin
nst <=c;
out<=0;
end
end
d:
begin
if (i==0)
begin
nst<=a;
out<=1;
end
else
begin
nst<=b;
out<=0;
end
end
endcase
end
endmodule

/*pattern_detector1100 testbench;
reg [7:0] i;
reg en;
reg[1:0] pst;
wire [1:0]nst;
wire out;

pattern_detector1100 n1(en,pst,i,nst,out);

initial
begin
$monitor($time,"out=%b,nst=%b,pst=%b,i=%b,en=%b" , out,nst,pst,i,en);
end

initial
begin
forever
en=1'b1; 
pst=1'b00;
#5 en=1'b0;
end
endmodule*/
