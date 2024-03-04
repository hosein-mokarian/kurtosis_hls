# Create a project
open_project -reset proj_kurtosis

# Add design files
# -cflags "-D__SDSVHLS__ -I../../include --std=c++0x"
add_files kurtosis.cpp -cflags "-D__SDSVHLS__ -I xfopencv-master/include --std=c++0x"
# Add test bench & files
add_files -tb kurtosis_test.cpp -cflags "-D__SDSVHLS__ -I xfopencv-master/include --std=c++0x"

# Set the top-level function
set_top kurtosis

# #########################################################
# Create a solution
open_solution -reset solution1
# Define technology and clock rate
set_part {xcvu9p-flga2104-2-i}
create_clock -period 6.66

# Execute
csim_design
csynth_design
# cosim_design
# export_design

exit
