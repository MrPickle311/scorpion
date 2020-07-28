add_library(Manager
    src/Manager_base.cpp
    include/Manager_base.hpp
    include/Manager_base_interfaces.hpp
    include/Main_manager.hpp
    src/Main_manager.cpp
    )

target_include_directories(Manager PUBLIC include)
target_include_directories(Manager PUBLIC ../Receiver/include)
target_include_directories(Manager PUBLIC ../Command/include)
target_include_directories(Manager PUBLIC ../Converter/include)
target_include_directories(Manager PUBLIC ../Parser/include)
target_include_directories(Manager PUBLIC ../Syntax_checker/include)
target_include_directories(Manager PUBLIC ../Syntax_checker/Syntax_predicates/include)
target_include_directories(Manager PUBLIC ../Syntax_checker/Correct_checker_engine/include)
