
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name counter -dir "C:/Users/Kirti Karan/Documents/verilog/counter/planAhead_run_1" -part xc3s100ecp132-4
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Users/Kirti Karan/Documents/verilog/counter/counters.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/Kirti Karan/Documents/verilog/counter} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "counters.ucf" [current_fileset -constrset]
add_files [list {counters.ucf}] -fileset [get_property constrset [current_run]]
link_design
