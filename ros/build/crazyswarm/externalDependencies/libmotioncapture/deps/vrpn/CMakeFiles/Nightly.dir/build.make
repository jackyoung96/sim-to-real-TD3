# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jack/crazyflie/sim-to-real-TD3/ros/src/crazyswarm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jack/crazyflie/sim-to-real-TD3/ros/build/crazyswarm

# Utility rule file for Nightly.

# Include the progress variables for this target.
include externalDependencies/libmotioncapture/deps/vrpn/CMakeFiles/Nightly.dir/progress.make

externalDependencies/libmotioncapture/deps/vrpn/CMakeFiles/Nightly:
	cd /home/jack/crazyflie/sim-to-real-TD3/ros/build/crazyswarm/externalDependencies/libmotioncapture/deps/vrpn && /usr/bin/ctest -D Nightly

Nightly: externalDependencies/libmotioncapture/deps/vrpn/CMakeFiles/Nightly
Nightly: externalDependencies/libmotioncapture/deps/vrpn/CMakeFiles/Nightly.dir/build.make

.PHONY : Nightly

# Rule to build all files generated by this target.
externalDependencies/libmotioncapture/deps/vrpn/CMakeFiles/Nightly.dir/build: Nightly

.PHONY : externalDependencies/libmotioncapture/deps/vrpn/CMakeFiles/Nightly.dir/build

externalDependencies/libmotioncapture/deps/vrpn/CMakeFiles/Nightly.dir/clean:
	cd /home/jack/crazyflie/sim-to-real-TD3/ros/build/crazyswarm/externalDependencies/libmotioncapture/deps/vrpn && $(CMAKE_COMMAND) -P CMakeFiles/Nightly.dir/cmake_clean.cmake
.PHONY : externalDependencies/libmotioncapture/deps/vrpn/CMakeFiles/Nightly.dir/clean

externalDependencies/libmotioncapture/deps/vrpn/CMakeFiles/Nightly.dir/depend:
	cd /home/jack/crazyflie/sim-to-real-TD3/ros/build/crazyswarm && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jack/crazyflie/sim-to-real-TD3/ros/src/crazyswarm /home/jack/crazyflie/sim-to-real-TD3/ros/src/crazyswarm/externalDependencies/libmotioncapture/deps/vrpn /home/jack/crazyflie/sim-to-real-TD3/ros/build/crazyswarm /home/jack/crazyflie/sim-to-real-TD3/ros/build/crazyswarm/externalDependencies/libmotioncapture/deps/vrpn /home/jack/crazyflie/sim-to-real-TD3/ros/build/crazyswarm/externalDependencies/libmotioncapture/deps/vrpn/CMakeFiles/Nightly.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : externalDependencies/libmotioncapture/deps/vrpn/CMakeFiles/Nightly.dir/depend

