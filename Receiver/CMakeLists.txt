add_library(Receiver
include/Command_receiver_base.hpp
src/Command_receiver_base.cpp
)

target_include_directories(Receiver PUBLIC include)
target_include_directories(Receiver PUBLIC ../Syntax_checker/include)
target_include_directories(Receiver PUBLIC ../Command/include)
target_include_directories(Receiver PUBLIC ../Converter/include)
