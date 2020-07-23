add_library(Command
include/Command_base.hpp
src/Command_base.cpp
)

target_include_directories(Command PUBLIC include)
target_include_directories(Command PUBLIC ../Converter/include)
