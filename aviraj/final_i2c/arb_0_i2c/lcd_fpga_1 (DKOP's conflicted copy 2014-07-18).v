module lcd_fpga_1(
  lcd_d,
  lcd_e,
  lcd_rw,
  lcd_rs,
  clk,
  rst);
//states  
parameter init0=0,
          init1=1,
          init2=2,
          init3=3,
          init4=4,
          init5=5,
          init6=6,
          
          func_set    =7,
          entr_mod    =8,
          disp_on_off =9,
          clr_disp    =10,
          print       =11,
          wt1         =12,
          wt2         =13,
          wt3         =14,
          wt4         =15;

//counters  
parameter c750k = 750_000, //15ms startup time
          c200k = 205_000, //4.1 ms
          c12   = 12,//  data time
          c5k   = 5_000,//100 us
          c2k   = 2_000,//40 us =execution time space
          c82k  = 82_000; //1.64 ms after config
          
          
          
output reg [7:0] lcd_d;
output reg       lcd_e;
output reg       lcd_rw;
output reg       lcd_rs;
input            clk; //50MHz
input            rst;

reg   [13:0]     cnt;

reg   [3:0]      state;

always @(posedge clk)
begin
  if(rst)
  begin
    state  <= init0;
    cnt    <= 14'd0;
    lcd_d  <= 8'd0;
    lcd_e  <= 1'b0;
    lcd_rw <= 1'b0;
    lcd_rs <= 1'b0; 
  end
  else
  begin
    lcd_d  <= 8'd0;
    lcd_e  <= 1'b0;
    lcd_rw <= 1'b0;
    lcd_rs <= 1'b0;
    case(state)
      init0:  if(cnt == c750k) begin //wait //0
                  cnt <= 14'd0;
                  state <= init1; end
              else begin
                  cnt <= cnt +14'd1;
                  state <= init0; end
                  
      init1: begin
              lcd_e  <= 1'b1; 
              lcd_d  <= 8'h0011_0000;
              if(cnt == c12) begin //command //1
                  cnt <= 14'd0;
                  state <= init2; end
              else begin
                  cnt <= cnt +14'd1;
                  state <= init1; end
            end
            
      init2:  if(cnt == c200k) begin //wait 4.1ms //2
                  cnt <= 14'd0;
                  state <= init3; end
              else begin
                  cnt <= cnt +14'd1;
                  state <= init2; end
                  
      init3: begin
              lcd_e  <= 1'b1;
              lcd_d  <= 8'h0011_0000; 
              if(cnt == c12) begin //command //3
                  cnt <= 14'd0;
                  state <= init4; end
              else begin
                  cnt <= cnt +14'd1;
                  state <= init3; end
            end
      init4:  if(cnt == c5k) begin //wait 100 us //4
                  cnt <= 14'd0;
                  state <= init5; end
              else begin
                  cnt <= cnt +14'd1;
                  state <= init4; end

      init5: begin
              lcd_e  <= 1'b1;
              lcd_d  <= 8'h0011_0000; 
              if(cnt == c12) begin //command //5
                  cnt <= 14'd0;
                  state <= init6; end
              else begin
                  cnt <= cnt +14'd1;
                  state <= init5; end
            end     
      init6:  if(cnt == c5k) begin //wait 100 us //6
                  cnt <= 14'd0;
                  state <= func_set; end
              else begin
                  cnt <= cnt +14'd1;
                  state <= init6; end
                  
      ///////Initialization finishes here<<
      
      func_set: begin //command //7
                  lcd_e  <= 1'b1;
                  lcd_d  <= 8'h0011_0000; 
                  if(cnt == c2k) begin 
                      cnt <= 14'd0;
                      state <= wt1; end
                  else begin
                      cnt <= cnt +14'd1;
                      state <= func_set; end
                end    
      wt1: begin 
            if(cnt == c2k) begin //wait 4 us //8
              cnt <= 14'd0;
              state <= entr_mod; end
            else begin
                  cnt <= cnt +14'd1;
                  state <= wt1; end
         end

      entr_mod: begin //command //9
                  lcd_e  <= 1'b1;
                  lcd_d  <= 8'h0011_0000; 
                  if(cnt == c2k) begin 
                      cnt <= 14'd0;
                      state <= wt2; end
                  else begin
                      cnt <= cnt +14'd1;
                      state <= entr_mod; end
                end    
      wt2: begin 
            if(cnt == c2k) begin //wait 4 us //10
              cnt <= 14'd0;
              state <= disp_on_off; end
            else begin
                  cnt <= cnt +14'd1;
                  state <= wt2; end
         end         
         
      disp_on_off: begin //command //11
                  lcd_e  <= 1'b1;
                  lcd_d  <= 8'h0011_0000; 
                  if(cnt == c2k) begin 
                      cnt <= 14'd0;
                      state <= wt3; end
                  else begin
                      cnt <= cnt +14'd1;
                      state <= disp_on_off; end
                end    
      wt3: begin 
            if(cnt == c2k) begin //wait 4 us //12
              cnt <= 14'd0;
              state <= clr_disp; end
            else begin
                  cnt <= cnt +14'd1;
                  state <= wt3; end
         end 
endcase
       //   print       =13;    
      
  end
end
endmodule