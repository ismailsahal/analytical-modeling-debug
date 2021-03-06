# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

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

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/home/sahal/bin/ccmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/home/sahal/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/sahal/analytical-modeling-debug/analytical-modeling-clear/CMakeFiles /home/sahal/analytical-modeling-debug/analytical-modeling-clear//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/sahal/analytical-modeling-debug/analytical-modeling-clear/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named src

# Build rule for target.
src: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 src
.PHONY : src

# fast build rule for target.
src/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/src.dir/build.make CMakeFiles/src.dir/build
.PHONY : src/fast

#=============================================================================
# Target rules for targets named src2

# Build rule for target.
src2: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 src2
.PHONY : src2

# fast build rule for target.
src2/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/src2.dir/build.make CMakeFiles/src2.dir/build
.PHONY : src2/fast

#=============================================================================
# Target rules for targets named Boost_Tests_run

# Build rule for target.
Boost_Tests_run: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 Boost_Tests_run
.PHONY : Boost_Tests_run

# fast build rule for target.
Boost_Tests_run/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Boost_Tests_run.dir/build.make CMakeFiles/Boost_Tests_run.dir/build
.PHONY : Boost_Tests_run/fast

src/flame/Interconnect.o: src/flame/Interconnect.cpp.o
.PHONY : src/flame/Interconnect.o

# target to build an object file
src/flame/Interconnect.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Boost_Tests_run.dir/build.make CMakeFiles/Boost_Tests_run.dir/src/flame/Interconnect.cpp.o
.PHONY : src/flame/Interconnect.cpp.o

src/flame/Interconnect.i: src/flame/Interconnect.cpp.i
.PHONY : src/flame/Interconnect.i

# target to preprocess a source file
src/flame/Interconnect.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Boost_Tests_run.dir/build.make CMakeFiles/Boost_Tests_run.dir/src/flame/Interconnect.cpp.i
.PHONY : src/flame/Interconnect.cpp.i

src/flame/Interconnect.s: src/flame/Interconnect.cpp.s
.PHONY : src/flame/Interconnect.s

# target to generate assembly for a file
src/flame/Interconnect.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Boost_Tests_run.dir/build.make CMakeFiles/Boost_Tests_run.dir/src/flame/Interconnect.cpp.s
.PHONY : src/flame/Interconnect.cpp.s

src/traverser/Traverser.o: src/traverser/Traverser.cpp.o
.PHONY : src/traverser/Traverser.o

# target to build an object file
src/traverser/Traverser.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/src.dir/build.make CMakeFiles/src.dir/src/traverser/Traverser.cpp.o
.PHONY : src/traverser/Traverser.cpp.o

src/traverser/Traverser.i: src/traverser/Traverser.cpp.i
.PHONY : src/traverser/Traverser.i

# target to preprocess a source file
src/traverser/Traverser.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/src.dir/build.make CMakeFiles/src.dir/src/traverser/Traverser.cpp.i
.PHONY : src/traverser/Traverser.cpp.i

src/traverser/Traverser.s: src/traverser/Traverser.cpp.s
.PHONY : src/traverser/Traverser.s

# target to generate assembly for a file
src/traverser/Traverser.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/src.dir/build.make CMakeFiles/src.dir/src/traverser/Traverser.cpp.s
.PHONY : src/traverser/Traverser.cpp.s

tests/test1/Test1.o: tests/test1/Test1.cpp.o
.PHONY : tests/test1/Test1.o

# target to build an object file
tests/test1/Test1.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/src2.dir/build.make CMakeFiles/src2.dir/tests/test1/Test1.cpp.o
.PHONY : tests/test1/Test1.cpp.o

tests/test1/Test1.i: tests/test1/Test1.cpp.i
.PHONY : tests/test1/Test1.i

# target to preprocess a source file
tests/test1/Test1.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/src2.dir/build.make CMakeFiles/src2.dir/tests/test1/Test1.cpp.i
.PHONY : tests/test1/Test1.cpp.i

tests/test1/Test1.s: tests/test1/Test1.cpp.s
.PHONY : tests/test1/Test1.s

# target to generate assembly for a file
tests/test1/Test1.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/src2.dir/build.make CMakeFiles/src2.dir/tests/test1/Test1.cpp.s
.PHONY : tests/test1/Test1.cpp.s

tests/unitTests.o: tests/unitTests.cpp.o
.PHONY : tests/unitTests.o

# target to build an object file
tests/unitTests.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Boost_Tests_run.dir/build.make CMakeFiles/Boost_Tests_run.dir/tests/unitTests.cpp.o
.PHONY : tests/unitTests.cpp.o

tests/unitTests.i: tests/unitTests.cpp.i
.PHONY : tests/unitTests.i

# target to preprocess a source file
tests/unitTests.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Boost_Tests_run.dir/build.make CMakeFiles/Boost_Tests_run.dir/tests/unitTests.cpp.i
.PHONY : tests/unitTests.cpp.i

tests/unitTests.s: tests/unitTests.cpp.s
.PHONY : tests/unitTests.s

# target to generate assembly for a file
tests/unitTests.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Boost_Tests_run.dir/build.make CMakeFiles/Boost_Tests_run.dir/tests/unitTests.cpp.s
.PHONY : tests/unitTests.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... Boost_Tests_run"
	@echo "... src"
	@echo "... src2"
	@echo "... src/flame/Interconnect.o"
	@echo "... src/flame/Interconnect.i"
	@echo "... src/flame/Interconnect.s"
	@echo "... src/traverser/Traverser.o"
	@echo "... src/traverser/Traverser.i"
	@echo "... src/traverser/Traverser.s"
	@echo "... tests/test1/Test1.o"
	@echo "... tests/test1/Test1.i"
	@echo "... tests/test1/Test1.s"
	@echo "... tests/unitTests.o"
	@echo "... tests/unitTests.i"
	@echo "... tests/unitTests.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

