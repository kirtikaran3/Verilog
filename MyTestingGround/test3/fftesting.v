`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:35:49 04/08/2016 
// Design Name: 
// Module Name:    fftesting 
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
module fftesting(j,k,q,qbar,clk); 


input j,k,clk; 
output q,qbar; 

reg q,qbar;  

initial  

begin 

q=0; 
qbar=0;

end

always @(posedge clk) 

			begin  

				case({j,k}) 
				
					{1'b0,1'b0}:  
						
						begin 
						
							q=j; 
							qbar=k;
						end
					
					{1'b0,1'b1}:  
						
						begin 
						
							q=1'b0; 
							qbar=1'b1;
						end
					
					{1'b1,1'b0}:  
						
						begin 
						
							q=1'b1; 
							qbar=1'b0;
						end
					{1'b1,1'b1}:  
						
						begin 
						
							q=~q; 
							qbar=~qbar;
						end
					
				endcase	

			end 

endmodule 

module stimulus; 

	wire q,qbar; 
	reg j,k,clk; 

	fftesting ff(j,k,q,qbar,clk);
		initial  
		
			begin  
			$monitor($time,"j=%b,k=%b,q=%b,qbar=%b",j,k,q,qbar);
			$display($time,"j=%b,k=%b,q=%b,qbar=%b",j,k,q,qbar);
			end 
			
			initial 
			begin 
			
				forever 
				
					begin
				
					//begin 
				
						clk=0; 
						#5 clk=1; 
						#5 clk=0;
				
						
					end 
					
			end
				initial				
					
					begin 
					
						#5 j=1'b0;k=1'b0; 
						#5 j=1'b0;k=1'b1;
						#5 j=1'b1;k=1'b0;
					   #5 j=1'b1;k=1'b1;
						
					end
				


endmodule






















