# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /home/wandsman/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/211.7442.42/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/wandsman/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/211.7442.42/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/wandsman/Repositories/skillbox_hometask/12/Self-isolation level"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/wandsman/Repositories/skillbox_hometask/12/Self-isolation level/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Self_isolation_level.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Self_isolation_level.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Self_isolation_level.dir/flags.make

CMakeFiles/Self_isolation_level.dir/main.cpp.o: CMakeFiles/Self_isolation_level.dir/flags.make
CMakeFiles/Self_isolation_level.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/wandsman/Repositories/skillbox_hometask/12/Self-isolation level/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Self_isolation_level.dir/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Self_isolation_level.dir/main.cpp.o -c "/home/wandsman/Repositories/skillbox_hometask/12/Self-isolation level/main.cpp"

CMakeFiles/Self_isolation_level.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Self_isolation_level.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/wandsman/Repositories/skillbox_hometask/12/Self-isolation level/main.cpp" > CMakeFiles/Self_isolation_level.dir/main.cpp.i

CMakeFiles/Self_isolation_level.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Self_isolation_level.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/wandsman/Repositories/skillbox_hometask/12/Self-isolation level/main.cpp" -o CMakeFiles/Self_isolation_level.dir/main.cpp.s

# Object files for target Self_isolation_level
Self_isolation_level_OBJECTS = \
"CMakeFiles/Self_isolation_level.dir/main.cpp.o"

# External object files for target Self_isolation_level
Self_isolation_level_EXTERNAL_OBJECTS =

Self_isolation_level: CMakeFiles/Self_isolation_level.dir/main.cpp.o
Self_isolation_level: CMakeFiles/Self_isolation_level.dir/build.make
Self_isolation_level: CMakeFiles/Self_isolation_level.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/wandsman/Repositories/skillbox_hometask/12/Self-isolation level/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Self_isolation_level"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Self_isolation_level.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Self_isolation_level.dir/build: Self_isolation_level

.PHONY : CMakeFiles/Self_isolation_level.dir/build

CMakeFiles/Self_isolation_level.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Self_isolation_level.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Self_isolation_level.dir/clean

CMakeFiles/Self_isolation_level.dir/depend:
	cd "/home/wandsman/Repositories/skillbox_hometask/12/Self-isolation level/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/wandsman/Repositories/skillbox_hometask/12/Self-isolation level" "/home/wandsman/Repositories/skillbox_hometask/12/Self-isolation level" "/home/wandsman/Repositories/skillbox_hometask/12/Self-isolation level/cmake-build-debug" "/home/wandsman/Repositories/skillbox_hometask/12/Self-isolation level/cmake-build-debug" "/home/wandsman/Repositories/skillbox_hometask/12/Self-isolation level/cmake-build-debug/CMakeFiles/Self_isolation_level.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Self_isolation_level.dir/depend

