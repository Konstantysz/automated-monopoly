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
CMAKE_COMMAND = "D:\Program Files\JetBrains\CLion 2020.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\CLion 2020.1.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\koste\Desktop\Studia\Semestr VI\Programming of Photonic Devices\PROJECT\automated-monopoly"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\koste\Desktop\Studia\Semestr VI\Programming of Photonic Devices\PROJECT\automated-monopoly\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/automated_monopoly.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/automated_monopoly.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/automated_monopoly.dir/flags.make

CMakeFiles/automated_monopoly.dir/main.cpp.obj: CMakeFiles/automated_monopoly.dir/flags.make
CMakeFiles/automated_monopoly.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\koste\Desktop\Studia\Semestr VI\Programming of Photonic Devices\PROJECT\automated-monopoly\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/automated_monopoly.dir/main.cpp.obj"
	C:\PROGRA~1\MinGW\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\automated_monopoly.dir\main.cpp.obj -c "C:\Users\koste\Desktop\Studia\Semestr VI\Programming of Photonic Devices\PROJECT\automated-monopoly\main.cpp"

CMakeFiles/automated_monopoly.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/automated_monopoly.dir/main.cpp.i"
	C:\PROGRA~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\koste\Desktop\Studia\Semestr VI\Programming of Photonic Devices\PROJECT\automated-monopoly\main.cpp" > CMakeFiles\automated_monopoly.dir\main.cpp.i

CMakeFiles/automated_monopoly.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/automated_monopoly.dir/main.cpp.s"
	C:\PROGRA~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\koste\Desktop\Studia\Semestr VI\Programming of Photonic Devices\PROJECT\automated-monopoly\main.cpp" -o CMakeFiles\automated_monopoly.dir\main.cpp.s

CMakeFiles/automated_monopoly.dir/Player.cpp.obj: CMakeFiles/automated_monopoly.dir/flags.make
CMakeFiles/automated_monopoly.dir/Player.cpp.obj: ../Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\koste\Desktop\Studia\Semestr VI\Programming of Photonic Devices\PROJECT\automated-monopoly\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/automated_monopoly.dir/Player.cpp.obj"
	C:\PROGRA~1\MinGW\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\automated_monopoly.dir\Player.cpp.obj -c "C:\Users\koste\Desktop\Studia\Semestr VI\Programming of Photonic Devices\PROJECT\automated-monopoly\Player.cpp"

CMakeFiles/automated_monopoly.dir/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/automated_monopoly.dir/Player.cpp.i"
	C:\PROGRA~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\koste\Desktop\Studia\Semestr VI\Programming of Photonic Devices\PROJECT\automated-monopoly\Player.cpp" > CMakeFiles\automated_monopoly.dir\Player.cpp.i

CMakeFiles/automated_monopoly.dir/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/automated_monopoly.dir/Player.cpp.s"
	C:\PROGRA~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\koste\Desktop\Studia\Semestr VI\Programming of Photonic Devices\PROJECT\automated-monopoly\Player.cpp" -o CMakeFiles\automated_monopoly.dir\Player.cpp.s

# Object files for target automated_monopoly
automated_monopoly_OBJECTS = \
"CMakeFiles/automated_monopoly.dir/main.cpp.obj" \
"CMakeFiles/automated_monopoly.dir/Player.cpp.obj"

# External object files for target automated_monopoly
automated_monopoly_EXTERNAL_OBJECTS =

automated_monopoly.exe: CMakeFiles/automated_monopoly.dir/main.cpp.obj
automated_monopoly.exe: CMakeFiles/automated_monopoly.dir/Player.cpp.obj
automated_monopoly.exe: CMakeFiles/automated_monopoly.dir/build.make
automated_monopoly.exe: CMakeFiles/automated_monopoly.dir/linklibs.rsp
automated_monopoly.exe: CMakeFiles/automated_monopoly.dir/objects1.rsp
automated_monopoly.exe: CMakeFiles/automated_monopoly.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\koste\Desktop\Studia\Semestr VI\Programming of Photonic Devices\PROJECT\automated-monopoly\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable automated_monopoly.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\automated_monopoly.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/automated_monopoly.dir/build: automated_monopoly.exe

.PHONY : CMakeFiles/automated_monopoly.dir/build

CMakeFiles/automated_monopoly.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\automated_monopoly.dir\cmake_clean.cmake
.PHONY : CMakeFiles/automated_monopoly.dir/clean

CMakeFiles/automated_monopoly.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\koste\Desktop\Studia\Semestr VI\Programming of Photonic Devices\PROJECT\automated-monopoly" "C:\Users\koste\Desktop\Studia\Semestr VI\Programming of Photonic Devices\PROJECT\automated-monopoly" "C:\Users\koste\Desktop\Studia\Semestr VI\Programming of Photonic Devices\PROJECT\automated-monopoly\cmake-build-debug" "C:\Users\koste\Desktop\Studia\Semestr VI\Programming of Photonic Devices\PROJECT\automated-monopoly\cmake-build-debug" "C:\Users\koste\Desktop\Studia\Semestr VI\Programming of Photonic Devices\PROJECT\automated-monopoly\cmake-build-debug\CMakeFiles\automated_monopoly.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/automated_monopoly.dir/depend

