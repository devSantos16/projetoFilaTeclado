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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/fredericojacobi/Cursos/ControleCarga

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/fredericojacobi/Cursos/ControleCarga/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ControleCarga.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ControleCarga.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ControleCarga.dir/flags.make

CMakeFiles/ControleCarga.dir/main.c.o: CMakeFiles/ControleCarga.dir/flags.make
CMakeFiles/ControleCarga.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/fredericojacobi/Cursos/ControleCarga/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ControleCarga.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ControleCarga.dir/main.c.o   -c /Users/fredericojacobi/Cursos/ControleCarga/main.c

CMakeFiles/ControleCarga.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ControleCarga.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/fredericojacobi/Cursos/ControleCarga/main.c > CMakeFiles/ControleCarga.dir/main.c.i

CMakeFiles/ControleCarga.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ControleCarga.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/fredericojacobi/Cursos/ControleCarga/main.c -o CMakeFiles/ControleCarga.dir/main.c.s

CMakeFiles/ControleCarga.dir/vetor.c.o: CMakeFiles/ControleCarga.dir/flags.make
CMakeFiles/ControleCarga.dir/vetor.c.o: ../vetor.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/fredericojacobi/Cursos/ControleCarga/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/ControleCarga.dir/vetor.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ControleCarga.dir/vetor.c.o   -c /Users/fredericojacobi/Cursos/ControleCarga/vetor.c

CMakeFiles/ControleCarga.dir/vetor.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ControleCarga.dir/vetor.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/fredericojacobi/Cursos/ControleCarga/vetor.c > CMakeFiles/ControleCarga.dir/vetor.c.i

CMakeFiles/ControleCarga.dir/vetor.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ControleCarga.dir/vetor.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/fredericojacobi/Cursos/ControleCarga/vetor.c -o CMakeFiles/ControleCarga.dir/vetor.c.s

CMakeFiles/ControleCarga.dir/menu.c.o: CMakeFiles/ControleCarga.dir/flags.make
CMakeFiles/ControleCarga.dir/menu.c.o: ../menu.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/fredericojacobi/Cursos/ControleCarga/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/ControleCarga.dir/menu.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ControleCarga.dir/menu.c.o   -c /Users/fredericojacobi/Cursos/ControleCarga/menu.c

CMakeFiles/ControleCarga.dir/menu.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ControleCarga.dir/menu.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/fredericojacobi/Cursos/ControleCarga/menu.c > CMakeFiles/ControleCarga.dir/menu.c.i

CMakeFiles/ControleCarga.dir/menu.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ControleCarga.dir/menu.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/fredericojacobi/Cursos/ControleCarga/menu.c -o CMakeFiles/ControleCarga.dir/menu.c.s

# Object files for target ControleCarga
ControleCarga_OBJECTS = \
"CMakeFiles/ControleCarga.dir/main.c.o" \
"CMakeFiles/ControleCarga.dir/vetor.c.o" \
"CMakeFiles/ControleCarga.dir/menu.c.o"

# External object files for target ControleCarga
ControleCarga_EXTERNAL_OBJECTS =

ControleCarga: CMakeFiles/ControleCarga.dir/main.c.o
ControleCarga: CMakeFiles/ControleCarga.dir/vetor.c.o
ControleCarga: CMakeFiles/ControleCarga.dir/menu.c.o
ControleCarga: CMakeFiles/ControleCarga.dir/build.make
ControleCarga: CMakeFiles/ControleCarga.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/fredericojacobi/Cursos/ControleCarga/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable ControleCarga"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ControleCarga.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ControleCarga.dir/build: ControleCarga

.PHONY : CMakeFiles/ControleCarga.dir/build

CMakeFiles/ControleCarga.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ControleCarga.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ControleCarga.dir/clean

CMakeFiles/ControleCarga.dir/depend:
	cd /Users/fredericojacobi/Cursos/ControleCarga/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/fredericojacobi/Cursos/ControleCarga /Users/fredericojacobi/Cursos/ControleCarga /Users/fredericojacobi/Cursos/ControleCarga/cmake-build-debug /Users/fredericojacobi/Cursos/ControleCarga/cmake-build-debug /Users/fredericojacobi/Cursos/ControleCarga/cmake-build-debug/CMakeFiles/ControleCarga.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ControleCarga.dir/depend

