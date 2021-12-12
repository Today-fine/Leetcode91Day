cmake_minimum_required(VERSION 3.0.0)

project(Leetcode91Day)

add_executable(oneDay oneDay.cc)

# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -ggdb")
# set(LIBRARY_OUTPUT_PATH "${PROJECT_SOURCE_DIR}/lib")
# set(EXECUTABLE_OUTPUT_PATH "${PROJECT_SOURECE_DIR}/bin")

set(EXECUTABLE_OUTPUT_PATH "${PROJECT_SOURCE_DIR}/bin")
set(LIBRARY_OUTPUT_PATH "${PROJECT_SOURCE_DIR}/lib")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGES} -std=c++11 -ggdb")

# set(CMAKE_CXX_STANDARD 11)