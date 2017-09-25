`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:54:13 04/02/2016 
// Design Name: 
// Module Name:    tasktest 
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
module tasktest(    );
//input a,b;
reg a,b; 
//reg ab_or,ab_and,ab_xor;
reg ab_or,ab_and,ab_xor; 

always @(a or b) 

			begin  

				bitwiseop(ab_or,ab_and,ab_xor,a,b);

			end 

 

task bitwiseop; 

input a,b;  
output ab_or,ab_and,ab_xor; 
begin
		ab_or=a|b; 
	#50 ab_and=a&b; 
	#50 ab_xor=a^b;

end

endtask


endmodule




















