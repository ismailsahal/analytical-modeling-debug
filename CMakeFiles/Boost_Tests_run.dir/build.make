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
CMAKE_COMMAND = /home/sahal/bin/cmake

# The command to remove a file.
RM = /home/sahal/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sahal/analytical-modeling-debug/analytical-modeling-clear

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sahal/analytical-modeling-debug/analytical-modeling-clear

# Include any dependencies generated for this target.
include CMakeFiles/Boost_Tests_run.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Boost_Tests_run.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Boost_Tests_run.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Boost_Tests_run.dir/flags.make

CMakeFiles/Boost_Tests_run.dir/tests/unitTests.cpp.o: CMakeFiles/Boost_Tests_run.dir/flags.make
CMakeFiles/Boost_Tests_run.dir/tests/unitTests.cpp.o: tests/unitTests.cpp
CMakeFiles/Boost_Tests_run.dir/tests/unitTests.cpp.o: CMakeFiles/Boost_Tests_run.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sahal/analytical-modeling-debug/analytical-modeling-clear/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Boost_Tests_run.dir/tests/unitTests.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Boost_Tests_run.dir/tests/unitTests.cpp.o -MF CMakeFiles/Boost_Tests_run.dir/tests/unitTests.cpp.o.d -o CMakeFiles/Boost_Tests_run.dir/tests/unitTests.cpp.o -c /home/sahal/analytical-modeling-debug/analytical-modeling-clear/tests/unitTests.cpp

CMakeFiles/Boost_Tests_run.dir/tests/unitTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Boost_Tests_run.dir/tests/unitTests.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sahal/analytical-modeling-debug/analytical-modeling-clear/tests/unitTests.cpp > CMakeFiles/Boost_Tests_run.dir/tests/unitTests.cpp.i

CMakeFiles/Boost_Tests_run.dir/tests/unitTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Boost_Tests_run.dir/tests/unitTests.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sahal/analytical-modeling-debug/analytical-modeling-clear/tests/unitTests.cpp -o CMakeFiles/Boost_Tests_run.dir/tests/unitTests.cpp.s

CMakeFiles/Boost_Tests_run.dir/src/flame/Interconnect.cpp.o: CMakeFiles/Boost_Tests_run.dir/flags.make
CMakeFiles/Boost_Tests_run.dir/src/flame/Interconnect.cpp.o: src/flame/Interconnect.cpp
CMakeFiles/Boost_Tests_run.dir/src/flame/Interconnect.cpp.o: CMakeFiles/Boost_Tests_run.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sahal/analytical-modeling-debug/analytical-modeling-clear/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Boost_Tests_run.dir/src/flame/Interconnect.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Boost_Tests_run.dir/src/flame/Interconnect.cpp.o -MF CMakeFiles/Boost_Tests_run.dir/src/flame/Interconnect.cpp.o.d -o CMakeFiles/Boost_Tests_run.dir/src/flame/Interconnect.cpp.o -c /home/sahal/analytical-modeling-debug/analytical-modeling-clear/src/flame/Interconnect.cpp

CMakeFiles/Boost_Tests_run.dir/src/flame/Interconnect.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Boost_Tests_run.dir/src/flame/Interconnect.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sahal/analytical-modeling-debug/analytical-modeling-clear/src/flame/Interconnect.cpp > CMakeFiles/Boost_Tests_run.dir/src/flame/Interconnect.cpp.i

CMakeFiles/Boost_Tests_run.dir/src/flame/Interconnect.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Boost_Tests_run.dir/src/flame/Interconnect.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sahal/analytical-modeling-debug/analytical-modeling-clear/src/flame/Interconnect.cpp -o CMakeFiles/Boost_Tests_run.dir/src/flame/Interconnect.cpp.s

# Object files for target Boost_Tests_run
Boost_Tests_run_OBJECTS = \
"CMakeFiles/Boost_Tests_run.dir/tests/unitTests.cpp.o" \
"CMakeFiles/Boost_Tests_run.dir/src/flame/Interconnect.cpp.o"

# External object files for target Boost_Tests_run
Boost_Tests_run_EXTERNAL_OBJECTS =

Boost_Tests_run: CMakeFiles/Boost_Tests_run.dir/tests/unitTests.cpp.o
Boost_Tests_run: CMakeFiles/Boost_Tests_run.dir/src/flame/Interconnect.cpp.o
Boost_Tests_run: CMakeFiles/Boost_Tests_run.dir/build.make
Boost_Tests_run: libsrc.a
Boost_Tests_run: libsrc2.a
Boost_Tests_run: CMakeFiles/Boost_Tests_run.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sahal/analytical-modeling-debug/analytical-modeling-clear/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Boost_Tests_run"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Boost_Tests_run.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Boost_Tests_run.dir/build: Boost_Tests_run
.PHONY : CMakeFiles/Boost_Tests_run.dir/build

CMakeFiles/Boost_Tests_run.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Boost_Tests_run.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Boost_Tests_run.dir/clean

CMakeFiles/Boost_Tests_run.dir/depend:
	cd /home/sahal/analytical-modeling-debug/analytical-modeling-clear && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sahal/analytical-modeling-debug/analytical-modeling-clear /home/sahal/analytical-modeling-debug/analytical-modeling-clear /home/sahal/analytical-modeling-debug/analytical-modeling-clear /home/sahal/analytical-modeling-debug/analytical-modeling-clear /home/sahal/analytical-modeling-debug/analytical-modeling-clear/CMakeFiles/Boost_Tests_run.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Boost_Tests_run.dir/depend

