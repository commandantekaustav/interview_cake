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
CMAKE_COMMAND = "D:\Clion\CLion 2020.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Clion\CLion 2020.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\interview_cake\mySolutions

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\interview_cake\mySolutions\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/MergingMeetingProblems.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MergingMeetingProblems.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MergingMeetingProblems.dir/flags.make

CMakeFiles/MergingMeetingProblems.dir/MergingMeetingProblems.cpp.obj: CMakeFiles/MergingMeetingProblems.dir/flags.make
CMakeFiles/MergingMeetingProblems.dir/MergingMeetingProblems.cpp.obj: ../MergingMeetingProblems.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\interview_cake\mySolutions\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MergingMeetingProblems.dir/MergingMeetingProblems.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\MergingMeetingProblems.dir\MergingMeetingProblems.cpp.obj -c D:\interview_cake\mySolutions\MergingMeetingProblems.cpp

CMakeFiles/MergingMeetingProblems.dir/MergingMeetingProblems.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MergingMeetingProblems.dir/MergingMeetingProblems.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\interview_cake\mySolutions\MergingMeetingProblems.cpp > CMakeFiles\MergingMeetingProblems.dir\MergingMeetingProblems.cpp.i

CMakeFiles/MergingMeetingProblems.dir/MergingMeetingProblems.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MergingMeetingProblems.dir/MergingMeetingProblems.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\interview_cake\mySolutions\MergingMeetingProblems.cpp -o CMakeFiles\MergingMeetingProblems.dir\MergingMeetingProblems.cpp.s

# Object files for target MergingMeetingProblems
MergingMeetingProblems_OBJECTS = \
"CMakeFiles/MergingMeetingProblems.dir/MergingMeetingProblems.cpp.obj"

# External object files for target MergingMeetingProblems
MergingMeetingProblems_EXTERNAL_OBJECTS =

MergingMeetingProblems.exe: CMakeFiles/MergingMeetingProblems.dir/MergingMeetingProblems.cpp.obj
MergingMeetingProblems.exe: CMakeFiles/MergingMeetingProblems.dir/build.make
MergingMeetingProblems.exe: CMakeFiles/MergingMeetingProblems.dir/linklibs.rsp
MergingMeetingProblems.exe: CMakeFiles/MergingMeetingProblems.dir/objects1.rsp
MergingMeetingProblems.exe: CMakeFiles/MergingMeetingProblems.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\interview_cake\mySolutions\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MergingMeetingProblems.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\MergingMeetingProblems.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MergingMeetingProblems.dir/build: MergingMeetingProblems.exe

.PHONY : CMakeFiles/MergingMeetingProblems.dir/build

CMakeFiles/MergingMeetingProblems.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\MergingMeetingProblems.dir\cmake_clean.cmake
.PHONY : CMakeFiles/MergingMeetingProblems.dir/clean

CMakeFiles/MergingMeetingProblems.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\interview_cake\mySolutions D:\interview_cake\mySolutions D:\interview_cake\mySolutions\cmake-build-debug D:\interview_cake\mySolutions\cmake-build-debug D:\interview_cake\mySolutions\cmake-build-debug\CMakeFiles\MergingMeetingProblems.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MergingMeetingProblems.dir/depend

