`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:55:32 04/13/2016 
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
module sq_sum(in,out,en  );



input [7:0] in; 

output out; 


reg  out; 

input en; 

	


always @(en,in) 
	
begin  
			
out = sqn(in);
	
end 
	


function sqn; 

 input [7:0]in; 
	
begin 
		
sqn = ^in;
	
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
		

