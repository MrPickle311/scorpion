add_library(Parser
include/Parser_base.hpp
src/Parser_base.cpp
include/Parser_base.hpp
include/Parser_base_interfaces.hpp
src/Main_parser.cpp
include/Main_parser.hpp
)

target_include_directories(Parser PUBLIC include)
target_include_directories(Parser PUBLIC ../Command/include)
