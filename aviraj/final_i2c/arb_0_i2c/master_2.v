`timescale 1ns / 1ps

module master_control(
							input clk,
							input reset,
							input arb_control,
					///////   MASTER 1 PORT ///////////
							input RW,
							output reg i2c_sda,
							output  i2c_scl,
					////// MASTER2
											//input   M1_RW,
						output  reg m1_i2c_sda,
						output   m1_i2c_scl,
						output reg [6:0] LED_ADDR,
						output reg [6:0] SEVEN_ADDR,
						output reg [7:0] SEVEN_DATA,
						output  [3:0] anode,
						output  [6:0] cathode);

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
					// MASTER 2 PARAMETER 
					  localparam M1_STATE_IDLE  = 0;
					  localparam M1_STATE_START = 1;
					  localparam M1_STATE_ADDR  = 2;
					  localparam M1_STATE_RW    = 3;
					  localparam M1_STATE_ACK   = 4;
					  localparam M1_STATE_DATA  = 5;
					  localparam M1_STATE_STOP  = 6;
					  localparam M1_STATE_WACK2 = 7;
					  localparam M1_STATE_WRITE = 8;
					  localparam M1_STATE_READ  = 9;
																	  
					 ////////////   MASTER1 REGISTOR DECLARE //////////
						reg [7:0] state  ;
						reg [6:0] addr ;
						reg [7:0] count ;
						reg [7:0] data;
						reg 		 i2c_scl_enable;
						reg [6:0] save_add;
						reg [7:0] save_data;
						reg [7:0] slave_data_read;
						reg [6:0] sev_seg_add;
						reg [7:0] sev_seg_data;
					/////////////////////////////////////////////////////////
					///////////  MASTER2 REGISTER /////////////////////////
						reg [7:0] m1_state  ;
						reg [6:0] m1_addr ;
						reg [7:0] m1_count ;
						reg [7:0] m1_data;
						reg       m1_i2c_scl_enable;
						reg [6:0] m1_save_add;
						reg [7:0] m1_save_data;
						reg [7:0] m1_slave_data_read;
						
						reg [6:0] m1_sev_seg_add;
						reg [7:0] m1_sev_seg_data;
													
														
						reg [6:0] A;
						reg [7:0] D;
													
						
					//////////////////////////////////////////////////////////////////
					////////////MASTER1 SCL /////////////////////////

						assign i2c_scl = (i2c_scl_enable == 0) ? 1:~clk;
						always @(posedge clk ) begin 
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

					//////////////////////////////////////////////////////////////////////////
					///////////     MASTER2 SCL ///////////////
					assign m1_i2c_scl = (m1_i2c_scl_enable == 0) ? 1:~clk;
						always @(posedge clk ) begin 
							if (reset ==1)
								m1_i2c_scl_enable <= 0;
							else 
							begin 
							if ((m1_state == STATE_IDLE)|| (m1_state == STATE_START)||(m1_state == STATE_STOP))
								m1_i2c_scl_enable <= 0;
							else 
								//i2c_scl_enable = ~i2c_scl_enable;
								m1_i2c_scl_enable <= 1;
						end 
					end 
					//////////////////////////////////////////////////////////
					//////////////////////////////////////////////////
					  always @(posedge clk )begin 
							if (reset == 1) begin 
						  
						  i2c_sda = 1;
						  m1_i2c_sda = 1;
						
						  addr    		= 7'h55;
						  m1_addr    		= 7'h47;
						  count   		= 8'd0;
						  m1_count   		= 8'd0;
						  data    		= 8'h6f;
						  m1_data    		= 8'h8f;
						  state  		= STATE_IDLE;
						  m1_state  	= M1_STATE_IDLE;
					end 
						 else  
						  if (arb_control == 0)   ////MASTER1  SECLECT
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
								  save_add[count] = i2c_sda;
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
										  save_data[count] = i2c_sda;
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
											end 
						 default     : state = STATE_IDLE;
						 
						 endcase
						// state = state ;
						 

					//////////////////////////////////////////////////////////////////////////////
					/////////////  MASTER2  FSM /////
						 else 
						  begin
							 case (m1_state)

						 M1_STATE_IDLE : begin 
									m1_i2c_sda = 1;
								//	 i2c_scl_enable <= 0;
									m1_state  = M1_STATE_START;
									 end 
						 M1_STATE_START: begin 
								  m1_i2c_sda = 0;
									m1_count  = 6;
									m1_state= M1_STATE_ADDR;
								  end
						 M1_STATE_ADDR : begin 
								  m1_i2c_sda = m1_addr[m1_count];
								  m1_save_add[m1_count] = m1_i2c_sda;
								  m1_sev_seg_add[m1_count] = m1_i2c_sda;
							if (m1_count == 0)
								m1_state= M1_STATE_RW;
							//	m1_state = M1_STATE_ACK ;
							else 
								m1_count = m1_count -1;
								  end 
						 

						 M1_STATE_RW  : begin 
										  if (RW == 0)
											 begin 
										  m1_i2c_sda = 1;
											
										  m1_state   = M1_STATE_ACK;
												end		  
										  else if (RW == 1) begin 
											m1_i2c_sda = 1 ;
											m1_count   =7 ;
											m1_state = M1_STATE_READ;
										end 
								  end 
						 M1_STATE_ACK : if (m1_count == 0)
											if (RW == 0)
											begin 
											m1_i2c_sda = 0;
											m1_count   = 7;
											m1_state = M1_STATE_WRITE;
											end
										 else if( RW == 1) begin
												m1_i2c_sda = 0;
												m1_count   = 7;
											  m1_state = M1_STATE_READ;
											  end 
										else 
											 m1_state = M1_STATE_IDLE;
											
						 M1_STATE_WRITE : begin 
										  m1_i2c_sda = m1_data[m1_count];
										  m1_save_data[m1_count] = m1_i2c_sda;
										  m1_sev_seg_data[m1_count] = m1_i2c_sda;
												if (m1_count ==0)
													m1_state= M1_STATE_WACK2;
												else 
													m1_count = m1_count -1;
											end
						 M1_STATE_READ  : begin
												m1_slave_data_read [m1_count] = m1_i2c_sda;
												if (m1_count == 0)
													m1_state = M1_STATE_WACK2;
												else 
												 m1_count = m1_count -1 ;
											end 
						 M1_STATE_WACK2 : begin 
												m1_i2c_sda = 0;
											  m1_state= M1_STATE_STOP;
									 end 
						 M1_STATE_STOP  : begin 
											m1_i2c_sda =1;
											SEVEN_DATA = m1_sev_seg_data;
											LED_ADDR   = m1_sev_seg_add;
											SEVEN_ADDR  = m1_sev_seg_add;
											A           = m1_sev_seg_add;
											D				= m1_sev_seg_data;
//											cathode     =  7'b1111001;
//											anode = 4'b0111;
//											
											end 
						 default     : m1_state = M1_STATE_IDLE;
						 
						 endcase
						// state = state ;
						 end 
					 end 
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////  SEVEN SEGMENT CODE ///////////////////////////////////

reg [3:0] NUMBER;
//reg [1:0] ANODE1 =0;
reg [16:0] counter_div =0;
reg clk_div =0;
	
//				always @(posedge clk)
//						if (counter_div < 10000)
//							counter_div <= counter_div +1;
//						else 
//							begin 
//							  clk_div <= ~ clk_div ;
//							  counter_div<= 0;
//							  end 
//					always @ (negedge clk_div )
//					       begin 
//								if (ANODE1 < 3)
//								 	ANODE1 <= ANODE1 +1;	
//							   else 
//							 
//									 				 ANODE1 <= 0;				
//
//							 end 
//
//				//	always @(ANODE1,A[6:4],D[7:4],A[3:0],D[3:0] )
//					always @(posedge clk_div)
//				//	always @(*)
//							begin 
//							 case (ANODE1)
//							 
//							   0: begin  //////////// for addres 1 segments
//										anode = 4'b0111;
//										case  (A[6:4])
////											 3'b000 : cathode = 7'b1000000; //0
////											 3'b001 : cathode = 7'b1111001; //1
////											 3'b010 : cathode = 7'b0100100; //2
////											 3'b011 : cathode = 7'b0110000; //3
////											 3'b100 : cathode = 7'b0011001; //4
////											 3'b101 : cathode = 7'b0010010; //5
////								//			 3'b101 : cathode = 7'b0100100; //5
////											 3'b110 : cathode = 7'b0000010; //6
////											 3'b111 : cathode = 7'b1111000; //7
//											 3'b000 : cathode = 7'b0000001; //0
//											 3'b001 : cathode = 7'b1001111; //1
//											 3'b010 : cathode = 7'b0010010; //2
//											 3'b011 : cathode = 7'b0000110; //3
//											 3'b100 : cathode = 7'b1001100; //4
//											 3'b101 : cathode = 7'b0100100; //5
//								//			 3'b101 : cathode = 7'b0100100; //5
//											 3'b110 : cathode = 7'b0100000; //6
//											 3'b111 : cathode = 7'b0001111; //7
//										endcase
//								//		ANODE1 = 2'b01;
//										end 
//								1: begin   //////// for address 2 segments
//										anode = 4'b1011;
//										case  (A[3:0])
//											   4'b0000: cathode = 7'b1000000;
//												4'b0001: cathode = 7'b1111001;
//												4'b0010: cathode = 7'b0100100;
//												4'b0011: cathode = 7'b0110000;
//												4'b0100: cathode = 7'b0011001;
//												4'b0101: cathode = 7'b0010010;
//											//	4'b0101: cathode = 7'b0100100;
//												4'b0110: cathode = 7'b0000010;
//												4'b0111: cathode = 7'b1111000;
//												4'b1000: cathode = 7'b0000000;
//												4'b1001: cathode = 7'b0010000;
//												4'b1010: cathode = 7'b0001000; 
//												4'b1011: cathode = 7'b0000000;
//												4'b1100: cathode = 7'b0110001;
//												4'b1101: cathode = 7'b0000001;
//												4'b1110: cathode = 7'b0110000;
//												4'b1111: cathode = 7'b0111000;
//												default: cathode = 7'b0000110;
//										endcase
//								//		ANODE1 = 2'b10;
//									end 
//								2: begin 
//										anode = 4'b1101;
//										case  (D[7:4])
//											 	4'b0000: cathode = 7'b1000000;
//												4'b0001: cathode = 7'b1111001;
//												4'b0010: cathode = 7'b0100100;
//												4'b0011: cathode = 7'b0110000;
//												4'b0100: cathode = 7'b0011001;
//												4'b0101: cathode = 7'b0010010;
//												4'b0110: cathode = 7'b0000010;
//												4'b0111: cathode = 7'b1111000;
//												4'b1000: cathode = 7'b0000000;
//												4'b1001: cathode = 7'b0010000;
//												4'b1010: cathode = 7'b0001000; 
//												4'b1011: cathode = 7'b0000000;
//												4'b1100: cathode = 7'b0110001;
//												4'b1101: cathode = 7'b0000001;
//												4'b1110: cathode = 7'b0110000;
//												4'b1111: cathode = 7'b0111000;
//												default: cathode = 7'b0000110;
//										endcase
//									//	ANODE1 = 2'b11;
//										end 
//								 3:  begin 
//											anode = 4'b1110;
//											case  (D[3:0])
//											 	4'b0000: cathode = 7'b1000000;
//												4'b0001: cathode = 7'b1111001;
//												4'b0010: cathode = 7'b0100100;
//												4'b0011: cathode = 7'b0110000;
//												4'b0100: cathode = 7'b0011001;
//												4'b0101: cathode = 7'b0010010;
//												4'b0110: cathode = 7'b0000010;
//												4'b0111: cathode = 7'b1111000;
//												4'b1000: cathode = 7'b0000000;
//												4'b1001: cathode = 7'b0010000;
//												4'b1010: cathode = 7'b0001000; 
//												4'b1011: cathode = 7'b0000000;
//												4'b1100: cathode = 7'b0110001;
//												4'b1101: cathode = 7'b0000001;
//												4'b1110: cathode = 7'b0110000;
//												4'b1111: cathode = 7'b0111000;
//												default: cathode = 7'b0000110;
//										endcase
//									//	ANODE1=  2'b00;
//										end 
//								endcase
//							end 
assign anode = 4'b1000;
assign cathode = 7'b1111001;
					 endmodule 