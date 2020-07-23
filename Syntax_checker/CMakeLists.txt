add_library(Syntax_checker
include/Syntax_checker_base.hpp
src/Syntax_checker_base.cpp
)

target_include_directories(Syntax_checker PUBLIC include)
target_include_directories(Syntax_checker PUBLIC ../Command/include)
target_include_directories(Syntax_checker PUBLIC ../Converter/include)
