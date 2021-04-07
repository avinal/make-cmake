include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

AUX_SOURCE_DIRECTORY(${CMAKE_CURRENT_SOURCE_DIR} source)

# Use libhellocmake for avoiding conflicts with add_executable(hellocmake).
# And rename liblibhellocmake.a to libhellocmake.a
add_library(libhellocmake ${source})
set_target_properties(libhellocmake PROPERTIES OUTPUT_NAME "hellocmake")

target_include_directories(libhellocmake PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})