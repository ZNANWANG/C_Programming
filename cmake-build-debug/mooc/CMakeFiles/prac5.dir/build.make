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
include mooc/CMakeFiles/prac5.dir/depend.make

# Include the progress variables for this target.
include mooc/CMakeFiles/prac5.dir/progress.make

# Include the compile flags for this target's objects.
include mooc/CMakeFiles/prac5.dir/flags.make

mooc/CMakeFiles/prac5.dir/prac5.c.obj: mooc/CMakeFiles/prac5.dir/flags.make
mooc/CMakeFiles/prac5.dir/prac5.c.obj: mooc/CMakeFiles/prac5.dir/includes_C.rsp
mooc/CMakeFiles/prac5.dir/prac5.c.obj: ../mooc/prac5.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=G:\CLionProjects\C_Programming\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object mooc/CMakeFiles/prac5.dir/prac5.c.obj"
	cd /d G:\CLionProjects\C_Programming\cmake-build-debug\mooc && G:\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\prac5.dir\prac5.c.obj   -c G:\CLionProjects\C_Programming\mooc\prac5.c

mooc/CMakeFiles/prac5.dir/prac5.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/prac5.dir/prac5.c.i"
	cd /d G:\CLionProjects\C_Programming\cmake-build-debug\mooc && G:\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E G:\CLionProjects\C_Programming\mooc\prac5.c > CMakeFiles\prac5.dir\prac5.c.i

mooc/CMakeFiles/prac5.dir/prac5.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/prac5.dir/prac5.c.s"
	cd /d G:\CLionProjects\C_Programming\cmake-build-debug\mooc && G:\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S G:\CLionProjects\C_Programming\mooc\prac5.c -o CMakeFiles\prac5.dir\prac5.c.s

# Object files for target prac5
prac5_OBJECTS = \
"CMakeFiles/prac5.dir/prac5.c.obj"

# External object files for target prac5
prac5_EXTERNAL_OBJECTS =

mooc/prac5.exe: mooc/CMakeFiles/prac5.dir/prac5.c.obj
mooc/prac5.exe: mooc/CMakeFiles/prac5.dir/build.make
mooc/prac5.exe: mooc/CMakeFiles/prac5.dir/linklibs.rsp
mooc/prac5.exe: mooc/CMakeFiles/prac5.dir/objects1.rsp
mooc/prac5.exe: mooc/CMakeFiles/prac5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=G:\CLionProjects\C_Programming\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable prac5.exe"
	cd /d G:\CLionProjects\C_Programming\cmake-build-debug\mooc && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\prac5.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
mooc/CMakeFiles/prac5.dir/build: mooc/prac5.exe

.PHONY : mooc/CMakeFiles/prac5.dir/build

mooc/CMakeFiles/prac5.dir/clean:
	cd /d G:\CLionProjects\C_Programming\cmake-build-debug\mooc && $(CMAKE_COMMAND) -P CMakeFiles\prac5.dir\cmake_clean.cmake
.PHONY : mooc/CMakeFiles/prac5.dir/clean

mooc/CMakeFiles/prac5.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" G:\CLionProjects\C_Programming G:\CLionProjects\C_Programming\mooc G:\CLionProjects\C_Programming\cmake-build-debug G:\CLionProjects\C_Programming\cmake-build-debug\mooc G:\CLionProjects\C_Programming\cmake-build-debug\mooc\CMakeFiles\prac5.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : mooc/CMakeFiles/prac5.dir/depend

