`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:07:37 01/28/2017 
// Design Name: 
// Module Name:    andtest 
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
module andtest(
  a,b,o  );

input a,b; 
output o; 


andgate(o,a,b);

endmodule

primitive andgate(out,in2,in1);

output out; 
input in2,in1; 

table  

	0	0	:	0; 
	0	1	:	0; 
	1	0	:	0; 
	1	1	:	1;


endtable


endprimitive 