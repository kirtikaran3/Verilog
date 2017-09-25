`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   07:44:45 11/19/2016
// Design Name:   delay1
// Module Name:   C:/Users/Kirti Karan/Documents/verilog/delay1/delay.v
// Project Name:  delay1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: delay1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module delay;

	// Inputs
	reg a;

	// Outputs
	wire b;

	// Instantiate the Unit Under Test (UUT)
	delay1 uut (
		.a(a), 
		.b(b)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here 
		
		#1 a=1; 
		#2 a=0; 
		#3 a=1; 
		#5 a=0; 
		#6 a=1; 
		#8 a=0; 
		
		$monitor($time, "a=%d", a, "b=%d" ,b);
		
	end 
	
      
endmodule

