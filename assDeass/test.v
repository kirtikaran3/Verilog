`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:28:57 01/21/2017
// Design Name:   ass
// Module Name:   C:/Users/Kirti/Documents/verilog/assDeass/test.v
// Project Name:  assDeass
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ass
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
	reg in;
	reg clk;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	ass uut (
		.in(in), 
		.out(out), 
		.clk(clk)
	); 
	
	always  
	#5 clk = ~clk;

	initial begin
		// Initialize Inputs
		in = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		  #5 in = 1; 
		  #1 in = 0; 
			#1 in = 1;
		  #4 in = 0;
		  
		// Add stimulus here

	end
      
endmodule

