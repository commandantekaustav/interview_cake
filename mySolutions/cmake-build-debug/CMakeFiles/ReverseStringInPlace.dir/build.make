# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Program Files\JetBrains\apps\CLion\ch-0\202.7660.37\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\apps\CLion\ch-0\202.7660.37\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\interview_cake\mySolutions

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\interview_cake\mySolutions\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ReverseStringInPlace.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ReverseStringInPlace.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ReverseStringInPlace.dir/flags.make

CMakeFiles/ReverseStringInPlace.dir/ReverseStringInPlace.cpp.obj: CMakeFiles/ReverseStringInPlace.dir/flags.make
CMakeFiles/ReverseStringInPlace.dir/ReverseStringInPlace.cpp.obj: ../ReverseStringInPlace.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\interview_cake\mySolutions\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ReverseStringInPlace.dir/ReverseStringInPlace.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ReverseStringInPlace.dir\ReverseStringInPlace.cpp.obj -c D:\interview_cake\mySolutions\ReverseStringInPlace.cpp

CMakeFiles/ReverseStringInPlace.dir/ReverseStringInPlace.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReverseStringInPlace.dir/ReverseStringInPlace.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\interview_cake\mySolutions\ReverseStringInPlace.cpp > CMakeFiles\ReverseStringInPlace.dir\ReverseStringInPlace.cpp.i

CMakeFiles/ReverseStringInPlace.dir/ReverseStringInPlace.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReverseStringInPlace.dir/ReverseStringInPlace.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\interview_cake\mySolutions\ReverseStringInPlace.cpp -o CMakeFiles\ReverseStringInPlace.dir\ReverseStringInPlace.cpp.s

# Object files for target ReverseStringInPlace
ReverseStringInPlace_OBJECTS = \
"CMakeFiles/ReverseStringInPlace.dir/ReverseStringInPlace.cpp.obj"

# External object files for target ReverseStringInPlace
ReverseStringInPlace_EXTERNAL_OBJECTS =

ReverseStringInPlace.exe: CMakeFiles/ReverseStringInPlace.dir/ReverseStringInPlace.cpp.obj
ReverseStringInPlace.exe: CMakeFiles/ReverseStringInPlace.dir/build.make
ReverseStringInPlace.exe: CMakeFiles/ReverseStringInPlace.dir/linklibs.rsp
ReverseStringInPlace.exe: CMakeFiles/ReverseStringInPlace.dir/objects1.rsp
ReverseStringInPlace.exe: CMakeFiles/ReverseStringInPlace.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\interview_cake\mySolutions\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ReverseStringInPlace.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ReverseStringInPlace.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ReverseStringInPlace.dir/build: ReverseStringInPlace.exe

.PHONY : CMakeFiles/ReverseStringInPlace.dir/build

CMakeFiles/ReverseStringInPlace.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ReverseStringInPlace.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ReverseStringInPlace.dir/clean

CMakeFiles/ReverseStringInPlace.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\interview_cake\mySolutions D:\interview_cake\mySolutions D:\interview_cake\mySolutions\cmake-build-debug D:\interview_cake\mySolutions\cmake-build-debug D:\interview_cake\mySolutions\cmake-build-debug\CMakeFiles\ReverseStringInPlace.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ReverseStringInPlace.dir/depend

