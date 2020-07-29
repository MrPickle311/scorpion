add_library(Error_propagator
include/Error_propagator_base.hpp
include/Main_error_propagator.hpp
src/Main_error_propagator.cpp
include/Error_propagator_base_interfaces.hpp
src/Error_propagator_base.cpp
)

set_target_properties(Error_propagator PROPERTIES LINKER_LANGUAGE CXX)

target_include_directories(Error_propagator PUBLIC include)
target_include_directories(Error_propagator PUBLIC ../Command/include)


