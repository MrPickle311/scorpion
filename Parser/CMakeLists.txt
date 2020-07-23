add_library(Parser
include/Parser_base.hpp
src/Parser_base.cpp
)

target_include_directories(Parser PUBLIC include)
target_include_directories(Parser PUBLIC ../Command/include)
target_include_directories(Parser PUBLIC ../Converter/include)
