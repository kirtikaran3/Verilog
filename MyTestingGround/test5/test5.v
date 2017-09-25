`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    04:29:33 04/15/2016 
// Design Name: 
// Module Name:    test5 
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
module test5(   s,c,a,b    );

input a,b; 
output s,c; 

parameter d1=1,d2=2,d3=3,d4=4; 

and #(d1,d2) carry(c,a,b); 
xor #(d3,d4) sum(s,a,b);

endmodule

module test_ha; 

reg a,b; 
wire s,c; 

defparam ha_test.d1=4,ha_test.d2=3,ha_test.d3=2,ha_test.d4=1;

test5  ha_test(s,c,a,b); 


initial 

			begin 

					a=0; 
					b=0;

			end  
			
initial  
			begin  
			
			$monitor($time,"a=%b,b=%b,c=%b,s=%b",a,b,c,s);
			
			end 

initial  
			begin 
			
			#5  a=0;b=0;
			#5  a=0;b=1;
			#5  a=1;b=0;
			#5  a=1;b=1;
			
			end 
endmodule
