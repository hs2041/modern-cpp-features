cmake_minimum_required(VERSION 3.0.0)
project(cpp_features VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

find_package(Boost REQUIRED)
find_package(Threads REQUIRED)


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

add_executable(22_01_static_assert src/22_01_static_assert.cpp)

add_executable(17_04_all_rules src/17_04_all_rules.cpp)

add_executable(17_05_operator_generations src/17_05_operator_generations.cpp)

add_executable(18_01_unique_pointers src/18_01_unique_pointers.cpp)

add_executable(19_01_shared_pointer src/19_01_shared_pointer.cpp)

add_executable(19_02_shared_from_this src/19_02_shared_from_this.cpp)

add_executable(19_03_sharing_pointers src/19_03_sharing_pointers.cpp)
add_executable(20_01_weak_pointers src/20_01_weak_pointers.cpp)

add_executable(24_01_basic_universal src/24_01_basic_universal.cpp)

add_executable(31_01_basic_lambda src/31_01_basic_lambda.cpp)
add_executable(31_02_capture_modes src/31_02_capture_modes.cpp)

add_executable(31_03_init_capture src/31_03_init_capture.cpp)

add_executable(41_01_object_slicing src/41_01_object_slicing.cpp)

add_executable(35_01_async src/35_01_async.cpp)

target_link_libraries(35_01_async Threads::Threads)

add_executable(35_02_promise src/35_02_promise.cpp)
target_link_libraries(35_02_promise Threads::Threads)

add_executable(40_01_volatile src/40_01_volatile.cpp)

target_link_libraries(40_01_volatile Threads::Threads)

add_executable(26_01_template_constructor src/26_01_template_constructor.cpp)

target_link_libraries(26_01_template_constructor Threads::Threads)

add_executable(39_01_condition_variable src/39_01_condition_variable.cpp)

target_link_libraries(39_01_condition_variable Threads::Threads)

add_executable(39_02_futures_promise src/39_02_futures_promise.cpp)

target_link_libraries(39_02_futures_promise Threads::Threads)

add_executable(39_03_shared_future src/39_03_shared_future.cpp)

target_link_libraries(39_03_shared_future Threads::Threads)

