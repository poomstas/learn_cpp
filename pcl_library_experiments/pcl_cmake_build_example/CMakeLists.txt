# Reference: https://pointclouds.org/documentation/tutorials/using_pcl_pcl_config.html#using-pcl-pcl-config

cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(pcd_write)
find_package(PCL 1.3 REQUIRED)
include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})
add_executable (pcd_write pcd_write.cpp)
target_link_libraries (pcd_write ${PCL_LIBRARIES})
