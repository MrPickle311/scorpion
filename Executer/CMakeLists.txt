add_library(Executer
    src/Executer.cpp
    include/Executer.hpp
    )

target_include_directories(Executer PUBLIC include)
target_include_directories(Executer PUBLIC ../Manager/include)
target_include_directories(Executer PUBLIC ../Command/include)
target_include_directories(Executer PUBLIC ../Receiver/include)
target_include_directories(Executer PUBLIC ../Syntax_checker/include)
target_include_directories(Executer PUBLIC ../Converter/include)
target_include_directories(Executer PUBLIC ../Parser/include)
target_include_directories(Executer PUBLIC ../Syntax_checker/Syntax_predicates/include)
target_include_directories(Executer PUBLIC ../Syntax_checker/Correct_checker_engine/include)
