cmake_minimum_required(VERSION 3.5)

project(scorpion LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include())

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(scorpion
    main.cpp
    MainProgram.cpp
    MainProgram.hpp
    Parser.cpp
    Parser.hpp
    RuntimeSyntaxAnalizer.cpp
    RuntimeSyntaxAnalizer.hpp
    test.cpp
    test.hpp
    )

target_link_libraries(scorpion ${GTEST_LIBRARIES} pthread)
