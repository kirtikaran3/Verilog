`timescale 1ns / 1ps

module i2c_arb(
				input clk,
				input reset,
				input RW,
				/*input i2c_sda,
				input i2c_scl,
				input i2c_sda2,
				input i2c_scl2,*/
				input arb_control,
				input [6:0] addr_in,
				input [6:0] addr_in2,
				input [7:0] data_in,
				input [7:0] data_in2,
				output  scl,
				output reg sda
    );

            wire i2c_sda;///  MASTER 1 OUTPUTS 
				wire i2c_scl;///
				wire i2c_sda2;
				wire i2c_scl2;

master1 M1 (
    .clk(clk), 
    .reset(reset), 
    .RW(RW), 
    .addr_in(addr_in), 
    .data_in(data_in), 
    .i2c_sda(i2c_sda), 
    .i2c_scl(i2c_scl)
    );	 
	 master2 M2 (
    .clk(clk), 
    .reset(reset), 
    .RW(RW), 
    .addr_in2(addr_in2), 
    .data_in2(data_in2), 
    .i2c_sda2(i2c_sda2), 
    .i2c_scl2(i2c_scl2)
    );


  reg [6:0] m1_addr_store;
  reg [6:0] m2_addr_store;
  
  
  reg [6:0] s1_slave_addr =7'b1010101;
  reg [7:0] master_2_store;
  reg [7:0] master_1_store;
  reg [2:0] count1;
  reg [2:0] count2,count3,count4;
  reg [3:0] state;
  reg i2c_scl_enab;
  reg i2c_sda_enab;
  
  parameter IDLE = 0,
				START = 1,
				ADDR  = 2,
				MASTER1 =3,
				MASTER2 =4,
				STOP    = 5,
				JUMP1  =6,
				JUMP2  =7,
				JUMP3  = 8,
				JUMP4  =9;
				


	assign scl = (i2c_scl_enab == 0)? i2c_scl : 1;
	

				
  always @(posedge clk)
         if (reset == 1)
			 begin 
			  count1 = 0;
			  count2 = 0;
			 i2c_scl_enab =1;
			  sda    = 1;
			  state  = IDLE;
			  $display("reset");
			 end 
			else 
			  begin 
			   case (state)
				
				IDLE : begin 
							$display("arb_idle");
							sda = 1;
							i2c_scl_enab=1;
							state = START;
						 end 
				START :begin 
							if ((i2c_scl == 1)&&(i2c_sda ==0) &&(i2c_scl2 == 1) && (i2c_sda2 == 0))
                        begin 
								$display("start");
									i2c_scl_enab=1;
									sda = 0 ;
									count1 = 6;
									count2 = 6;
                           state  = ADDR;
									
                        end 
                     else 
								state  = START;
						 end 
			    ADDR : begin 
							 m1_addr_store [count1] = i2c_sda; /// master 1 sda 
							 m2_addr_store [count2] = i2c_sda2; /// mastr 2 sda
							 
							 if ((count1 ==0) &&(count2 == 0))
							     if ((m1_addr_store ==  m2_addr_store) )
								      if (arb_control == 0)
										  begin 
										   $display("add match");
										   count3 = 7;
											i2c_scl_enab = 0;
										   state  = JUMP1;
										  end 
										else 
										  begin 
										  count4  = 7;
										  i2c_scl_enab =0;
										  state  = JUMP3;
									     end 
								  else if (m1_addr_store ==  s1_slave_addr)
											  begin 
											  $display ("else if master1");
											    count3 = 7;
												 i2c_scl_enab =0;
								             state  = JUMP1;
											  end 
								  else if (m2_addr_store ==  s1_slave_addr)
								           begin 
											  $display ("else if master2");
											    count4 = 7;
								             state  = MASTER2;
											  end 
								  else begin
											$display("waps idle");
											  state  = IDLE ;
										end 
							 else 
									begin 
									  count1  =  count1 -1 ;
									  count2  =  count2 -1 ;
									end 
						    end
				MASTER1 : begin 
							//	scl = i2c_scl;
								sda = i2c_sda;
								master_1_store[count3] = i2c_sda;
								
								if (count3 == 0)
								   state = STOP;
								else 
									count3 =  count3 -1;
								end 
				MASTER2 : begin 
								sda = i2c_sda2;
								master_2_store[count4] = sda;
								//scl = i2c_scl2;
								if (count4 == 0)
								   state = STOP;
								else 
									count4 =  count4 - 1;
							 end 
				STOP    : begin 
								i2c_scl_enab =0;
								sda = 1;
							end 
				JUMP1   : state = JUMP2;
				JUMP2   : state = MASTER1;
				JUMP3   : state = JUMP4;
				JUMP4   : state = MASTER2;
				default : state = IDLE;
				endcase
				end

endmodule
