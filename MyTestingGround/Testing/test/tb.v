`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:23:11 02/20/2017
// Design Name:   test
// Module Name:   C:/Users/Kirti/Documents/verilog/test/tb.v
// Project Name:  test
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: test
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
	reg in;
	reg clk;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	test uut (
		.in(in), 
		.out(out), 
		.clk(clk)
	); 

	always  
	#5 clk = ~clk;

	initial begin
		// Initialize Inputs
		in = 0;
		clk = 1;
		
		// Wait 100 ns for global reset to finish
		
        #8
		// Add stimulus here
		#1 in=0; 
		#1 in=1;
		#1 in=0; 
		#1 in=1;
      #1 in=0; 
		#1 in=1;


	end
      
endmodule

