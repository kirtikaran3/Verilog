`timescale 1ns / 1ps



module i2c_arb_tb;

	// Inputs
	reg clk;
	reg reset;
	reg RW;
	reg arb_control;
	reg [6:0] addr_in;
	reg [6:0] addr_in2;
	reg [7:0] data_in;
	reg [7:0] data_in2;

	// Outputs
	wire scl;
	wire sda;

	// Instantiate the Unit Under Test (UUT)
	i2c_arb arb (
		.clk(clk), 
		.reset(reset), 
		.RW(RW), 
		.arb_control(arb_control), 
		.addr_in(addr_in), 
		.addr_in2(addr_in2), 
		.data_in(data_in), 
		.data_in2(data_in2), 
		.scl(scl), 
		.sda(sda)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		RW = 0; // write 
		arb_control = 1;
		addr_in = 7'b1010101;
		addr_in2 = 7'b1010101;
		data_in= 8'b1011_1000;
		data_in2 = 8'b10111011;

		// Wait 100 ns for global reset to finish
		#10;
		reset = 0;
        
		// Add stimulus here

	end
	always #1 clk = !clk ;
      
endmodule

