`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:37:36 04/22/2016 
// Design Name: 
// Module Name:    test_udp 
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
module shift( clk,rst,datain,dataout     );

input clk,rst,datain; 

output [3:0] dataout; 
wire [3:0]  wireout; 

assign dataout[3]=wireout[3]; 
assign wireout[0]=datain;

genvar i; 
generate 

for(i=0;i<3;i=i+1) 

		begin 

			dff d_ff(clk,rst,wireout[i],wireout[i+1]);

		end  
		

endgenerate 


endmodule 

module dff(clk,rst,in,out); 

input clk,rst,in; 
output out; 

reg out; 
 

always @(posedge clk) 

begin 

	if(rst) 
	
	begin 
	
		out=1'b0;
	
	end 
	
	else  
	
	begin 
	
		out=in;
	
	end

end



endmodule























