module master_1(
							input clk,
							input reset,
							input arb_control,
					///////   MASTER 1 PORT ///////////
							input RW,
							output reg i2c_sda,
							output  i2c_scl,
					////// MASTER2
								
							output reg rs,rw,en,
							output reg [7:0] db,
							//////////////////////////////////
						output  reg m1_i2c_sda,
						output   m1_i2c_scl,
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
					// MASTER 2 PARAMETER 
				//	  localparam M1_STATE_IDLE  = 0;
				//	  localparam M1_STATE_START = 1;
				//	  localparam M1_STATE_ADDR  = 2;
				//	  localparam M1_STATE_RW    = 3;
				//	  localparam M1_STATE_ACK   = 4;
				//	  localparam M1_STATE_DATA  = 5;
				//	  localparam M1_STATE_STOP  = 6;
				//	  localparam M1_STATE_WACK2 = 7;
				//	  localparam M1_STATE_WRITE = 8;
				//	  localparam M1_STATE_READ  = 9;
																	  
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
				//		reg [7:0] m1_state  ;
				//		reg [6:0] m1_addr ;
				//		reg [7:0] m1_count ;
				//		reg [7:0] m1_data;
				//		reg       m1_i2c_scl_enable;
				//		reg [6:0] m1_save_add;
				//		reg [7:0] m1_save_data;
				//		reg [7:0] m1_slave_data_read;
				//		
				//		reg [6:0] m1_sev_seg_add;
				//		reg [7:0] m1_sev_seg_data;
													
						////////////////////////////////////								
						reg [6:0] A;
						reg [7:0] D;
					//	reg [6:0] C ;
                			//	reg [7:0] E ;
						reg [1:0] ab ;
						reg [9:0] count1 = 0;
						reg clk_div= 0;			
					/////////////////////////////////////
				/*	
					reg [23:0] count3 =0;
					reg [2:0] state_lcd =0;
					reg  [2:0]w = 0;
					*/
												
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
			/*		assign m1_i2c_scl = (m1_i2c_scl_enable == 0) ? 1:~clk;
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
					end */
					//////////////////////////////////////////////////////////
					//////////////////////////////////////////////////
					initial anode = 4'b0000;
					  always @(posedge clk )begin 
							if (reset == 1) begin 
						  
						  i2c_sda = 1;
						  m1_i2c_sda = 1;
						
						  addr    		= 7'h45;
			//			  m1_addr    		= 7'h47;
						  count   		= 8'd0;
		//				  m1_count   		= 8'd0;
						  data    		= 8'h66;
	//					  m1_data    		= 8'h72;
						  state  		= STATE_IDLE;
//						  m1_state  	= M1_STATE_IDLE;
						  LED_ADDR     = 7'b0000000;
						//  anode = 4'b1111;
					end 
						 else  
						  if (arb_control == 0) begin   ////MASTER1  SECLECT
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
//											 cathode     =  7'b1111001;
//											anode = 4'b110;
											end 
						 default     : state = STATE_IDLE;
						 
						 endcase
						// state = state ;
						 
						end 
						end 
						
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
		
						endmodule 
