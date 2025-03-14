# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_SOURCE_DIR = /mnt/c/Users/artur/CLionProjects/automata_theory/str_parser

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/artur/CLionProjects/automata_theory/str_parser/build

# Include any dependencies generated for this target.
include CMakeFiles/Recognizer.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Recognizer.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Recognizer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Recognizer.dir/flags.make

CMakeFiles/Recognizer.dir/realization/flex_recognizer/flex_realization.cpp.o: CMakeFiles/Recognizer.dir/flags.make
CMakeFiles/Recognizer.dir/realization/flex_recognizer/flex_realization.cpp.o: /mnt/c/Users/artur/CLionProjects/automata_theory/str_parser/realization/flex_recognizer/flex_realization.cpp
CMakeFiles/Recognizer.dir/realization/flex_recognizer/flex_realization.cpp.o: CMakeFiles/Recognizer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/mnt/c/Users/artur/CLionProjects/automata_theory/str_parser/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Recognizer.dir/realization/flex_recognizer/flex_realization.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Recognizer.dir/realization/flex_recognizer/flex_realization.cpp.o -MF CMakeFiles/Recognizer.dir/realization/flex_recognizer/flex_realization.cpp.o.d -o CMakeFiles/Recognizer.dir/realization/flex_recognizer/flex_realization.cpp.o -c /mnt/c/Users/artur/CLionProjects/automata_theory/str_parser/realization/flex_recognizer/flex_realization.cpp

CMakeFiles/Recognizer.dir/realization/flex_recognizer/flex_realization.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Recognizer.dir/realization/flex_recognizer/flex_realization.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/artur/CLionProjects/automata_theory/str_parser/realization/flex_recognizer/flex_realization.cpp > CMakeFiles/Recognizer.dir/realization/flex_recognizer/flex_realization.cpp.i

CMakeFiles/Recognizer.dir/realization/flex_recognizer/flex_realization.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Recognizer.dir/realization/flex_recognizer/flex_realization.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/artur/CLionProjects/automata_theory/str_parser/realization/flex_recognizer/flex_realization.cpp -o CMakeFiles/Recognizer.dir/realization/flex_recognizer/flex_realization.cpp.s

# Object files for target Recognizer
Recognizer_OBJECTS = \
"CMakeFiles/Recognizer.dir/realization/flex_recognizer/flex_realization.cpp.o"

# External object files for target Recognizer
Recognizer_EXTERNAL_OBJECTS =

libRecognizer.a: CMakeFiles/Recognizer.dir/realization/flex_recognizer/flex_realization.cpp.o
libRecognizer.a: CMakeFiles/Recognizer.dir/build.make
libRecognizer.a: CMakeFiles/Recognizer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/mnt/c/Users/artur/CLionProjects/automata_theory/str_parser/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libRecognizer.a"
	$(CMAKE_COMMAND) -P CMakeFiles/Recognizer.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Recognizer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Recognizer.dir/build: libRecognizer.a
.PHONY : CMakeFiles/Recognizer.dir/build

CMakeFiles/Recognizer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Recognizer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Recognizer.dir/clean

CMakeFiles/Recognizer.dir/depend:
	cd /mnt/c/Users/artur/CLionProjects/automata_theory/str_parser/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/artur/CLionProjects/automata_theory/str_parser /mnt/c/Users/artur/CLionProjects/automata_theory/str_parser /mnt/c/Users/artur/CLionProjects/automata_theory/str_parser/build /mnt/c/Users/artur/CLionProjects/automata_theory/str_parser/build /mnt/c/Users/artur/CLionProjects/automata_theory/str_parser/build/CMakeFiles/Recognizer.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Recognizer.dir/depend

