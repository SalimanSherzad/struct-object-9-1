cmake_minimum_required(VERSION 3.17)
project(Assignment09_box_template)

set(CMAKE_CXX_STANDARD 14)

# Part 1 and Part 2 executables from old Assignment 9
add_executable(Part1 Part1.cpp)
add_executable(Part2 Part2.cpp)

# Part 3 and Part 4 executables from old Assignment 10
add_executable(Part3 Part3.cpp Box.h Box.cpp)

# Precompile catch library
add_library(catch2_main STATIC unit_tests/catch-main.cpp)
target_include_directories(catch2_main PUBLIC unit_tests/)

# Catch Tests
add_executable(Constructor_Tests unit_tests/catch.hpp unit_tests/constructor_tests.cpp Box.cpp)
add_executable(Volume_Area_Tests unit_tests/catch.hpp unit_tests/volume_area_tests.cpp Box.cpp)
add_executable(Getters_Setters_Tests unit_tests/catch.hpp unit_tests/getters_setters_tests.cpp Box.cpp)

# Use precompiled headers to speed up recompiles
target_link_libraries(Constructor_Tests catch2_main)
target_compile_definitions(Constructor_Tests PRIVATE CATCH_CONFIG_FAST_COMPILE CATCH_CONFIG_DISABLE_MATCHERS)
target_precompile_headers(Constructor_Tests PRIVATE unit_tests/catch.hpp)

target_link_libraries(Volume_Area_Tests catch2_main)
target_compile_definitions(Volume_Area_Tests PRIVATE CATCH_CONFIG_FAST_COMPILE CATCH_CONFIG_DISABLE_MATCHERS)
target_precompile_headers(Volume_Area_Tests PRIVATE unit_tests/catch.hpp)

target_link_libraries(Getters_Setters_Tests catch2_main)
target_compile_definitions(Getters_Setters_Tests PRIVATE CATCH_CONFIG_FAST_COMPILE CATCH_CONFIG_DISABLE_MATCHERS)
target_precompile_headers(Getters_Setters_Tests PRIVATE unit_tests/catch.hpp)


