# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/damiano/clion-2020.1.3/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/damiano/clion-2020.1.3/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/damiano/scorpion

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/damiano/scorpion/cmake-build-debug

# Include any dependencies generated for this target.
include Program/CMakeFiles/Program.dir/depend.make

# Include the progress variables for this target.
include Program/CMakeFiles/Program.dir/progress.make

# Include the compile flags for this target's objects.
include Program/CMakeFiles/Program.dir/flags.make

Program/CMakeFiles/Program.dir/src/Program_base.cpp.o: Program/CMakeFiles/Program.dir/flags.make
Program/CMakeFiles/Program.dir/src/Program_base.cpp.o: ../Program/src/Program_base.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/damiano/scorpion/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Program/CMakeFiles/Program.dir/src/Program_base.cpp.o"
	cd /home/damiano/scorpion/cmake-build-debug/Program && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Program.dir/src/Program_base.cpp.o -c /home/damiano/scorpion/Program/src/Program_base.cpp

Program/CMakeFiles/Program.dir/src/Program_base.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Program.dir/src/Program_base.cpp.i"
	cd /home/damiano/scorpion/cmake-build-debug/Program && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/damiano/scorpion/Program/src/Program_base.cpp > CMakeFiles/Program.dir/src/Program_base.cpp.i

Program/CMakeFiles/Program.dir/src/Program_base.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Program.dir/src/Program_base.cpp.s"
	cd /home/damiano/scorpion/cmake-build-debug/Program && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/damiano/scorpion/Program/src/Program_base.cpp -o CMakeFiles/Program.dir/src/Program_base.cpp.s

# Object files for target Program
Program_OBJECTS = \
"CMakeFiles/Program.dir/src/Program_base.cpp.o"

# External object files for target Program
Program_EXTERNAL_OBJECTS =

Program/libProgram.a: Program/CMakeFiles/Program.dir/src/Program_base.cpp.o
Program/libProgram.a: Program/CMakeFiles/Program.dir/build.make
Program/libProgram.a: Program/CMakeFiles/Program.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/damiano/scorpion/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libProgram.a"
	cd /home/damiano/scorpion/cmake-build-debug/Program && $(CMAKE_COMMAND) -P CMakeFiles/Program.dir/cmake_clean_target.cmake
	cd /home/damiano/scorpion/cmake-build-debug/Program && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Program.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Program/CMakeFiles/Program.dir/build: Program/libProgram.a

.PHONY : Program/CMakeFiles/Program.dir/build

Program/CMakeFiles/Program.dir/clean:
	cd /home/damiano/scorpion/cmake-build-debug/Program && $(CMAKE_COMMAND) -P CMakeFiles/Program.dir/cmake_clean.cmake
.PHONY : Program/CMakeFiles/Program.dir/clean

Program/CMakeFiles/Program.dir/depend:
	cd /home/damiano/scorpion/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/damiano/scorpion /home/damiano/scorpion/Program /home/damiano/scorpion/cmake-build-debug /home/damiano/scorpion/cmake-build-debug/Program /home/damiano/scorpion/cmake-build-debug/Program/CMakeFiles/Program.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Program/CMakeFiles/Program.dir/depend

