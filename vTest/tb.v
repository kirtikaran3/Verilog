`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   05:19:08 04/14/2017
// Design Name:   test
// Module Name:   C:/Users/Kirti/Documents/verilog/vTest/tb.v
// Project Name:  vTest
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
	reg clk;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	test uut (
		.clk(clk), 
		.out(out)
	); 
	
	always 
	#5 clk = ~clk;

	initial begin
		// Initialize Inputs

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here 
		
	
	end
      
endmodule

