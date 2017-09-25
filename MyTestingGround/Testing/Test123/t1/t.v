`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:33:23 12/21/2016
// Design Name:   andgate
// Module Name:   C:/Users/Kirti/Documents/verilog/test123/t1/t.v
// Project Name:  t1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: andgate
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module t;

	// Inputs
	reg in0;
	reg in1;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	andgate uut (
		.in0(in0), 
		.in1(in1), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		in0 = 0;
		in1 = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here 
		$display("value of out = %b",out,"Value of a=%b",in0,"Value of b=%b",in1);
		
		#5 {in0,in1}=2'b11;  
		$display("value of out = %b",out,"Value of a=%b",in0,"Value of b=%b",in1);
		#5 {in0,in1}=2'b00;  
		$display("value of out = %b",out,"Value of a=%b",in0,"Value of b=%b",in1);
		

	end
      
endmodule

