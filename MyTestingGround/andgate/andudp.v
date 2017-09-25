`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:02:39 04/22/2016 
// Design Name: 
// Module Name:    andudp 
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
primitive andudp(out,a,b );

output out; 

input a,b; 
 

table  

//  in[1]	in[0]	out 
		0			0:		0; 
		0			1:		1; 
		1			0:		0; 
		1			1:		1;


endtable

endprimitive








