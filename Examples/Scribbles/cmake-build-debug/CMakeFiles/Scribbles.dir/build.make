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
CMAKE_SOURCE_DIR = /home/jo/CLionProjects/Software-Modelling/Examples/Scribbles

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jo/CLionProjects/Software-Modelling/Examples/Scribbles/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Scribbles.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Scribbles.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Scribbles.dir/flags.make

CMakeFiles/Scribbles.dir/main.cpp.o: CMakeFiles/Scribbles.dir/flags.make
CMakeFiles/Scribbles.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jo/CLionProjects/Software-Modelling/Examples/Scribbles/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Scribbles.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Scribbles.dir/main.cpp.o -c /home/jo/CLionProjects/Software-Modelling/Examples/Scribbles/main.cpp

CMakeFiles/Scribbles.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Scribbles.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jo/CLionProjects/Software-Modelling/Examples/Scribbles/main.cpp > CMakeFiles/Scribbles.dir/main.cpp.i

CMakeFiles/Scribbles.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Scribbles.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jo/CLionProjects/Software-Modelling/Examples/Scribbles/main.cpp -o CMakeFiles/Scribbles.dir/main.cpp.s

CMakeFiles/Scribbles.dir/EO2_2019.cpp.o: CMakeFiles/Scribbles.dir/flags.make
CMakeFiles/Scribbles.dir/EO2_2019.cpp.o: ../EO2_2019.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jo/CLionProjects/Software-Modelling/Examples/Scribbles/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Scribbles.dir/EO2_2019.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Scribbles.dir/EO2_2019.cpp.o -c /home/jo/CLionProjects/Software-Modelling/Examples/Scribbles/EO2_2019.cpp

CMakeFiles/Scribbles.dir/EO2_2019.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Scribbles.dir/EO2_2019.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jo/CLionProjects/Software-Modelling/Examples/Scribbles/EO2_2019.cpp > CMakeFiles/Scribbles.dir/EO2_2019.cpp.i

CMakeFiles/Scribbles.dir/EO2_2019.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Scribbles.dir/EO2_2019.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jo/CLionProjects/Software-Modelling/Examples/Scribbles/EO2_2019.cpp -o CMakeFiles/Scribbles.dir/EO2_2019.cpp.s

# Object files for target Scribbles
Scribbles_OBJECTS = \
"CMakeFiles/Scribbles.dir/main.cpp.o" \
"CMakeFiles/Scribbles.dir/EO2_2019.cpp.o"

# External object files for target Scribbles
Scribbles_EXTERNAL_OBJECTS =

Scribbles: CMakeFiles/Scribbles.dir/main.cpp.o
Scribbles: CMakeFiles/Scribbles.dir/EO2_2019.cpp.o
Scribbles: CMakeFiles/Scribbles.dir/build.make
Scribbles: CMakeFiles/Scribbles.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jo/CLionProjects/Software-Modelling/Examples/Scribbles/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Scribbles"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Scribbles.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Scribbles.dir/build: Scribbles

.PHONY : CMakeFiles/Scribbles.dir/build

CMakeFiles/Scribbles.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Scribbles.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Scribbles.dir/clean

CMakeFiles/Scribbles.dir/depend:
	cd /home/jo/CLionProjects/Software-Modelling/Examples/Scribbles/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jo/CLionProjects/Software-Modelling/Examples/Scribbles /home/jo/CLionProjects/Software-Modelling/Examples/Scribbles /home/jo/CLionProjects/Software-Modelling/Examples/Scribbles/cmake-build-debug /home/jo/CLionProjects/Software-Modelling/Examples/Scribbles/cmake-build-debug /home/jo/CLionProjects/Software-Modelling/Examples/Scribbles/cmake-build-debug/CMakeFiles/Scribbles.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Scribbles.dir/depend
