cmake_minimum_required (VERSION 3.1 FATAL_ERROR)
if(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_BINARY_DIR})
  message(FATAL_ERROR "DO NOT BUILD in-tree.")
endif()
set(MY_NAME "Avinal" CACHE INTERNAL "")

project(hellocmake)


add_subdirectory(lib)
add_subdirectory(src)
