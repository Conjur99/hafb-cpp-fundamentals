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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\CCEClass1\Documents\TMB4\hafb-cpp-fundamentals\Module3\LA3-4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\CCEClass1\Documents\TMB4\hafb-cpp-fundamentals\Module3\LA3-4\src

# Include any dependencies generated for this target.
include src/CMakeFiles/ca.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/ca.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/ca.dir/flags.make

src/CMakeFiles/ca.dir/main.cpp.obj: src/CMakeFiles/ca.dir/flags.make
src/CMakeFiles/ca.dir/main.cpp.obj: src/CMakeFiles/ca.dir/includes_CXX.rsp
src/CMakeFiles/ca.dir/main.cpp.obj: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\CCEClass1\Documents\TMB4\hafb-cpp-fundamentals\Module3\LA3-4\src\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/ca.dir/main.cpp.obj"
	cd /d C:\Users\CCEClass1\Documents\TMB4\hafb-cpp-fundamentals\Module3\LA3-4\src\src && C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ca.dir\main.cpp.obj -c C:\Users\CCEClass1\Documents\TMB4\hafb-cpp-fundamentals\Module3\LA3-4\src\main.cpp

src/CMakeFiles/ca.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ca.dir/main.cpp.i"
	cd /d C:\Users\CCEClass1\Documents\TMB4\hafb-cpp-fundamentals\Module3\LA3-4\src\src && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\CCEClass1\Documents\TMB4\hafb-cpp-fundamentals\Module3\LA3-4\src\main.cpp > CMakeFiles\ca.dir\main.cpp.i

src/CMakeFiles/ca.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ca.dir/main.cpp.s"
	cd /d C:\Users\CCEClass1\Documents\TMB4\hafb-cpp-fundamentals\Module3\LA3-4\src\src && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\CCEClass1\Documents\TMB4\hafb-cpp-fundamentals\Module3\LA3-4\src\main.cpp -o CMakeFiles\ca.dir\main.cpp.s

# Object files for target ca
ca_OBJECTS = \
"CMakeFiles/ca.dir/main.cpp.obj"

# External object files for target ca
ca_EXTERNAL_OBJECTS =

bin/ca.exe: src/CMakeFiles/ca.dir/main.cpp.obj
bin/ca.exe: src/CMakeFiles/ca.dir/build.make
bin/ca.exe: lib/libmylib.dll.a
bin/ca.exe: src/CMakeFiles/ca.dir/linklibs.rsp
bin/ca.exe: src/CMakeFiles/ca.dir/objects1.rsp
bin/ca.exe: src/CMakeFiles/ca.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\CCEClass1\Documents\TMB4\hafb-cpp-fundamentals\Module3\LA3-4\src\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ..\bin\ca.exe"
	cd /d C:\Users\CCEClass1\Documents\TMB4\hafb-cpp-fundamentals\Module3\LA3-4\src\src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ca.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/ca.dir/build: bin/ca.exe

.PHONY : src/CMakeFiles/ca.dir/build

src/CMakeFiles/ca.dir/clean:
	cd /d C:\Users\CCEClass1\Documents\TMB4\hafb-cpp-fundamentals\Module3\LA3-4\src\src && $(CMAKE_COMMAND) -P CMakeFiles\ca.dir\cmake_clean.cmake
.PHONY : src/CMakeFiles/ca.dir/clean

src/CMakeFiles/ca.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\CCEClass1\Documents\TMB4\hafb-cpp-fundamentals\Module3\LA3-4 C:\Users\CCEClass1\Documents\TMB4\hafb-cpp-fundamentals\Module3\LA3-4\src C:\Users\CCEClass1\Documents\TMB4\hafb-cpp-fundamentals\Module3\LA3-4\src C:\Users\CCEClass1\Documents\TMB4\hafb-cpp-fundamentals\Module3\LA3-4\src\src C:\Users\CCEClass1\Documents\TMB4\hafb-cpp-fundamentals\Module3\LA3-4\src\src\CMakeFiles\ca.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/ca.dir/depend

