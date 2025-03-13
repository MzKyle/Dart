# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kyle/RM/2024_Dart_Algorithm/Vision_Code

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kyle/RM/2024_Dart_Algorithm/Vision_Code/build

# Include any dependencies generated for this target.
include src/track/CMakeFiles/track.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/track/CMakeFiles/track.dir/compiler_depend.make

# Include the progress variables for this target.
include src/track/CMakeFiles/track.dir/progress.make

# Include the compile flags for this target's objects.
include src/track/CMakeFiles/track.dir/flags.make

src/track/CMakeFiles/track.dir/src/Track.cpp.o: src/track/CMakeFiles/track.dir/flags.make
src/track/CMakeFiles/track.dir/src/Track.cpp.o: ../src/track/src/Track.cpp
src/track/CMakeFiles/track.dir/src/Track.cpp.o: src/track/CMakeFiles/track.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kyle/RM/2024_Dart_Algorithm/Vision_Code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/track/CMakeFiles/track.dir/src/Track.cpp.o"
	cd /home/kyle/RM/2024_Dart_Algorithm/Vision_Code/build/src/track && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/track/CMakeFiles/track.dir/src/Track.cpp.o -MF CMakeFiles/track.dir/src/Track.cpp.o.d -o CMakeFiles/track.dir/src/Track.cpp.o -c /home/kyle/RM/2024_Dart_Algorithm/Vision_Code/src/track/src/Track.cpp

src/track/CMakeFiles/track.dir/src/Track.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/track.dir/src/Track.cpp.i"
	cd /home/kyle/RM/2024_Dart_Algorithm/Vision_Code/build/src/track && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kyle/RM/2024_Dart_Algorithm/Vision_Code/src/track/src/Track.cpp > CMakeFiles/track.dir/src/Track.cpp.i

src/track/CMakeFiles/track.dir/src/Track.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/track.dir/src/Track.cpp.s"
	cd /home/kyle/RM/2024_Dart_Algorithm/Vision_Code/build/src/track && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kyle/RM/2024_Dart_Algorithm/Vision_Code/src/track/src/Track.cpp -o CMakeFiles/track.dir/src/Track.cpp.s

src/track/CMakeFiles/track.dir/src/filter/OneEuroFilter.cpp.o: src/track/CMakeFiles/track.dir/flags.make
src/track/CMakeFiles/track.dir/src/filter/OneEuroFilter.cpp.o: ../src/track/src/filter/OneEuroFilter.cpp
src/track/CMakeFiles/track.dir/src/filter/OneEuroFilter.cpp.o: src/track/CMakeFiles/track.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kyle/RM/2024_Dart_Algorithm/Vision_Code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/track/CMakeFiles/track.dir/src/filter/OneEuroFilter.cpp.o"
	cd /home/kyle/RM/2024_Dart_Algorithm/Vision_Code/build/src/track && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/track/CMakeFiles/track.dir/src/filter/OneEuroFilter.cpp.o -MF CMakeFiles/track.dir/src/filter/OneEuroFilter.cpp.o.d -o CMakeFiles/track.dir/src/filter/OneEuroFilter.cpp.o -c /home/kyle/RM/2024_Dart_Algorithm/Vision_Code/src/track/src/filter/OneEuroFilter.cpp

src/track/CMakeFiles/track.dir/src/filter/OneEuroFilter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/track.dir/src/filter/OneEuroFilter.cpp.i"
	cd /home/kyle/RM/2024_Dart_Algorithm/Vision_Code/build/src/track && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kyle/RM/2024_Dart_Algorithm/Vision_Code/src/track/src/filter/OneEuroFilter.cpp > CMakeFiles/track.dir/src/filter/OneEuroFilter.cpp.i

src/track/CMakeFiles/track.dir/src/filter/OneEuroFilter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/track.dir/src/filter/OneEuroFilter.cpp.s"
	cd /home/kyle/RM/2024_Dart_Algorithm/Vision_Code/build/src/track && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kyle/RM/2024_Dart_Algorithm/Vision_Code/src/track/src/filter/OneEuroFilter.cpp -o CMakeFiles/track.dir/src/filter/OneEuroFilter.cpp.s

track: src/track/CMakeFiles/track.dir/src/Track.cpp.o
track: src/track/CMakeFiles/track.dir/src/filter/OneEuroFilter.cpp.o
track: src/track/CMakeFiles/track.dir/build.make
.PHONY : track

# Rule to build all files generated by this target.
src/track/CMakeFiles/track.dir/build: track
.PHONY : src/track/CMakeFiles/track.dir/build

src/track/CMakeFiles/track.dir/clean:
	cd /home/kyle/RM/2024_Dart_Algorithm/Vision_Code/build/src/track && $(CMAKE_COMMAND) -P CMakeFiles/track.dir/cmake_clean.cmake
.PHONY : src/track/CMakeFiles/track.dir/clean

src/track/CMakeFiles/track.dir/depend:
	cd /home/kyle/RM/2024_Dart_Algorithm/Vision_Code/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kyle/RM/2024_Dart_Algorithm/Vision_Code /home/kyle/RM/2024_Dart_Algorithm/Vision_Code/src/track /home/kyle/RM/2024_Dart_Algorithm/Vision_Code/build /home/kyle/RM/2024_Dart_Algorithm/Vision_Code/build/src/track /home/kyle/RM/2024_Dart_Algorithm/Vision_Code/build/src/track/CMakeFiles/track.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/track/CMakeFiles/track.dir/depend

