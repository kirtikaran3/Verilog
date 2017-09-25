`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:13:48 04/13/2017 
// Design Name: 
// Module Name:    LCD 
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
module lcd(rs,rw,en,db,clk);
	input clk;
	output reg rs,rw,en;
	output reg [7:0] db;
	reg [23:0] count;
	reg [2:0] state,w;
	reg [9:0] c;
	initial
	begin
		c=0;
		w=0;
		state=0;
		count=0;
	end
	always @(posedge clk)
	begin
		if(count==9999999)
		begin
			count=0;
			en=0;
		end
		else
		begin
			count=count+1;
			en=1;
		end
	end
	
	always @(posedge en)
	begin
		case (state)
		3'b000: begin
					rs=0;
					rw=0;
					db=8'b0011_0100;
					state=3'b001;
					end
		3'b001: begin
					rs=0;
					rw=0;
					db=8'b0000_0001;
					state=3'b010;
					end
		3'b010: begin
					rs=0;
					rw=0;
					db=8'b0000_1110;
					state=3'b011;
					end
		3'b011: begin
					rs=0;
					rw=0;
					db=8'b0000_0111;
					state=3'b100;
					end
		3'b100: begin
					rs=1;
					rw=0;
					w=w+1;
					case (w)
			
					3'b001: db=8'b0100_1101; //M
				
					3'b010: db=8'b0100_0001; // A
				
					3'b011: db=8'b0101_0011; // S
				
					3'b100: db=8'b0101_0100;  // T
				
					3'b101: db=8'b0100_0101;  // E
					3'b110: db=8'b0101_0010;   // R

					3'b111: begin 
					//			db=8'b0110_1010; // j
								db=8'b0011_0001;  // 1
								state=3'b101;
							end
					endcase
					end
		3'b101: begin
					c=0;
					rs=0;
					rw=0;
				//	db=8'b0001_1100;
					db=8'b0000_0010;
					state=3'b101;
					end
		3'b110: begin
					rs=0;
					rw=0;
					db=8'b0000_0010;
					state=3'b101;
					end
			endcase		
	end
								
					
			
endmodule
