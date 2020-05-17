cmake_minimum_required(VERSION 3.10)

set(This mainApp)

file(GLOB SOURCES *.cpp)

include_directories()
      
add_executable(${This} ${SOURCES})
