`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:51:59 04/21/2016 
// Design Name: 
// Module Name:    udp 
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
primitive udp (
a, // Port a
b, // Port b
c  // Port c
);
output a;
input b,c;

// UDP function code here
// A = B | C;
table
 // B  C    : A
    ?  1    : 1;
    1  ?    : 1;
    0  0    : 0;
endtable

endprimitive
