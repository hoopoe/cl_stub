cmake_minimum_required(VERSION 3.4)
project(opencl_stub CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(src)
add_subdirectory(test)
# add_library(cl_stub cl_stub.cpp include/cl_stub.h)

# target_include_directories(cl_stub PUBLIC include)

# if (ANDROID)
#     set_target_properties(cl_stub
#             PROPERTIES
#             LIBRARY_OUTPUT_DIRECTORY
#             "${CMAKE_CURRENT_BINARY_DIR}/${ANDROID_ABI}")
#     target_link_libraries(cl_stub log)
# endif ()

#install(TARGETS "cl_stub" LIBRARY DESTINATION lib PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE)
#install(FILES "include/cl_stub.h" DESTINATION include)
#install(DIRECTORY "include/CL" DESTINATION include)

# add_executable(test_stub2 test_stub2.cpp)
# target_link_libraries(test_stub2 cl_stub)

# if (UNIX AND NOT APPLE) # Linux system
#     set_property(TARGET test_stub2 PROPERTY LINK_FLAGS "-Wl,--no-as-needed -ldl")
# endif ()

# target_include_directories(test_stub2 PRIVATE include)
# if (ANDROID)
#     target_link_libraries(test_stub2 log)
# endif ()