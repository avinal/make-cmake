include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

AUX_SOURCE_DIRECTORY(${CMAKE_CURRENT_SOURCE_DIR} source)
add_executable(hellocmake ${source})
target_link_libraries(hellocmake LINK_PUBLIC libhellocmake)