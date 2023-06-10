cmake_minimum_required( VERSION 3.1 )
project (smart-pointers)

set (CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall")
set(PROJECT_SOURCE_DIR ../)

file(GLOB_RECURSE SRC_FILES ${PROJECT_SOURCE_DIR}/*.cpp  ${PROJECT_SOURCE_DIR}/*.h  )

add_executable(smart-pointers main.cpp )
target_link_libraries(smart-pointers)