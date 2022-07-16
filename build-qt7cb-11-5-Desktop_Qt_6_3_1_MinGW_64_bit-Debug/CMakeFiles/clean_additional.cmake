# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\qt7cb-11-5_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\qt7cb-11-5_autogen.dir\\ParseCache.txt"
  "qt7cb-11-5_autogen"
  )
endif()
