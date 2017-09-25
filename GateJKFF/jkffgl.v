`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:05:30 01/29/2017 
// Design Name: 
// Module Name:    jkffgl 
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
module jkffgl(j,k,clk,cl,q,qb);
input j,k,clk;
input cl;
output
q,qb;
wire j1,k1,j2,k2,clk2,q1b,q2b; 
wire q1=0,q2=0;
not n(clk2,clk);
nand n1(j1,j,clk,qb2,cl);
nand n2(k1,k,clk,q2);
nand n3(q1,j1,qb1);
nand n4(qb1,k1,q1);
nand n5(j2,q1,clk2);
nand n6(k2,qb1,clk2);
nand n7(q2,j2,qb2);
nand n8(qb2,k2,q2,cl);
assign q=q2;
assign qb=qb2;
endmodule
