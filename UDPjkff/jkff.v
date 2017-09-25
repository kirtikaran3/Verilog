`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:51:33 01/29/2017 
// Design Name: 
// Module Name:    jkff 
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
module jkff(
j,k,out,clk    );

input j,k,clk; 
output out;

jkff_udp jk(out,clk,j,k);

endmodule


primitive jkff_udp (q,clk,j,k);
	input clk,j,k;
	output q;
	reg q;

initial 
	q = 0;
	table
		// clk j k : q : q+
		    r  0 0 : ? : - ;
		    r  0 1 : ? : 0 ;
		    r  1 0 : ? : 1 ;
		    r  1 1 : 0 : 1 ;
		    r  1 1 : 1 : 0 ;
		    f  ? ? : ? : - ;
		    ?  * ? : ? : - ;
		    ?  ? * : ? : - ;
	endtable
endprimitive