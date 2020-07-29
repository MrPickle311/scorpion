add_library(Runtime_tools
include/RuntimeSyntaxAnalizer.hpp
src/RuntimeSyntaxAnalizer.cpp
)

target_include_directories(Runtime_tools PUBLIC include)
target_include_directories(Runtime_tools PUBLIC ../Channel/include)
