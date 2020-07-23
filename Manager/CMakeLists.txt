add_library(Manager
    src/Manager_base.cpp
    include/Manager_base.hpp
    )

target_include_directories(Manager PUBLIC include)
target_include_directories(Manager PUBLIC ../Receiver/include)
target_include_directories(Manager PUBLIC ../Syntax_checker/include)
target_include_directories(Manager PUBLIC ../Command/include)
target_include_directories(Manager PUBLIC ../Converter/include)
