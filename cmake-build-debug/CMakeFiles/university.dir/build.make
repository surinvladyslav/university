# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/aarch64/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/aarch64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/surinvladyslav/Desktop/university

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/surinvladyslav/Desktop/university/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/university.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/university.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/university.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/university.dir/flags.make

CMakeFiles/university.dir/src/course1/semester2/assignment1/Assignment1Part2.cpp.o: CMakeFiles/university.dir/flags.make
CMakeFiles/university.dir/src/course1/semester2/assignment1/Assignment1Part2.cpp.o: /Users/surinvladyslav/Desktop/university/src/course1/semester2/assignment1/Assignment1Part2.cpp
CMakeFiles/university.dir/src/course1/semester2/assignment1/Assignment1Part2.cpp.o: CMakeFiles/university.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/surinvladyslav/Desktop/university/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/university.dir/src/course1/semester2/assignment1/Assignment1Part2.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/university.dir/src/course1/semester2/assignment1/Assignment1Part2.cpp.o -MF CMakeFiles/university.dir/src/course1/semester2/assignment1/Assignment1Part2.cpp.o.d -o CMakeFiles/university.dir/src/course1/semester2/assignment1/Assignment1Part2.cpp.o -c /Users/surinvladyslav/Desktop/university/src/course1/semester2/assignment1/Assignment1Part2.cpp

CMakeFiles/university.dir/src/course1/semester2/assignment1/Assignment1Part2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/university.dir/src/course1/semester2/assignment1/Assignment1Part2.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/surinvladyslav/Desktop/university/src/course1/semester2/assignment1/Assignment1Part2.cpp > CMakeFiles/university.dir/src/course1/semester2/assignment1/Assignment1Part2.cpp.i

CMakeFiles/university.dir/src/course1/semester2/assignment1/Assignment1Part2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/university.dir/src/course1/semester2/assignment1/Assignment1Part2.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/surinvladyslav/Desktop/university/src/course1/semester2/assignment1/Assignment1Part2.cpp -o CMakeFiles/university.dir/src/course1/semester2/assignment1/Assignment1Part2.cpp.s

# Object files for target university
university_OBJECTS = \
"CMakeFiles/university.dir/src/course1/semester2/assignment1/Assignment1Part2.cpp.o"

# External object files for target university
university_EXTERNAL_OBJECTS =

university: CMakeFiles/university.dir/src/course1/semester2/assignment1/Assignment1Part2.cpp.o
university: CMakeFiles/university.dir/build.make
university: CMakeFiles/university.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/surinvladyslav/Desktop/university/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable university"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/university.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/university.dir/build: university
.PHONY : CMakeFiles/university.dir/build

CMakeFiles/university.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/university.dir/cmake_clean.cmake
.PHONY : CMakeFiles/university.dir/clean

CMakeFiles/university.dir/depend:
	cd /Users/surinvladyslav/Desktop/university/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/surinvladyslav/Desktop/university /Users/surinvladyslav/Desktop/university /Users/surinvladyslav/Desktop/university/cmake-build-debug /Users/surinvladyslav/Desktop/university/cmake-build-debug /Users/surinvladyslav/Desktop/university/cmake-build-debug/CMakeFiles/university.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/university.dir/depend

