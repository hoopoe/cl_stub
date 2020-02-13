project(cl_stub CXX)

add_library(cl_stub cl_stub.cpp cl_stub.h)
target_include_directories(cl_stub PUBLIC include)
