add_library(Syntax_error
include/Syntax_error_base.hpp
src/Syntax_error_base.cpp
include/Syntax_error_base_interfaces.hpp
)

target_include_directories(Syntax_error PUBLIC include)
