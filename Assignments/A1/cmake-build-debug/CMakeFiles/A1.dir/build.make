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
CMAKE_SOURCE_DIR = /home/jo/CLionProjects/A1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jo/CLionProjects/A1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/A1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/A1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/A1.dir/flags.make

CMakeFiles/A1.dir/main.cpp.o: CMakeFiles/A1.dir/flags.make
CMakeFiles/A1.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jo/CLionProjects/A1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/A1.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/A1.dir/main.cpp.o -c /home/jo/CLionProjects/A1/main.cpp

CMakeFiles/A1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/A1.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jo/CLionProjects/A1/main.cpp > CMakeFiles/A1.dir/main.cpp.i

CMakeFiles/A1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/A1.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jo/CLionProjects/A1/main.cpp -o CMakeFiles/A1.dir/main.cpp.s

CMakeFiles/A1.dir/Predator.cpp.o: CMakeFiles/A1.dir/flags.make
CMakeFiles/A1.dir/Predator.cpp.o: ../Predator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jo/CLionProjects/A1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/A1.dir/Predator.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/A1.dir/Predator.cpp.o -c /home/jo/CLionProjects/A1/Predator.cpp

CMakeFiles/A1.dir/Predator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/A1.dir/Predator.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jo/CLionProjects/A1/Predator.cpp > CMakeFiles/A1.dir/Predator.cpp.i

CMakeFiles/A1.dir/Predator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/A1.dir/Predator.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jo/CLionProjects/A1/Predator.cpp -o CMakeFiles/A1.dir/Predator.cpp.s

CMakeFiles/A1.dir/Prey.cpp.o: CMakeFiles/A1.dir/flags.make
CMakeFiles/A1.dir/Prey.cpp.o: ../Prey.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jo/CLionProjects/A1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/A1.dir/Prey.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/A1.dir/Prey.cpp.o -c /home/jo/CLionProjects/A1/Prey.cpp

CMakeFiles/A1.dir/Prey.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/A1.dir/Prey.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jo/CLionProjects/A1/Prey.cpp > CMakeFiles/A1.dir/Prey.cpp.i

CMakeFiles/A1.dir/Prey.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/A1.dir/Prey.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jo/CLionProjects/A1/Prey.cpp -o CMakeFiles/A1.dir/Prey.cpp.s

CMakeFiles/A1.dir/Lion.cpp.o: CMakeFiles/A1.dir/flags.make
CMakeFiles/A1.dir/Lion.cpp.o: ../Lion.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jo/CLionProjects/A1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/A1.dir/Lion.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/A1.dir/Lion.cpp.o -c /home/jo/CLionProjects/A1/Lion.cpp

CMakeFiles/A1.dir/Lion.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/A1.dir/Lion.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jo/CLionProjects/A1/Lion.cpp > CMakeFiles/A1.dir/Lion.cpp.i

CMakeFiles/A1.dir/Lion.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/A1.dir/Lion.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jo/CLionProjects/A1/Lion.cpp -o CMakeFiles/A1.dir/Lion.cpp.s

CMakeFiles/A1.dir/Cheetah.cpp.o: CMakeFiles/A1.dir/flags.make
CMakeFiles/A1.dir/Cheetah.cpp.o: ../Cheetah.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jo/CLionProjects/A1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/A1.dir/Cheetah.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/A1.dir/Cheetah.cpp.o -c /home/jo/CLionProjects/A1/Cheetah.cpp

CMakeFiles/A1.dir/Cheetah.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/A1.dir/Cheetah.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jo/CLionProjects/A1/Cheetah.cpp > CMakeFiles/A1.dir/Cheetah.cpp.i

CMakeFiles/A1.dir/Cheetah.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/A1.dir/Cheetah.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jo/CLionProjects/A1/Cheetah.cpp -o CMakeFiles/A1.dir/Cheetah.cpp.s

CMakeFiles/A1.dir/Wolf.cpp.o: CMakeFiles/A1.dir/flags.make
CMakeFiles/A1.dir/Wolf.cpp.o: ../Wolf.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jo/CLionProjects/A1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/A1.dir/Wolf.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/A1.dir/Wolf.cpp.o -c /home/jo/CLionProjects/A1/Wolf.cpp

CMakeFiles/A1.dir/Wolf.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/A1.dir/Wolf.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jo/CLionProjects/A1/Wolf.cpp > CMakeFiles/A1.dir/Wolf.cpp.i

CMakeFiles/A1.dir/Wolf.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/A1.dir/Wolf.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jo/CLionProjects/A1/Wolf.cpp -o CMakeFiles/A1.dir/Wolf.cpp.s

CMakeFiles/A1.dir/WildDog.cpp.o: CMakeFiles/A1.dir/flags.make
CMakeFiles/A1.dir/WildDog.cpp.o: ../WildDog.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jo/CLionProjects/A1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/A1.dir/WildDog.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/A1.dir/WildDog.cpp.o -c /home/jo/CLionProjects/A1/WildDog.cpp

CMakeFiles/A1.dir/WildDog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/A1.dir/WildDog.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jo/CLionProjects/A1/WildDog.cpp > CMakeFiles/A1.dir/WildDog.cpp.i

CMakeFiles/A1.dir/WildDog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/A1.dir/WildDog.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jo/CLionProjects/A1/WildDog.cpp -o CMakeFiles/A1.dir/WildDog.cpp.s

CMakeFiles/A1.dir/PredatorFactory.cpp.o: CMakeFiles/A1.dir/flags.make
CMakeFiles/A1.dir/PredatorFactory.cpp.o: ../PredatorFactory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jo/CLionProjects/A1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/A1.dir/PredatorFactory.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/A1.dir/PredatorFactory.cpp.o -c /home/jo/CLionProjects/A1/PredatorFactory.cpp

CMakeFiles/A1.dir/PredatorFactory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/A1.dir/PredatorFactory.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jo/CLionProjects/A1/PredatorFactory.cpp > CMakeFiles/A1.dir/PredatorFactory.cpp.i

CMakeFiles/A1.dir/PredatorFactory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/A1.dir/PredatorFactory.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jo/CLionProjects/A1/PredatorFactory.cpp -o CMakeFiles/A1.dir/PredatorFactory.cpp.s

CMakeFiles/A1.dir/LionFactory.cpp.o: CMakeFiles/A1.dir/flags.make
CMakeFiles/A1.dir/LionFactory.cpp.o: ../LionFactory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jo/CLionProjects/A1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/A1.dir/LionFactory.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/A1.dir/LionFactory.cpp.o -c /home/jo/CLionProjects/A1/LionFactory.cpp

CMakeFiles/A1.dir/LionFactory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/A1.dir/LionFactory.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jo/CLionProjects/A1/LionFactory.cpp > CMakeFiles/A1.dir/LionFactory.cpp.i

CMakeFiles/A1.dir/LionFactory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/A1.dir/LionFactory.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jo/CLionProjects/A1/LionFactory.cpp -o CMakeFiles/A1.dir/LionFactory.cpp.s

CMakeFiles/A1.dir/CheetahFactory.cpp.o: CMakeFiles/A1.dir/flags.make
CMakeFiles/A1.dir/CheetahFactory.cpp.o: ../CheetahFactory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jo/CLionProjects/A1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/A1.dir/CheetahFactory.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/A1.dir/CheetahFactory.cpp.o -c /home/jo/CLionProjects/A1/CheetahFactory.cpp

CMakeFiles/A1.dir/CheetahFactory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/A1.dir/CheetahFactory.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jo/CLionProjects/A1/CheetahFactory.cpp > CMakeFiles/A1.dir/CheetahFactory.cpp.i

CMakeFiles/A1.dir/CheetahFactory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/A1.dir/CheetahFactory.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jo/CLionProjects/A1/CheetahFactory.cpp -o CMakeFiles/A1.dir/CheetahFactory.cpp.s

CMakeFiles/A1.dir/WolfFactory.cpp.o: CMakeFiles/A1.dir/flags.make
CMakeFiles/A1.dir/WolfFactory.cpp.o: ../WolfFactory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jo/CLionProjects/A1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/A1.dir/WolfFactory.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/A1.dir/WolfFactory.cpp.o -c /home/jo/CLionProjects/A1/WolfFactory.cpp

CMakeFiles/A1.dir/WolfFactory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/A1.dir/WolfFactory.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jo/CLionProjects/A1/WolfFactory.cpp > CMakeFiles/A1.dir/WolfFactory.cpp.i

CMakeFiles/A1.dir/WolfFactory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/A1.dir/WolfFactory.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jo/CLionProjects/A1/WolfFactory.cpp -o CMakeFiles/A1.dir/WolfFactory.cpp.s

CMakeFiles/A1.dir/WildDogFactory.cpp.o: CMakeFiles/A1.dir/flags.make
CMakeFiles/A1.dir/WildDogFactory.cpp.o: ../WildDogFactory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jo/CLionProjects/A1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/A1.dir/WildDogFactory.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/A1.dir/WildDogFactory.cpp.o -c /home/jo/CLionProjects/A1/WildDogFactory.cpp

CMakeFiles/A1.dir/WildDogFactory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/A1.dir/WildDogFactory.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jo/CLionProjects/A1/WildDogFactory.cpp > CMakeFiles/A1.dir/WildDogFactory.cpp.i

CMakeFiles/A1.dir/WildDogFactory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/A1.dir/WildDogFactory.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jo/CLionProjects/A1/WildDogFactory.cpp -o CMakeFiles/A1.dir/WildDogFactory.cpp.s

# Object files for target A1
A1_OBJECTS = \
"CMakeFiles/A1.dir/main.cpp.o" \
"CMakeFiles/A1.dir/Predator.cpp.o" \
"CMakeFiles/A1.dir/Prey.cpp.o" \
"CMakeFiles/A1.dir/Lion.cpp.o" \
"CMakeFiles/A1.dir/Cheetah.cpp.o" \
"CMakeFiles/A1.dir/Wolf.cpp.o" \
"CMakeFiles/A1.dir/WildDog.cpp.o" \
"CMakeFiles/A1.dir/PredatorFactory.cpp.o" \
"CMakeFiles/A1.dir/LionFactory.cpp.o" \
"CMakeFiles/A1.dir/CheetahFactory.cpp.o" \
"CMakeFiles/A1.dir/WolfFactory.cpp.o" \
"CMakeFiles/A1.dir/WildDogFactory.cpp.o"

# External object files for target A1
A1_EXTERNAL_OBJECTS =

A1: CMakeFiles/A1.dir/main.cpp.o
A1: CMakeFiles/A1.dir/Predator.cpp.o
A1: CMakeFiles/A1.dir/Prey.cpp.o
A1: CMakeFiles/A1.dir/Lion.cpp.o
A1: CMakeFiles/A1.dir/Cheetah.cpp.o
A1: CMakeFiles/A1.dir/Wolf.cpp.o
A1: CMakeFiles/A1.dir/WildDog.cpp.o
A1: CMakeFiles/A1.dir/PredatorFactory.cpp.o
A1: CMakeFiles/A1.dir/LionFactory.cpp.o
A1: CMakeFiles/A1.dir/CheetahFactory.cpp.o
A1: CMakeFiles/A1.dir/WolfFactory.cpp.o
A1: CMakeFiles/A1.dir/WildDogFactory.cpp.o
A1: CMakeFiles/A1.dir/build.make
A1: CMakeFiles/A1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jo/CLionProjects/A1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX executable A1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/A1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/A1.dir/build: A1

.PHONY : CMakeFiles/A1.dir/build

CMakeFiles/A1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/A1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/A1.dir/clean

CMakeFiles/A1.dir/depend:
	cd /home/jo/CLionProjects/A1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jo/CLionProjects/A1 /home/jo/CLionProjects/A1 /home/jo/CLionProjects/A1/cmake-build-debug /home/jo/CLionProjects/A1/cmake-build-debug /home/jo/CLionProjects/A1/cmake-build-debug/CMakeFiles/A1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/A1.dir/depend

