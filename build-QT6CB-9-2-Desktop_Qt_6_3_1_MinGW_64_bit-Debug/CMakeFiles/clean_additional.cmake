# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\QT6CB-9-2_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QT6CB-9-2_autogen.dir\\ParseCache.txt"
  "QT6CB-9-2_autogen"
  )
endif()
