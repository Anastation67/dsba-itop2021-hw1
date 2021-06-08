# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Movies_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Movies_autogen.dir\\ParseCache.txt"
  "Movies_autogen"
  )
endif()
