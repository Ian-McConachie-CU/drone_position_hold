# Install script for directory: /home/strain-drone/Documents/drone_position_hold/ros2_ws/src/mocap4r2/mocap4r2_control/rqt_mocap4r2_control

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/strain-drone/Documents/drone_position_hold/ros2_ws/install/rqt_mocap4r2_control")
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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rqt_mocap4r2_control/librqt_mocap4r2_control.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rqt_mocap4r2_control/librqt_mocap4r2_control.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rqt_mocap4r2_control/librqt_mocap4r2_control.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/rqt_mocap4r2_control" TYPE SHARED_LIBRARY FILES "/home/strain-drone/Documents/drone_position_hold/ros2_ws/build/rqt_mocap4r2_control/librqt_mocap4r2_control.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rqt_mocap4r2_control/librqt_mocap4r2_control.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rqt_mocap4r2_control/librqt_mocap4r2_control.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rqt_mocap4r2_control/librqt_mocap4r2_control.so"
         OLD_RPATH "/opt/ros/jazzy/lib:/home/strain-drone/Documents/drone_position_hold/ros2_ws/install/mocap4r2_control_msgs/lib:/home/strain-drone/Documents/drone_position_hold/ros2_ws/install/mocap4r2_control/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rqt_mocap4r2_control/librqt_mocap4r2_control.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/rqt_mocap4r2_control" TYPE PROGRAM FILES "/home/strain-drone/Documents/drone_position_hold/ros2_ws/src/mocap4r2/mocap4r2_control/rqt_mocap4r2_control/scripts/rqt_mocap4r2_control")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/strain-drone/Documents/drone_position_hold/ros2_ws/src/mocap4r2/mocap4r2_control/rqt_mocap4r2_control/include/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rqt_mocap4r2_control" TYPE FILE FILES "/home/strain-drone/Documents/drone_position_hold/ros2_ws/src/mocap4r2/mocap4r2_control/rqt_mocap4r2_control/plugin.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rqt_mocap4r2_control" TYPE FILE FILES "/home/strain-drone/Documents/drone_position_hold/ros2_ws/src/mocap4r2/mocap4r2_control/rqt_mocap4r2_control/plugin.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rqt_mocap4r2_control/environment" TYPE FILE FILES "/opt/ros/jazzy/lib/python3.12/site-packages/ament_package/template/environment_hook/library_path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rqt_mocap4r2_control/environment" TYPE FILE FILES "/home/strain-drone/Documents/drone_position_hold/ros2_ws/build/rqt_mocap4r2_control/ament_cmake_environment_hooks/library_path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/strain-drone/Documents/drone_position_hold/ros2_ws/build/rqt_mocap4r2_control/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/rqt_mocap4r2_control")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/strain-drone/Documents/drone_position_hold/ros2_ws/build/rqt_mocap4r2_control/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/rqt_mocap4r2_control")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rqt_mocap4r2_control/environment" TYPE FILE FILES "/opt/ros/jazzy/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rqt_mocap4r2_control/environment" TYPE FILE FILES "/home/strain-drone/Documents/drone_position_hold/ros2_ws/build/rqt_mocap4r2_control/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rqt_mocap4r2_control/environment" TYPE FILE FILES "/opt/ros/jazzy/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rqt_mocap4r2_control/environment" TYPE FILE FILES "/home/strain-drone/Documents/drone_position_hold/ros2_ws/build/rqt_mocap4r2_control/ament_cmake_environment_hooks/path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rqt_mocap4r2_control" TYPE FILE FILES "/home/strain-drone/Documents/drone_position_hold/ros2_ws/build/rqt_mocap4r2_control/ament_cmake_environment_hooks/local_setup.bash")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rqt_mocap4r2_control" TYPE FILE FILES "/home/strain-drone/Documents/drone_position_hold/ros2_ws/build/rqt_mocap4r2_control/ament_cmake_environment_hooks/local_setup.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rqt_mocap4r2_control" TYPE FILE FILES "/home/strain-drone/Documents/drone_position_hold/ros2_ws/build/rqt_mocap4r2_control/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rqt_mocap4r2_control" TYPE FILE FILES "/home/strain-drone/Documents/drone_position_hold/ros2_ws/build/rqt_mocap4r2_control/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rqt_mocap4r2_control" TYPE FILE FILES "/home/strain-drone/Documents/drone_position_hold/ros2_ws/build/rqt_mocap4r2_control/ament_cmake_environment_hooks/package.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/strain-drone/Documents/drone_position_hold/ros2_ws/build/rqt_mocap4r2_control/ament_cmake_index/share/ament_index/resource_index/packages/rqt_mocap4r2_control")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/rqt_gui__pluginlib__plugin" TYPE FILE FILES "/home/strain-drone/Documents/drone_position_hold/ros2_ws/build/rqt_mocap4r2_control/ament_cmake_index/share/ament_index/resource_index/rqt_gui__pluginlib__plugin/rqt_mocap4r2_control")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rqt_mocap4r2_control/cmake" TYPE FILE FILES "/home/strain-drone/Documents/drone_position_hold/ros2_ws/build/rqt_mocap4r2_control/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rqt_mocap4r2_control/cmake" TYPE FILE FILES "/home/strain-drone/Documents/drone_position_hold/ros2_ws/build/rqt_mocap4r2_control/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rqt_mocap4r2_control/cmake" TYPE FILE FILES
    "/home/strain-drone/Documents/drone_position_hold/ros2_ws/build/rqt_mocap4r2_control/ament_cmake_core/rqt_mocap4r2_controlConfig.cmake"
    "/home/strain-drone/Documents/drone_position_hold/ros2_ws/build/rqt_mocap4r2_control/ament_cmake_core/rqt_mocap4r2_controlConfig-version.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rqt_mocap4r2_control" TYPE FILE FILES "/home/strain-drone/Documents/drone_position_hold/ros2_ws/src/mocap4r2/mocap4r2_control/rqt_mocap4r2_control/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/strain-drone/Documents/drone_position_hold/ros2_ws/build/rqt_mocap4r2_control/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
