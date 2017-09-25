`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   03:05:46 01/29/2017
// Design Name:   jkffgl
// Module Name:   C:/Users/Kirti/Documents/verilog/GateJKFF/tb.v
// Project Name:  GateJKFF
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: jkffgl
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb;

	// Inputs
	reg j;
	reg k;
	reg clk;
	reg cl;

	// Outputs
	wire q;
	wire qb;

	// Instantiate the Unit Under Test (UUT)
	jkffgl uut (
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
        
		// Add stimulus here 
		
		#5 {j,k} = 2'b01; 
		#5 {j,k} = 2'b10; 
		#5 {j,k} = 2'b00; 
		#5 {j,k} = 2'b11;

	end
      
endmodule

