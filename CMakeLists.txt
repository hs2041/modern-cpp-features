cmake_minimum_required(VERSION 3.0.0)
project(cpp_features VERSION 0.1.0)

include_directories(include)
add_executable(cpp_features src/cpp_features.cpp)

add_executable(011_template_type_deduction src/01_01_template_type_deduction.cpp)
add_executable(012_deduction_paramtypes src/01_02_deduction_paramtypes.cpp)
add_executable(02_01_auto_declaration src/02_01_auto_declaration.cpp)

add_executable(02_02_initializer_list src/02_02_initializer_list.cpp)

add_executable(03_01_decltype src/03_01_decltype.cpp)

