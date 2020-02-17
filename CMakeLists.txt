cmake_minimum_required(VERSION 3.4)
project(opencl_stub CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(src)

option( OPENCL_TESTS "Enable OpenCL Tests" OFF )

if( DEBUG_LOG_MACROS )
  add_subdirectory(test)
endif()
