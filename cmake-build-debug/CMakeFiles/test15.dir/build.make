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
include CMakeFiles/test15.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test15.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test15.dir/flags.make

CMakeFiles/test15.dir/test/test15.c.obj: CMakeFiles/test15.dir/flags.make
CMakeFiles/test15.dir/test/test15.c.obj: ../test/test15.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=G:\CLionProjects\C_Programming\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/test15.dir/test/test15.c.obj"
	G:\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\test15.dir\test\test15.c.obj   -c G:\CLionProjects\C_Programming\test\test15.c

CMakeFiles/test15.dir/test/test15.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test15.dir/test/test15.c.i"
	G:\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E G:\CLionProjects\C_Programming\test\test15.c > CMakeFiles\test15.dir\test\test15.c.i

CMakeFiles/test15.dir/test/test15.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test15.dir/test/test15.c.s"
	G:\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S G:\CLionProjects\C_Programming\test\test15.c -o CMakeFiles\test15.dir\test\test15.c.s

# Object files for target test15
test15_OBJECTS = \
"CMakeFiles/test15.dir/test/test15.c.obj"

# External object files for target test15
test15_EXTERNAL_OBJECTS =

test15.exe: CMakeFiles/test15.dir/test/test15.c.obj
test15.exe: CMakeFiles/test15.dir/build.make
test15.exe: CMakeFiles/test15.dir/linklibs.rsp
test15.exe: CMakeFiles/test15.dir/objects1.rsp
test15.exe: CMakeFiles/test15.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=G:\CLionProjects\C_Programming\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable test15.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\test15.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test15.dir/build: test15.exe

.PHONY : CMakeFiles/test15.dir/build

CMakeFiles/test15.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\test15.dir\cmake_clean.cmake
.PHONY : CMakeFiles/test15.dir/clean

CMakeFiles/test15.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" G:\CLionProjects\C_Programming G:\CLionProjects\C_Programming G:\CLionProjects\C_Programming\cmake-build-debug G:\CLionProjects\C_Programming\cmake-build-debug G:\CLionProjects\C_Programming\cmake-build-debug\CMakeFiles\test15.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test15.dir/depend

