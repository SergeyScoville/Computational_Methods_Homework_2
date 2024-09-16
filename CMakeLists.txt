# Minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# Project name and version
project(Homework2 VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)


# Include directory for headers
include_directories(${CMAKE_SOURCE_DIR}/src)

# Add the executable target
add_executable(Homework2
    ${CMAKE_SOURCE_DIR}/src/main.cpp
    ${CMAKE_SOURCE_DIR}/src/tools.cpp
)

# If you need to access the data directory from your code
add_definitions(-DDATA_DIR="${CMAKE_SOURCE_DIR}/data/")

