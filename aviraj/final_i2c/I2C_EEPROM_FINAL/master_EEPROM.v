`timescale 1ns / 1ps

module MASTER_EEPROM(
							input clk,
							input reset,
							
					///////   MASTER 1 PORT ///////////
							input RW,
							output reg i2c_sda,
							output  i2c_scl,
				
								
							output reg rs,rw1,en,
							output reg [7:0] db,
							//////////////////////////////////
							
							output reg [6:0] LED_ADDR,
							output reg [6:0] SEVEN_ADDR,
							output reg [7:0] SEVEN_DATA,
							output reg [3:0] anode,
							output reg [6:0] cathode);

							// MASTER 1 PARAMETER 
						  localparam STATE_IDLE  = 0;
						  localparam STATE_START = 1;
						  localparam STATE_ADDR  = 2;
						  localparam STATE_RW    = 3;
						  localparam STATE_ACK   = 4;
						  localparam STATE_DATA  = 5;
						  localparam STATE_STOP  = 6;
						  localparam STATE_WACK2 = 7;
						  localparam STATE_WRITE = 8;
						  localparam STATE_READ  = 9;
																	  
						 ////////////   MASTER1 REGISTOR DECLARE //////////
							reg [7:0] state  ;
							reg [6:0] addr ;
							reg [7:0] count ;
							reg [7:0] data;
							reg 		 i2c_scl_enable;
						//	reg [6:0] save_add;
						//	reg [7:0] save_data;
							reg [7:0] slave_data_read;
							reg [6:0] sev_seg_add;
							reg [7:0] sev_seg_data;
						
						////////////////////////////////////								
						reg [6:0] A;
						reg [7:0] D;
						
						reg [1:0] ab ;
						reg [9:0] count1 = 0;
						reg clk_div= 0;			
					/////////////////////////////////////
						
						reg [23:0] count3 =0;
						reg [2:0] state_lcd =0;
						reg  [3:0]w = 0;
						reg clk1 =0;
						reg [8:0] clk_count =0; 
												
					//////////////////////////////////////////////////////////////////
					////////////MASTER1 SCL /////////////////////////

						assign i2c_scl = (i2c_scl_enable == 0) ? 1:~clk1;
						always @(posedge clk1 ) begin 
							if (reset ==1)
								i2c_scl_enable <= 0;
							else 
							begin 
							if ((state == STATE_IDLE)|| (state == STATE_START)||(state == STATE_STOP))
								i2c_scl_enable <= 0;
							else 
								//i2c_scl_enable = ~i2c_scl_enable;
								i2c_scl_enable <= 1;
						end 
					end 

					
					//////////////////////////////////////////////////////////
					//////////////////////////////////////////////////
					initial anode = 4'b0000;
					always @(posedge clk)
					        if (clk_count < 63)
							      clk_count = clk_count +1 ;
							  else
									begin 
									 clk_count = 0;
									 clk1		  = !clk1;
									 end 
									 
									 
					  always @(posedge clk1 )begin 
							if (reset == 1) begin 
						  
						  i2c_sda = 1;		
						  addr    		= 7'h35;
						  count   		= 8'd0;
						  data    		= 8'h35;
						  state  		= STATE_IDLE;
						  LED_ADDR     = 7'b0000000;
						//  anode = 4'b1111;
					end 
						 else  
						  begin   ////MASTER1  SECLECT
							 case (state)

						 STATE_IDLE : begin 
									i2c_sda = 1;
								//	 i2c_scl_enable <= 0;
									state  = STATE_START;
									 end 
						 STATE_START: begin 
								  i2c_sda = 0;
									count  = 6;
									state= STATE_ADDR;
								  end
						 STATE_ADDR : begin 
								  i2c_sda = addr[count];
							//	  save_add[count] = i2c_sda;
								  sev_seg_add[count] = i2c_sda;
							if (count == 0)
								state= STATE_RW;
							//	state = STATE_ACK ;
							else 
								count = count -1;
								  end 
						 

						 STATE_RW  : begin 
										  if (RW == 0)
											 begin 
										  i2c_sda = 1;
											
										  state   = STATE_ACK;
												end		  
										  else if (RW == 1) begin 
											i2c_sda = 1 ;
											count   =7 ;
											state = STATE_READ;
										end 
								  end 
						 STATE_ACK : if (count == 0)
											if (RW == 0)
											begin 
											i2c_sda = 0;
											count   = 7;
											state = STATE_WRITE;
											end
										 else if( RW == 1) begin
												i2c_sda = 0;
												count   = 7;
											  state = STATE_READ;
											  end 
										else 
											 state = STATE_IDLE;
											
						 STATE_WRITE : begin 
										  i2c_sda = data[count];
								//		  save_data[count] = i2c_sda;
										  sev_seg_data[count] = i2c_sda;
												if (count ==0)
													state= STATE_WACK2;
												else 
													count = count -1;
											end
						 STATE_READ  : begin
												slave_data_read [count] = i2c_sda;
												if (count == 0)
													state = STATE_WACK2;
												else 
												 count = count -1 ;
											end 
						 STATE_WACK2 : begin 
												i2c_sda = 0;
											  state= STATE_STOP;
									 end 
						 STATE_STOP  : begin 
											i2c_sda =1;
											SEVEN_DATA = sev_seg_data;
											LED_ADDR   = sev_seg_add;
											SEVEN_ADDR = sev_seg_add;
											A			  = sev_seg_add;
											D			  = sev_seg_data;
//											 cathode     =  7'b1111001;
//											anode = 4'b110;
											end 
						 default     : state = STATE_IDLE;
						 
						 endcase
						// state = state ;
						 
						end 
					end 
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////  SEVEN SEGMENT CODE ///////////////////////////////////

always @ (posedge clk1)
        if (count1 <50)
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
			
   always @( ab, reset,A,D)
		if (reset == 1)
			anode = 4'b1111;
		else
		  
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
			 8: cathode<=7'b0000000;
			 9: cathode<=7'b0000000;
			10: cathode<=7'b0000100;
		   11: cathode<=7'b0001000;
			12: cathode<=7'b1100000;
			13: cathode<=7'b0110001;
			14: cathode<=7'b1110000;
			15: cathode<=7'b0111000;
			 
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
			 8: cathode<=7'b0000000;
			 9: cathode<=7'b0000000;
			10: cathode<=7'b0000100;
		   11: cathode<=7'b0001000;
			12: cathode<=7'b1100000;
			13: cathode<=7'b0110001;
			14: cathode<=7'b1110000;
			15: cathode<=7'b0111000;
			
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
			 8: cathode<=7'b0000000;
			 9: cathode<=7'b0000000;
			10: cathode<=7'b0000100;
		   11: cathode<=7'b0001000;
			12: cathode<=7'b1100000;
			13: cathode<=7'b0110001;
			14: cathode<=7'b1110000;
			15: cathode<=7'b0111000;
			 
	         endcase 
			end 
			endcase
			end 
		
/////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
always @(posedge clk)
	begin
		if(count3==9999999)
		begin
			count3=0;
			en=0;
		end
		else
		begin
			count3=count3+1;
			en=1;
		end
	end
	
	always @(posedge en)
	  if (reset == 1)
				begin
					rs=0;
					rw1=0;
					db=8'b0000_0001;
				end 
	 else 
	
	 
		case (state_lcd)
		3'b000: begin
					rs=0;
					rw1=0;
					db=8'b0011_0100;
				//	db=8'b0000_0110;
					state_lcd=3'b001;
					end
		3'b001: begin
					rs=0;
					rw1=0;
					db=8'b0000_0001;
					state_lcd=3'b010;
					end
		3'b010: begin
					rs=0;
					rw1=0;
					db=8'b0000_1110;
					state_lcd=3'b011;
					end
		3'b011: begin
					rs=0;
					rw1=0;
					db=8'b0000_0111;
					state_lcd=3'b100;
					end
		3'b100: begin
					rs=1;
					rw1=0;
					w=w+1;
					case (w)
			
					1: db=8'b0100_1101; //M
				
					2: db=8'b0100_0001; // A
				
					3: db=8'b0101_0011; // S
				
					4: db=8'b0101_0100;  // T
				
					5: db=8'b0100_0101;  // E
					6: db=8'b0101_0010;   // R
					7: db=8'b0010_0000;   // space
					8: db=8'b0101_0111;   // w
					9: db=8'b0101_0010;   // R
				  10: db=8'b0100_1001;   // I
				  11: db=8'b0101_0100;   // T
				  12: db=8'b0100_0101;   // E

				default : begin 
					//			db=8'b0110_1010; // j
								db=8'b0010_0000;   // space
								state_lcd=3'b101;
							end
					endcase
					end
		3'b101: begin
					
					rs=0;
					rw1=0;
					db=8'b0000_0010;
				//	db=8'b000_0010;
					state_lcd=3'b110;
					end
		3'b110: begin
					rs=0;
					rw1=0;
					db=8'b0000_0010;
					state_lcd=3'b101;
					end
			endcase		
	
	

endmodule 
