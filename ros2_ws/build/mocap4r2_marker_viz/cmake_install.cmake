# Install script for directory: /home/strain-drone/Documents/drone_position_hold/ros2_ws/src/mocap4r2/mocap4r2_marker_viz/mocap4r2_marker_viz

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/strain-drone/Documents/drone_position_hold/ros2_ws/install/mocap4r2_marker_viz")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/strain-drone/Documents/drone_position_hold/ros2_ws/build/mocap4r2_marker_viz/libmocap4r2_marker_viz_NODE.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/mocap4r2_marker_viz/mocap4r2_marker_viz" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/mocap4r2_marker_viz/mocap4r2_marker_viz")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/mocap4r2_marker_viz/mocap4r2_marker_viz"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/mocap4r2_marker_viz" TYPE EXECUTABLE FILES "/home/strain-drone/Documents/drone_position_hold/ros2_ws/build/mocap4r2_marker_viz/mocap4r2_marker_viz")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/mocap4r2_marker_viz/mocap4r2_marker_viz" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/mocap4r2_marker_viz/mocap4r2_marker_viz")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/mocap4r2_marker_viz/mocap4r2_marker_viz"
         OLD_RPATH "/opt/ros/jazzy/lib:/home/strain-drone/Documents/drone_position_hold/ros2_ws/install/mocap4r2_msgs/lib:/home/strain-drone/Documents/drone_position_hold/ros2_ws/install/mocap4r2_marker_viz_srvs/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/mocap4r2_marker_viz/mocap4r2_marker_viz")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mocap4r2_marker_viz" TYPE DIRECTORY FILES
    "/home/strain-drone/Documents/drone_position_hold/ros2_ws/src/mocap4r2/mocap4r2_marker_viz/mocap4r2_marker_viz/launch"
    "/home/strain-drone/Documents/drone_position_hold/ros2_ws/src/mocap4r2/mocap4r2_marker_viz/mocap4r2_marker_viz/rviz"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/strain-drone/Documents/drone_position_hold/ros2_ws/build/mocap4r2_marker_viz/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/mocap4r2_marker_viz")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/strain-drone/Documents/drone_position_hold/ros2_ws/build/mocap4r2_marker_viz/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/mocap4r2_marker_viz")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mocap4r2_marker_viz/environment" TYPE FILE FILES "/opt/ros/jazzy/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mocap4r2_marker_viz/environment" TYPE FILE FILES "/home/strain-drone/Documents/drone_position_hold/ros2_ws/build/mocap4r2_marker_viz/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mocap4r2_marker_viz/environment" TYPE FILE FILES "/opt/ros/jazzy/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mocap4r2_marker_viz/environment" TYPE FILE FILES "/home/strain-drone/Documents/drone_position_hold/ros2_ws/build/mocap4r2_marker_viz/ament_cmake_environment_hooks/path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mocap4r2_marker_viz" TYPE FILE FILES "/home/strain-drone/Documents/drone_position_hold/ros2_ws/build/mocap4r2_marker_viz/ament_cmake_environment_hooks/local_setup.bash")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mocap4r2_marker_viz" TYPE FILE FILES "/home/strain-drone/Documents/drone_position_hold/ros2_ws/build/mocap4r2_marker_viz/ament_cmake_environment_hooks/local_setup.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mocap4r2_marker_viz" TYPE FILE FILES "/home/strain-drone/Documents/drone_position_hold/ros2_ws/build/mocap4r2_marker_viz/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mocap4r2_marker_viz" TYPE FILE FILES "/home/strain-drone/Documents/drone_position_hold/ros2_ws/build/mocap4r2_marker_viz/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mocap4r2_marker_viz" TYPE FILE FILES "/home/strain-drone/Documents/drone_position_hold/ros2_ws/build/mocap4r2_marker_viz/ament_cmake_environment_hooks/package.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/strain-drone/Documents/drone_position_hold/ros2_ws/build/mocap4r2_marker_viz/ament_cmake_index/share/ament_index/resource_index/packages/mocap4r2_marker_viz")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mocap4r2_marker_viz/cmake" TYPE FILE FILES
    "/home/strain-drone/Documents/drone_position_hold/ros2_ws/build/mocap4r2_marker_viz/ament_cmake_core/mocap4r2_marker_vizConfig.cmake"
    "/home/strain-drone/Documents/drone_position_hold/ros2_ws/build/mocap4r2_marker_viz/ament_cmake_core/mocap4r2_marker_vizConfig-version.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mocap4r2_marker_viz" TYPE FILE FILES "/home/strain-drone/Documents/drone_position_hold/ros2_ws/src/mocap4r2/mocap4r2_marker_viz/mocap4r2_marker_viz/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/strain-drone/Documents/drone_position_hold/ros2_ws/build/mocap4r2_marker_viz/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
