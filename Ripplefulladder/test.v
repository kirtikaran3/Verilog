`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:11:04 03/24/2016 
// Design Name: 
// Module Name:    test 
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
module test(a,b,cin,cout,sum );

input a,b,cin; 
output cout,sum; 

wire s1,c1,s2; 

		assign s1 = a ^ b; 
		assign c1 = a & b; 
		assign sum = cin ^ s1;
		assign s2 = s1 & cin; 
		assign cout = c1 ^ s2;


endmodule

module fulladder(a,b,cin,cout,sum);

input [3:0] a,b; 
input cin;  
wire c1,c2,c3;
output [3:0] sum; 
output cout;

	test fulladder1(a[0],b[0],cin,c1,sum[0]); 
	test fulladder2(a[1],b[1],c1,c2,sum[1]); 
	test fulladder3(a[2],b[2],c2,c3,sum[2]); 
	test fulladder4(a[3],b[3],c3,cout,sum[3]);

endmodule 

module stimulus; 

reg [3:0] a,b; 
reg cin; 
wire [3:0] sum; 
wire cout; 

				fulladder testting(a,b,cin,cout,sum);
				initial 

				begin  
						$monitor($time,"a=%b,b=%b,cin=%b,sum=%b,cout=%b",a,b,cin,sum,cout);  
						$display($time,"a=%b,b=%b,cin=%b,sum=%b,cout=%b",a,b,cin,sum,cout);
						
				end  
				
							initial 
							begin
							a=4'b0000; b=4'b0000; cin=1'b0; 
							
							#5 a=4'b0011; b=4'b0011;cin=1'b1;  
							#5 a=4'b1010; b=4'b0000;cin=1'b0;
							#5 a=4'd0101; b=4'b0001;cin=1'b0;
							#5 a=4'b1110; b=4'b0001; cin=4'b0;
							
							end 

endmodule
































