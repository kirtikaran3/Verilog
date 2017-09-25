`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:33:35 04/22/2016 
// Design Name: 
// Module Name:    switch_level_modelling_nand 
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
module switch_level_modelling_nand(out,a,b);
input a,b;
wire t;
output out;
supply0 gnd;
supply1 vdd;

pmos n0(t,vdd,a);
pmos n1(t,vdd,b);
nmos n2(out,gnd,a);
nmos n2(out,gnd,b);

endmodule
