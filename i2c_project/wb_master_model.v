

`include "timescale.v"

module wb_master_model(clk, rst, adr, din, dout, cyc, stb, we, sel, ack, err, rty);

  parameter dwidth = 32;
  parameter awidth = 32;
  
  input                  clk, rst;
  output [awidth   -1:0] adr;
  input  [dwidth   -1:0] din;
  output [dwidth   -1:0] dout;
  output                 cyc, stb;
  output                 we;
  output [dwidth/8 -1:0] sel;
  input                  ack, err, rty;
  
  // Internal signals
  reg    [awidth   -1:0] adr;
  reg    [dwidth   -1:0] dout;
  reg                    cyc, stb;
  reg                    we;
  reg    [dwidth/8 -1:0] sel;
         
  reg    [dwidth   -1:0] q;
  
  // Memory Logic
  initial
    begin
      adr  = {awidth{1'bx}};
      dout = {dwidth{1'bx}};
      cyc  = 1'b0;
      stb  = 1'bx;
      we   = 1'hx;
      sel  = {dwidth/8{1'bx}};
      #1;
    end
  
  // Wishbone write cycle
  task wb_write;
    input   delay;
    integer delay;
  
    input [awidth -1:0] a;
    input [dwidth -1:0] d;
  
    begin
  
      // wait initial delay
      repeat(delay) @(posedge clk);
  
      // assert wishbone signal
      #1;
      adr  = a;
      dout = d;
      cyc  = 1'b1;
      stb  = 1'b1;
      we   = 1'b1;
      sel  = {dwidth/8{1'b1}};
      @(posedge clk);
  
      // wait for acknowledge from slave
      while(~ack) @(posedge clk);
  
      // negate wishbone signals
      #1;
      cyc  = 1'b0;
      stb  = 1'bx;
      adr  = {awidth{1'bx}};
      dout = {dwidth{1'bx}};
      we   = 1'hx;
      sel  = {dwidth/8{1'bx}};
  
    end
  endtask
  
  // Wishbone read cycle
  task wb_read;
    input   delay;
    integer delay;
  
    input  [awidth -1:0]  a;
    output  [dwidth -1:0] d;
  
    begin
  
      // wait initial delay
      repeat(delay) @(posedge clk);
  
      // assert wishbone signals
      #1;
      adr  = a;
      dout = {dwidth{1'bx}};
      cyc  = 1'b1;
      stb  = 1'b1;
      we   = 1'b0;
      sel  = {dwidth/8{1'b1}};
      @(posedge clk);
  
      // wait for acknowledge from slave
      while(~ack) @(posedge clk);
  
      // negate wishbone signals
      #1;
      cyc  = 1'b0;
      stb  = 1'bx;
      adr  = {awidth{1'bx}};
      dout = {dwidth{1'bx}};
      we   = 1'hx;
      sel  = {dwidth/8{1'bx}};
      d    = din;
  
    end
  endtask
  
  // Wishbone compare cycle (read data from location and compare with expected data)
  task wb_cmp;
    input   delay;
    integer delay;
  
    input [awidth -1:0] a;
    input [dwidth -1:0] d_exp;
  
    begin
      wb_read (delay, a, q);

    if (d_exp !== q)
      $display("Data compare error. Received %h, expected %h at time %t", q, d_exp, $time);
    end
  endtask
  
endmodule
 
