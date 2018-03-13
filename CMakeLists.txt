cmake_minimum_required (VERSION 3.9)

## Include libraries ##
include_directories ("${PROJECT_BINARY_DIR}/../include")

## Source files ##
#file (GLOB_RECURSE source_files src/*)

## Add executables for the test and the app projects ##
add_subdirectory(test)
add_subdirectory(src)