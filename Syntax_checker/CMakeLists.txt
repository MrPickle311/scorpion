add_library(Syntax_checker
include/Syntax_checker_base.hpp
src/Syntax_checker_base.cpp
include/Syntax_checker_base_interfaces.hpp
src/Main_syntax_checker.cpp
include/Main_syntax_checker.hpp
)

add_subdirectory(Correct_checker_engine)
add_subdirectory(Syntax_predicates)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

target_include_directories(Syntax_checker PUBLIC include)
target_include_directories(Syntax_checker PUBLIC ../Command/include)
target_include_directories(Syntax_checker PUBLIC ../Converter/include)
target_include_directories(Syntax_checker PUBLIC Correct_checker_engine/include)
