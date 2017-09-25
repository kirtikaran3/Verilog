`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:30:13 04/08/2016 
// Design Name: 
// Module Name:    testing 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module testing(  a,b,out );

input a,b; 
output out; 

assign out=a&b;


endmodule 


module stimls; 

	reg a,b; 
	wire out; 
	
	testing test(a,b,out); 
	
	initial  

		begin 
			$display($time,"a=%b,b=%b,out=%b",a,b,out); 
			$monitor($time,"a=%b,b=%b,out=%b",a,b,out);
		end 
		
		initial  
		
				begin 
				
				#5 a=1'b0;b=1'b0; 
				#5 a=1'b0;b=1'b1; 
				#5 a=1'b1;b=1'b0; 
				#5 a=1'b1;b=1'b1;
					
				end

endmodule






















