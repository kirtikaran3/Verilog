`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   07:16:41 11/05/2016
// Design Name:   ha
// Module Name:   C:/Users/Kirti Karan/Documents/verilog/ha/tb_ha.v
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

module tb_ha;

	// Inputs
	reg [3:0] in;
	reg [1:0] select;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	ha uut (
		.in(in), 
		.out(out), 
		.select(select)
	);

	initial begin
		// Initialize Inputs
		in = 0;
		select = 0; 
		
		#10 {select[0],select[0]} = 2'b00; 
		#10 {select[1],select[0]} = 2'b00; 
		#10 {select[0],select[1]} = 2'b00; 
		#10 {select[1],select[1]} = 2'b00;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

