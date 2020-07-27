add_library(Error
include/Error_base.hpp
src/Error_base.cpp
src/Command_exception_base.cpp
include/Command_exception_base.hpp
)

target_include_directories(Error PUBLIC include)
