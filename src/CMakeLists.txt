project(cl_stub CXX)

add_library(cl_stub cl_stub.cpp cl_stub.h)
target_include_directories(cl_stub PUBLIC ${CMAKE_CURRENT_LIST_DIR}/../include)
if (ANDROID)
    target_link_libraries(cl_stub log)
endif ()