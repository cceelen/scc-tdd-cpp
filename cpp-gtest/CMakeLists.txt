project(cpp-gtestmock)
cmake_minimum_required(VERSION 2.8)

include(conanbuildinfo.cmake)
CONAN_BASIC_SETUP()

INCLUDE_DIRECTORIES(src)
ADD_EXECUTABLE(run_test src/main.cpp)
TARGET_LINK_LIBRARIES(run_test ${CONAN_LIBS})

ADD_DEFINITIONS(
  -std=c++11 # Or -std=c++0x
  # Other flags
  )
