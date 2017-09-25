`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:07:38 03/25/2017
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
	reg [2:0] in;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	test uut (
		.in(in), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		in = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here 
		
		#5 in = 3'b000; 
		#15 in = 3'b001; 
		#25 in = 3'b111; 
		#5 in = 3'b101;

	end
      
endmodule

