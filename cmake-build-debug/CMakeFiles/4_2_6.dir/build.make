# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "G:\CLion 2020.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "G:\CLion 2020.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = G:\CLionProjects\C_Programming

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = G:\CLionProjects\C_Programming\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/4_2_6.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/4_2_6.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/4_2_6.dir/flags.make

CMakeFiles/4_2_6.dir/zju_experiment/4_2_6.c.obj: CMakeFiles/4_2_6.dir/flags.make
CMakeFiles/4_2_6.dir/zju_experiment/4_2_6.c.obj: ../zju_experiment/4_2_6.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=G:\CLionProjects\C_Programming\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/4_2_6.dir/zju_experiment/4_2_6.c.obj"
	G:\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\4_2_6.dir\zju_experiment\4_2_6.c.obj   -c G:\CLionProjects\C_Programming\zju_experiment\4_2_6.c

CMakeFiles/4_2_6.dir/zju_experiment/4_2_6.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/4_2_6.dir/zju_experiment/4_2_6.c.i"
	G:\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E G:\CLionProjects\C_Programming\zju_experiment\4_2_6.c > CMakeFiles\4_2_6.dir\zju_experiment\4_2_6.c.i

CMakeFiles/4_2_6.dir/zju_experiment/4_2_6.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/4_2_6.dir/zju_experiment/4_2_6.c.s"
	G:\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S G:\CLionProjects\C_Programming\zju_experiment\4_2_6.c -o CMakeFiles\4_2_6.dir\zju_experiment\4_2_6.c.s

# Object files for target 4_2_6
4_2_6_OBJECTS = \
"CMakeFiles/4_2_6.dir/zju_experiment/4_2_6.c.obj"

# External object files for target 4_2_6
4_2_6_EXTERNAL_OBJECTS =

4_2_6.exe: CMakeFiles/4_2_6.dir/zju_experiment/4_2_6.c.obj
4_2_6.exe: CMakeFiles/4_2_6.dir/build.make
4_2_6.exe: CMakeFiles/4_2_6.dir/linklibs.rsp
4_2_6.exe: CMakeFiles/4_2_6.dir/objects1.rsp
4_2_6.exe: CMakeFiles/4_2_6.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=G:\CLionProjects\C_Programming\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 4_2_6.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\4_2_6.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/4_2_6.dir/build: 4_2_6.exe

.PHONY : CMakeFiles/4_2_6.dir/build

CMakeFiles/4_2_6.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\4_2_6.dir\cmake_clean.cmake
.PHONY : CMakeFiles/4_2_6.dir/clean

CMakeFiles/4_2_6.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" G:\CLionProjects\C_Programming G:\CLionProjects\C_Programming G:\CLionProjects\C_Programming\cmake-build-debug G:\CLionProjects\C_Programming\cmake-build-debug G:\CLionProjects\C_Programming\cmake-build-debug\CMakeFiles\4_2_6.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/4_2_6.dir/depend

