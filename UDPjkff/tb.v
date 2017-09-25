`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   03:01:24 01/29/2017
// Design Name:   jkff
// Module Name:   C:/Users/Kirti/Documents/verilog/UDPjkff/tb.v
// Project Name:  UDPjkff
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: jkff
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

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	jkff uut (
		.j(j), 
		.k(k), 
		.out(out), 
		.clk(clk)
	);

	always  
	#5 clk = ~clk;

	initial begin
		// Initialize Inputs
		j = 0;
		k = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here 
		
		#5 {j,k} = 2'b01; 
		#5 {j,k} = 2'b10; 
		#5 {j,k} = 2'b00; 
		#5 {j,k} = 2'b11;

	end
      
endmodule

