`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   06:48:08 11/05/2016
// Design Name:   ha
// Module Name:   C:/Users/Kirti Karan/Documents/verilog/ha/ha_tb.v
// Project Name:  ha
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ha
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ha_tb;

	// Inputs
	reg [1:0] in;

	// Outputs
	wire sum;
	wire carry;

	// Instantiate the Unit Under Test (UUT)
	ha uut (
		.in(in), 
		.sum(sum), 
		.carry(carry)
	);

	initial begin
		// Initialize Inputs
		in = 0; 
		
		#10 {in[0],in[1]} = 2'b00; 
		#10 {in[0],in[1]} = 2'b01;  
		#10 {in[0],in[1]} = 2'b10; 
		#10 {in[0],in[1]} = 2'b11; 
		

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

