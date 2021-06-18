cmake_minimum_required(VERSION 3.10)
project(hw5)

set(CMAKE_CXX_STANDARD 11)

add_executable(hw5 bp.cpp hw3_output.cpp parser_utils.cpp symbol_table.cpp yystype.cpp)