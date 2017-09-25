`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    04:51:43 04/13/2016 
// Design Name: 
// Module Name:    sq_sum 
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
module sq_sum(in,out,en  );

input [7:0] in; 
output out; 

reg out; 
input en; 

initial
		
		begin 

			out=8'b0; 
			
		
		end

	always @(en or in) 
	
	begin  
	
			out=sqn(in);
	
	end 
	
					function automatic integer sqn; 
					
					input [7:0] in; 
					//reg [7:0] in;
					
					begin 
					
							if(in==1'b0) 
						
							begin 
							
									sqn=0;
								
							end 
							
								else 
							
									begin 
							
										sqn=^in;
									
									end
					
					end 
					
					
					
					endfunction


endmodule 

module tb_sq;
reg [7:0]in;
reg en;
wire  out;


sq_sum inst(in,out,en);

initial
	begin
		en = 1;
		forever
		 #2 in = $random;
	end

endmodule
	















