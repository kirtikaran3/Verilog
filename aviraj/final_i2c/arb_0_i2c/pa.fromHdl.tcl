
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name arb_0_i2c -dir "E:/final_i2c/arb_0_i2c/planAhead_run_2" -part xc3s100ecp132-4
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "lcd_fpga_1.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {lcd_fpga_1 (DKOP's conflicted copy 2014-07-18).v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top lcd_fpga_1 $srcset
add_files [list {lcd_fpga_1.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc3s100ecp132-4
