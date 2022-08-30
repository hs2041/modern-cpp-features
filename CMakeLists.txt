cmake_minimum_required(VERSION 3.0.0)
project(cpp_features VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

find_package(Boost REQUIRED)

# if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS}) 
# endif()

add_executable(cpp_features src/cpp_features.cpp)

add_executable(011_template_type_deduction src/01_01_template_type_deduction.cpp)
add_executable(012_deduction_paramtypes src/01_02_deduction_paramtypes.cpp)
add_executable(02_01_auto_declaration src/02_01_auto_declaration.cpp)

add_executable(02_02_initializer_list src/02_02_initializer_list.cpp)

add_executable(03_01_decltype src/03_01_decltype.cpp)

add_executable(03_02_deque src/03_02_deque.cpp)

add_executable(c_01_lrvalues src/concepts/c_01_lrvalues.cpp)
add_executable(c_02_move_semantics src/concepts/c_02_move_semantics.cpp)

add_executable(03_03_autodecltype src/03_03_autodecltype.cpp)

add_executable(03_04_autodecltype_expression src/03_04_autodecltype_expression.cpp)

add_executable(03_05_universal_reference src/03_05_universal_reference.cpp)
add_executable(03_06_std_ref src/03_06_std_ref.cpp)

