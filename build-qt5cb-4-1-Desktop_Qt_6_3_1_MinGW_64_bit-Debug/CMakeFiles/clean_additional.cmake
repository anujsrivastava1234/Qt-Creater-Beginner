# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\qt5cb-4-1_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\qt5cb-4-1_autogen.dir\\ParseCache.txt"
  "qt5cb-4-1_autogen"
  )
endif()
