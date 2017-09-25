`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:14:56 04/22/2016 
// Design Name: 
// Module Name:    swtch_level_modelling_not 
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
module swtch_level_modelling_not(out,in);
input in;
output out;
supply0 gnd;
supply1 vdd;

nmos n1(out,gnd,in);
pmos n2(out,vdd,in);

endmodule
