`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:46:20 04/23/2016 
// Design Name: 
// Module Name:    ram 
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
module ram( addr,data,cs,rd,wr,clk    );

input [9:0] addr; 
inout [7:0] data; 

input clk,rd,wr,cs; 
reg [7:0] mem[1023:0]; 
reg [7:0] dout; 

 

		assign data=(cs && rd)?dout:8'bz;



always @(posedge clk) 

	begin  
		
		if(cs && wr && !rd) 
			mem[addr]=data;
	
		if(cs && rd && !wr) 
		
			dout=mem[addr];
	end

endmodule























