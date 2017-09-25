
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name arb_0_i2c -dir "E:/final_i2c/arb_0_i2c/planAhead_run_3" -part xc3s100ecp132-4
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "E:/final_i2c/arb_0_i2c/lcd_fpga_1.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {E:/final_i2c/arb_0_i2c} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "lcd_fpga_1.ucf" [current_fileset -constrset]
add_files [list {lcd_fpga_1.ucf}] -fileset [get_property constrset [current_run]]
link_design
