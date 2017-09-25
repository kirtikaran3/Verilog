`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:47:35 04/22/2016 
// Design Name: 
// Module Name:    switch_not 
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
module switch_not( in,out    );

input in; 
output out; 


supply0 gnd; 
supply1 vdd; 

nmos(out,gnd,in);
pmos(out,vdd,in);

endmodule






















