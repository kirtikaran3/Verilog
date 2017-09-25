`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:34:12 02/14/2017
// Design Name:   allgates
// Module Name:   C:/Users/Kirti/Documents/verilog/PTUVLSI/allgates/tb.v
// Project Name:  allgates
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: allgates
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
	allgates uut (
		.in(in), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		in = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		$monitor($time, "  : inputs are %b",in,"  : outputs are %b",out);
		#5	in = 4'b0000; 
		#5 in = 4'b0001; 
		#5 in = 4'b1010; 
		#5 in = 4'b1111;
			
	end
      
endmodule

