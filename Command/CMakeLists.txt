add_library(Command
include/Command_base.hpp
#src/Command_base.cpp
include/Command_base_interfaces.hpp
include/Main_command.hpp
src/Main_command.cpp
)

target_include_directories(Command PUBLIC include)
target_include_directories(Command PUBLIC ../Converter/include)
