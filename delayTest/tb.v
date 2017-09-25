`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:04:15 02/28/2017
// Design Name:   delayTest
// Module Name:   C:/Users/Kirti/Documents/verilog/delayTest/tb.v
// Project Name:  delayTest
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: delayTest
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
	reg [3:0] in;
	reg clk;

	// Outputs
	wire [3:0] out1; 
	wire [3:0] out2;

	// Instantiate the Unit Under Test (UUT)
	delayTest uut (
		.in(in), 
		.out1(out1),.out2(out2), 
		.clk(clk)
	); 
	
	always 
	#5 clk = ~clk;

	initial begin
		// Initialize Inputs
		in = 2;
		clk = 0;

		// Wait 100 ns for global reset to finish
		
        
		// Add stimulus here 
		
		#5 in = 3; 
		#5 in = 1; 
		#5 in = 4; 
		#5 in = 2;
		
	end
      
endmodule

