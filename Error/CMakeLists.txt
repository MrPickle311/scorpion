add_library(Error
include/Error_base.hpp
src/Error_base.cpp
)

target_include_directories(Error PUBLIC include)
