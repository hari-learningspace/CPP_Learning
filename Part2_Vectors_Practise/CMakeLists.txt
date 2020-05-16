cmake_minimum_required(VERSION 3.10)

set(This GoogleDemo)
project(${This})

set(C_STANDARD 99)
set(CXX_STANDARD 17)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O0 -ggdb")
set(CMAKE_BUILD_TYPE Debug)

enable_testing()

include_directories("${CMAKE_SOURCE_DIR}/inc"
    "${CMAKE_SOURCE_DIR}/../googletest/googletest/include/"
    "${CMAKE_SOURCE_DIR}/../googletest/googlemock/include/")

add_subdirectory(../googletest build)
add_subdirectory(src)
add_subdirectory(test)
