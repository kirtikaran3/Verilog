`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    05:04:44 04/12/2016 
// Design Name: 
// Module Name:    parity 
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
module parity(in,out,en);


input [7:0] in; 
input en; 
output out;  
reg out; 

always @(posedge en) 

				begin 
 
					out=pb(in);
				
				end

					function pb;  

						input [7:0] in; 
	
						pb=^in;

					endfunction


endmodule


module parity_test; 

	reg [7:0] in; 
	reg en; 
	wire out;
	integer  i; 
	
	parity paritychk(in,out,en); 
	
	initial  
	
	begin  
		in=8'b0;
		en=1'b0;
	end
		always  
		begin
			
			#2 en=~en;
	
		end 
		
		initial  
		
		begin 
		
			$monitor($time,"in=%b,out=%b,en=%b",in,out,en);
		
		end
	
	initial  
	
			begin  
	
				
				
				for(i=0;i<8;i=i+1)  
				begin 
				
					in={in+4'b0110};
				
				end
	
			end

		initial 
		
		begin 
			
			#50 $stop;
			
		end

endmodule





















