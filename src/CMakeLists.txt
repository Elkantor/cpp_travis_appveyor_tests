project (App)

set(EXECUTABLE_OUTPUT_PATH bin/${CMAKE_BUILD_TYPE})

file (GLOB_RECURSE source_files ./*)

add_executable (App ${source_files})