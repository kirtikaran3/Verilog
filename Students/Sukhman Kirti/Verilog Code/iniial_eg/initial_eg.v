`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:59:19 03/31/2016 
// Design Name: 
// Module Name:    initial_eg 
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
module initial_eg(a,b,q,t,x,y,p,r );
input a,b,q,t;
output x,y,p,r;
reg x,y,p,r;
initial
begin
x=a;
#1000 y=b;
end
initial
begin
p=q;
#1000 r=t;
end
endmodule
