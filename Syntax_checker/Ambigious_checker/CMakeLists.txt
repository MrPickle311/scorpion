add_library(Ambigious_checker
include/Ambigious_checker_base.hpp
src/Ambigious_checker_base.cpp
include/Ambigious_checker_base_interfaces.hpp
src/Main_ambigious_checker.cpp
include/Main_ambigious_checker.hpp
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

target_include_directories(Syntax_checker PUBLIC include)
