# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "F:\C++ program\Greedy\Interval Scheduling"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "F:\C++ program\Greedy\Interval Scheduling\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Interval_Scheduling.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Interval_Scheduling.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Interval_Scheduling.dir/flags.make

CMakeFiles/Interval_Scheduling.dir/main.cpp.obj: CMakeFiles/Interval_Scheduling.dir/flags.make
CMakeFiles/Interval_Scheduling.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="F:\C++ program\Greedy\Interval Scheduling\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Interval_Scheduling.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Interval_Scheduling.dir\main.cpp.obj -c "F:\C++ program\Greedy\Interval Scheduling\main.cpp"

CMakeFiles/Interval_Scheduling.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Interval_Scheduling.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "F:\C++ program\Greedy\Interval Scheduling\main.cpp" > CMakeFiles\Interval_Scheduling.dir\main.cpp.i

CMakeFiles/Interval_Scheduling.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Interval_Scheduling.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "F:\C++ program\Greedy\Interval Scheduling\main.cpp" -o CMakeFiles\Interval_Scheduling.dir\main.cpp.s

# Object files for target Interval_Scheduling
Interval_Scheduling_OBJECTS = \
"CMakeFiles/Interval_Scheduling.dir/main.cpp.obj"

# External object files for target Interval_Scheduling
Interval_Scheduling_EXTERNAL_OBJECTS =

Interval_Scheduling.exe: CMakeFiles/Interval_Scheduling.dir/main.cpp.obj
Interval_Scheduling.exe: CMakeFiles/Interval_Scheduling.dir/build.make
Interval_Scheduling.exe: CMakeFiles/Interval_Scheduling.dir/linklibs.rsp
Interval_Scheduling.exe: CMakeFiles/Interval_Scheduling.dir/objects1.rsp
Interval_Scheduling.exe: CMakeFiles/Interval_Scheduling.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="F:\C++ program\Greedy\Interval Scheduling\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Interval_Scheduling.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Interval_Scheduling.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Interval_Scheduling.dir/build: Interval_Scheduling.exe

.PHONY : CMakeFiles/Interval_Scheduling.dir/build

CMakeFiles/Interval_Scheduling.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Interval_Scheduling.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Interval_Scheduling.dir/clean

CMakeFiles/Interval_Scheduling.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "F:\C++ program\Greedy\Interval Scheduling" "F:\C++ program\Greedy\Interval Scheduling" "F:\C++ program\Greedy\Interval Scheduling\cmake-build-debug" "F:\C++ program\Greedy\Interval Scheduling\cmake-build-debug" "F:\C++ program\Greedy\Interval Scheduling\cmake-build-debug\CMakeFiles\Interval_Scheduling.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Interval_Scheduling.dir/depend
