`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:26:53 04/09/2016 
// Design Name: 
// Module Name:    parallelblock 
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
module parallelblock(a,b,c,out1,out2);

input a,b,c; 
output out1,out2; 
reg out1,out2;
	
	initial
			
			fork 
	
			#5	out1=a&b; 
			#5	out2=a&c;
			
			join

endmodule

module stimul;  

reg a,b,c; 
wire out1,out2; 

		parallelblock pb(a,b,c,out1,out2);
			initial 

			begin  
			
     			$display($time,"a=%b,b=%b,c=%b,out1=%b,out2=%b",a,b,c,out1,out2); 
				$monitor($time,"a=%b,b=%b,c=%b,out1=%b,out2=%b",a,b,c,out1,out2); 
								
			end 
			
			initial  
			begin 
			
				 a=1'b0;b=1'b0;c=1'b0; 
			    a=1'b1;b=1'b0;c=1'b1; 
			    a=1'b0;b=1'b1;c=1'b0; 
			    a=1'b1;b=1'b1;c=1'b1;
				
			end


endmodule





















