cmake_minimum_required (VERSION 3.10)
project (Test)

set(EXECUTABLE_OUTPUT_PATH bin/${CMAKE_BUILD_TYPE})

## Include libraries ##
include_directories ("${PROJECT_BINARY_DIR}/../include")

## Source files ##
file (GLOB_RECURSE source_files src/*)

add_executable(Test ${source_files})