# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /home/jo/Downloads/clion-2020.2/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/jo/Downloads/clion-2020.2/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jo/CLionProjects/ClassExamples

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jo/CLionProjects/ClassExamples/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ClassExamples.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ClassExamples.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ClassExamples.dir/flags.make

CMakeFiles/ClassExamples.dir/main.cpp.o: CMakeFiles/ClassExamples.dir/flags.make
CMakeFiles/ClassExamples.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jo/CLionProjects/ClassExamples/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ClassExamples.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ClassExamples.dir/main.cpp.o -c /home/jo/CLionProjects/ClassExamples/main.cpp

CMakeFiles/ClassExamples.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ClassExamples.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jo/CLionProjects/ClassExamples/main.cpp > CMakeFiles/ClassExamples.dir/main.cpp.i

CMakeFiles/ClassExamples.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ClassExamples.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jo/CLionProjects/ClassExamples/main.cpp -o CMakeFiles/ClassExamples.dir/main.cpp.s

CMakeFiles/ClassExamples.dir/TemplateMethod.cpp.o: CMakeFiles/ClassExamples.dir/flags.make
CMakeFiles/ClassExamples.dir/TemplateMethod.cpp.o: ../TemplateMethod.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jo/CLionProjects/ClassExamples/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ClassExamples.dir/TemplateMethod.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ClassExamples.dir/TemplateMethod.cpp.o -c /home/jo/CLionProjects/ClassExamples/TemplateMethod.cpp

CMakeFiles/ClassExamples.dir/TemplateMethod.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ClassExamples.dir/TemplateMethod.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jo/CLionProjects/ClassExamples/TemplateMethod.cpp > CMakeFiles/ClassExamples.dir/TemplateMethod.cpp.i

CMakeFiles/ClassExamples.dir/TemplateMethod.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ClassExamples.dir/TemplateMethod.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jo/CLionProjects/ClassExamples/TemplateMethod.cpp -o CMakeFiles/ClassExamples.dir/TemplateMethod.cpp.s

# Object files for target ClassExamples
ClassExamples_OBJECTS = \
"CMakeFiles/ClassExamples.dir/main.cpp.o" \
"CMakeFiles/ClassExamples.dir/TemplateMethod.cpp.o"

# External object files for target ClassExamples
ClassExamples_EXTERNAL_OBJECTS =

ClassExamples: CMakeFiles/ClassExamples.dir/main.cpp.o
ClassExamples: CMakeFiles/ClassExamples.dir/TemplateMethod.cpp.o
ClassExamples: CMakeFiles/ClassExamples.dir/build.make
ClassExamples: CMakeFiles/ClassExamples.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jo/CLionProjects/ClassExamples/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ClassExamples"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ClassExamples.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ClassExamples.dir/build: ClassExamples

.PHONY : CMakeFiles/ClassExamples.dir/build

CMakeFiles/ClassExamples.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ClassExamples.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ClassExamples.dir/clean

CMakeFiles/ClassExamples.dir/depend:
	cd /home/jo/CLionProjects/ClassExamples/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jo/CLionProjects/ClassExamples /home/jo/CLionProjects/ClassExamples /home/jo/CLionProjects/ClassExamples/cmake-build-debug /home/jo/CLionProjects/ClassExamples/cmake-build-debug /home/jo/CLionProjects/ClassExamples/cmake-build-debug/CMakeFiles/ClassExamples.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ClassExamples.dir/depend

