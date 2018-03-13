project (Test)

set(EXECUTABLE_OUTPUT_PATH bin/${CMAKE_BUILD_TYPE})

file (GLOB_RECURSE testing_files ./*)
file (GLOB_RECURSE testing_source_files ../src/*)

FOREACH(item ${testing_source_files})
  IF(${item} MATCHES "main.cc")
    LIST(REMOVE_ITEM testing_source_files ${item})
  ENDIF(${item} MATCHES "main.cc")
ENDFOREACH(item)

add_executable (Test ${testing_files} ${testing_source_files})