`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:25:45 04/14/2017 
// Design Name: 
// Module Name:    sev_check 
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
module sev_check(
	input reset , arb_control,clk,RW,
    output reg[6:0] cathode,
    output reg[4:0] anode
    );

//   assign anode = 4'b1110;
//	assign cathode = 7'b1111001;


reg [6:0] A = 7'b1000101;
reg [7:0] D = 8'b01100111;
reg [6:0] C = 7'b0000001;
reg [7:0] E = 8'b00100011;
reg [1:0] ab ;
reg [9:0] count1 = 0;
reg clk_div= 0;

  always @ (posedge clk)
        if (count1 <500)
				count1 = count1 +1;
		  else
				begin		  
				count1 = 0;
				clk_div = !clk_div;
				end 
	always @(posedge clk_div)
	   if (ab <3)
			ab = ab +1;
			else 
			ab = 0;
			
   always @( ab)
		if (reset == 1)
			anode = 4'b1111;
		else
		  if (arb_control == 0)
			begin
			case (ab)
			 0: begin 
			    anode = 4'b1110;
				case(A[6:4])
			 0: cathode<=7'b0000001;
			 1: cathode<=7'b1001111;
			 2: cathode<=7'b0010010;
			 3: cathode<=7'b0000110;
			 4: cathode<=7'b1001100;
			 5: cathode<=7'b0100100; 
			 6: cathode<=7'b0100000;
			 7: cathode<=7'b0001111;
			 default : cathode <= 7'b1111111;
	         endcase 
			end 
			1:  begin 
				anode = 4'b1101;
					case(A[3:0])
			 0: cathode<=7'b0000001;
			 1: cathode<=7'b1001111;
			 2: cathode<=7'b0010010;
			 3: cathode<=7'b0000110;
			 4: cathode<=7'b1001100;
			 5: cathode<=7'b0100100; 
			 6: cathode<=7'b0100000;
			 7: cathode<=7'b0001111;
			 default : cathode <= 7'b1111111;
	         endcase 
			end 
			2: begin 
				anode = 4'b1011;
					case(D[7:4])
			 0: cathode<=7'b0000001;
			 1: cathode<=7'b1001111;
			 2: cathode<=7'b0010010;
			 3: cathode<=7'b0000110;
			 4: cathode<=7'b1001100;
			 5: cathode<=7'b0100100; 
			 6: cathode<=7'b0100000;
			 7: cathode<=7'b0001111;
			 default : cathode <= 7'b1111111;
	         endcase 
			end 
			3: begin 
				anode = 4'b0111;
					case(D[3:0])
			 0: cathode<=7'b0000001;
			 1: cathode<=7'b1001111;
			 2: cathode<=7'b0010010;
			 3: cathode<=7'b0000110;
			 4: cathode<=7'b1001100;
			 5: cathode<=7'b0100100; 
			 6: cathode<=7'b0100000;
			 7: cathode<=7'b0001111;
			 default : cathode <= 7'b1111111;
	         endcase 
			end 
			endcase
			end 
		else 
			begin
			case (ab)
			 0: begin 
			    anode = 4'b1110;
				case(C[6:4])
			 0: cathode<=7'b0000001;
			 1: cathode<=7'b1001111;
			 2: cathode<=7'b0010010;
			 3: cathode<=7'b0000110;
			 4: cathode<=7'b1001100;
			 5: cathode<=7'b0100100; 
			 6: cathode<=7'b0100000;
			 7: cathode<=7'b0001111;
			 default : cathode <= 7'b1111111;
	         endcase 
			end 
			1:  begin 
				anode = 4'b1101;
					case(C[3:0])
			 0: cathode<=7'b0000001;
			 1: cathode<=7'b1001111;
			 2: cathode<=7'b0010010;
			 3: cathode<=7'b0000110;
			 4: cathode<=7'b1001100;
			 5: cathode<=7'b0100100; 
			 6: cathode<=7'b0100000;
			 7: cathode<=7'b0001111;
			 default : cathode <= 7'b1111111;
	         endcase 
			end 
			2: begin 
				anode = 4'b1011;
					case(E[7:4])
			 0: cathode<=7'b0000001;
			 1: cathode<=7'b1001111;
			 2: cathode<=7'b0010010;
			 3: cathode<=7'b0000110;
			 4: cathode<=7'b1001100;
			 5: cathode<=7'b0100100; 
			 6: cathode<=7'b0100000;
			 7: cathode<=7'b0001111;
			 default : cathode <= 7'b1111111;
	         endcase 
			end 
			3: begin 
				anode = 4'b0111;
					case(E[3:0])
			 0: cathode<=7'b0000001;
			 1: cathode<=7'b1001111;
			 2: cathode<=7'b0010010;
			 3: cathode<=7'b0000110;
			 4: cathode<=7'b1001100;
			 5: cathode<=7'b0100100; 
			 6: cathode<=7'b0100000;
			 7: cathode<=7'b0001111;
			 default : cathode <= 7'b1111111;
	         endcase 
			end 
			endcase
			end 
endmodule
