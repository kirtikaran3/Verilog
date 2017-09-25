`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:53:52 02/08/2017
// Design Name:   andTest
// Module Name:   C:/Users/Kirti/Documents/verilog/PTUVLSI/andTest/tb.v
// Project Name:  andTest
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: andTest
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

	// Outputs
	wire [1:0] out;

	// Instantiate the Unit Under Test (UUT)
	andTest uut (
		.in(in), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		in = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
	#5 in = 4'b0000; 
	#5 in = 4'b0001; 
	#5 in = 4'b1010; 
	#5 in = 4'b1111; 



	end
      
endmodule

