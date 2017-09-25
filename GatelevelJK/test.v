`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:38:53 01/21/2017
// Design Name:   jkff
// Module Name:   C:/Users/Kirti/Documents/verilog/GatelevelJK/test.v
// Project Name:  GatelevelJK
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: jkff
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg j;
	reg k;
	reg clk;
	reg cl;

	// Outputs
	wire q;
	wire qb;

	// Instantiate the Unit Under Test (UUT)
	jkff uut (
		.j(j), 
		.k(k), 
		.clk(clk), 
		.cl(cl), 
		.q(q), 
		.qb(qb)
	); 
	
	always  
	#5 clk = ~clk;

	initial begin
		// Initialize Inputs
		j = 0;
		k = 0;
		clk = 0;
		cl = 0; 
		 

		// Wait 100 ns for global reset to finish
		#100;
        j=1; 
		  k=1;
		// Add stimulus here

	end
      
endmodule

