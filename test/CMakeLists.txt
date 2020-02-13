project(cl_test CXX)

add_executable(cl_test cl_test.cpp)
target_link_libraries(cl_test cl_stub ${CMAKE_DL_LIBS})
target_include_directories(cl_test PRIVATE ${CMAKE_SOURCE_DIR}/include)
