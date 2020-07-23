cmake_minimum_required(VERSION 3.5)

project(scorpion LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_subdirectory(Channel)
add_subdirectory(Channel_flag)
add_subdirectory(Command)
add_subdirectory(Error)
add_subdirectory(Parser)
add_subdirectory(Program)
add_subdirectory(Receiver)
add_subdirectory(Runtime_tools)
add_subdirectory(Syntax_checker)
add_subdirectory(Manager)
add_subdirectory(Common_interfaces)
add_subdirectory(Executer)
add_subdirectory(Converter)




set(CMAKE_CXX_FLAGS_COVERAGE "${CMAKE_CXX_FLAGS_RELEASE} -fprofile-arcs -ftest-coverage")

# set up a mapping so that the Release configuration for the Qt imported target is
# used in the COVERAGE CMake configuration.

find_package(PalSigslot)

include_directories(include())

add_executable(scorpion
    #Others
    main.cpp
    MainProgram.hpp
    ${SRC_LIST} ${RESOURCES}
    )
target_link_libraries(scorpion Channel_flag)
target_link_libraries(scorpion Channel)
target_link_libraries(scorpion Executer)

target_include_directories(Manager PUBLIC include)
target_include_directories(Manager PUBLIC ../Receiver/include)
target_include_directories(Manager PUBLIC ../Command/include)
target_include_directories(Receiver PUBLIC ../Converter/include)

target_link_libraries(scorpion ${GTEST_LIBRARIES} pthread)
target_link_libraries(scorpion  Pal::Sigslot)
