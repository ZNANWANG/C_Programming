# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = "G:\CLion 2019.3.5\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "G:\CLion 2019.3.5\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = G:\CLionProjects\C_Programming

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = G:\CLionProjects\C_Programming\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/C_Programming.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/C_Programming.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/C_Programming.dir/flags.make

CMakeFiles/C_Programming.dir/main.c.obj: CMakeFiles/C_Programming.dir/flags.make
CMakeFiles/C_Programming.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=G:\CLionProjects\C_Programming\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/C_Programming.dir/main.c.obj"
	G:\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\C_Programming.dir\main.c.obj   -c G:\CLionProjects\C_Programming\main.c

CMakeFiles/C_Programming.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/C_Programming.dir/main.c.i"
	G:\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E G:\CLionProjects\C_Programming\main.c > CMakeFiles\C_Programming.dir\main.c.i

CMakeFiles/C_Programming.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/C_Programming.dir/main.c.s"
	G:\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S G:\CLionProjects\C_Programming\main.c -o CMakeFiles\C_Programming.dir\main.c.s

# Object files for target C_Programming
C_Programming_OBJECTS = \
"CMakeFiles/C_Programming.dir/main.c.obj"

# External object files for target C_Programming
C_Programming_EXTERNAL_OBJECTS =

C_Programming.exe: CMakeFiles/C_Programming.dir/main.c.obj
C_Programming.exe: CMakeFiles/C_Programming.dir/build.make
C_Programming.exe: CMakeFiles/C_Programming.dir/linklibs.rsp
C_Programming.exe: CMakeFiles/C_Programming.dir/objects1.rsp
C_Programming.exe: CMakeFiles/C_Programming.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=G:\CLionProjects\C_Programming\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable C_Programming.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\C_Programming.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/C_Programming.dir/build: C_Programming.exe

.PHONY : CMakeFiles/C_Programming.dir/build

CMakeFiles/C_Programming.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\C_Programming.dir\cmake_clean.cmake
.PHONY : CMakeFiles/C_Programming.dir/clean

CMakeFiles/C_Programming.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" G:\CLionProjects\C_Programming G:\CLionProjects\C_Programming G:\CLionProjects\C_Programming\cmake-build-debug G:\CLionProjects\C_Programming\cmake-build-debug G:\CLionProjects\C_Programming\cmake-build-debug\CMakeFiles\C_Programming.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/C_Programming.dir/depend

