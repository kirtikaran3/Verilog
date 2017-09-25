`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:53:49 02/02/2017
// Design Name:   andT
// Module Name:   C:/Users/Kirti/Documents/verilog/andNew/tb.v
// Project Name:  andNew
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: andT
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
	andT uut (
		.in(in), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		in = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		
		$monitor($time," : inputs are in %b ",in," : Output is %b ",out);
		
		#5 in = 3'b000;
		#5 in = 3'b001; 
		#5 in = 3'b010;
		#5 in = 3'b011;
		#5 in = 3'b100; 
		#5 in = 3'b101; 
		#5 in = 3'b111;
		
	end
      
endmodule

