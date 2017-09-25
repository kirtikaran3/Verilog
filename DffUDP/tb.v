`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:03:37 03/08/2017
// Design Name:   dffUDP
// Module Name:   C:/Users/Kirti/Documents/verilog/DffUDP/tb.v
// Project Name:  DffUDP
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: dffUDP
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
	dffUDP uut (
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
        
		// Add stimulus here

	#5 in = 1; 
	#5 in = 0; 
	#5 in = 1; 
	#5 in = 0;

	end
      
endmodule

