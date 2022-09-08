cmake_minimum_required(VERSION 3.0.0)
project(cpp_features VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

find_package(Boost REQUIRED)

message("abc ${Boost_INCLUDE_DIRS}")
message("abc ${Boost_LIBRARIES}")

include_directories(${Boost_INCLUDE_DIRS}) 

add_executable(cpp_features src/cpp_features.cpp)

add_executable(c_01_lrvalues src/concepts/c_01_lrvalues.cpp)
add_executable(c_02_move_semantics src/concepts/c_02_move_semantics.cpp)
add_executable(c_03_move_forward src/concepts/c_03_move_forward.cpp)
add_executable(c_04_terminate src/concepts/c_04_terminate.cpp)
add_executable(c_05_noexcept src/concepts/c_05_noexcept.cpp)
add_executable(c_06_ref_functions src/concepts/c_06_ref_functions.cpp)
add_executable(c_07_iterator_invalidation src/concepts/c_07_iterator_invalidation.cpp)

add_executable(01_01_template_type_deduction src/01_01_template_type_deduction.cpp)
add_executable(01_02_deduction_paramtypes src/01_02_deduction_paramtypes.cpp)
add_executable(01_03_universal_deduction src/01_03_universal_deduction.cpp)
add_executable(02_01_auto_declaration src/02_01_auto_declaration.cpp)
add_executable(02_02_initializer_list src/02_02_initializer_list.cpp)
add_executable(03_01_decltype src/03_01_decltype.cpp)
add_executable(03_02_deque src/03_02_deque.cpp)
add_executable(03_03_autodecltype src/03_03_autodecltype.cpp)
add_executable(03_04_autodecltype_expression src/03_04_autodecltype_expression.cpp)
add_executable(03_05_universal_reference src/03_05_universal_reference.cpp)
add_executable(03_06_std_ref src/03_06_std_ref.cpp)
add_executable(04_01_type_name src/04_01_type_name.cpp)
add_executable(05_01_auto_types src/05_01_auto_types.cpp)
add_executable(05_02_bool_reference src/05_02_bool_reference.cpp)
add_executable(07_01_intialise_vector src/07_01_intialise_vector.cpp)

add_executable(08_01_nullptr src/08_01_nullptr.cpp)

add_executable(09_01_alias_declaration src/09_01_alias_declaration.cpp)

add_executable(09_02_type_traits src/09_02_type_traits.cpp)

add_executable(10_scoped_enums src/10_scoped_enums.cpp)

add_executable(12_01_reference_qualifier src/12_01_reference_qualifier.cpp)

add_executable(14_01_noexcept src/14_01_noexcept.cpp)
add_executable(15_01_constexpr src/15_01_constexpr.cpp)

add_executable(16_01_copy_mutex src/16_01_copy_mutex.cpp)

add_executable(16_02_atomic src/16_02_atomic.cpp)

add_executable(17_01_default_argument_const src/17_01_default_argument_const.cpp)

add_executable(17_02_virtual_destructor src/17_02_virtual_destructor.cpp)

add_executable(17_03_inline src/17_03_inline.cpp)

