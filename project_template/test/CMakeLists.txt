cmake_minimum_required(VERSION 3.10)

set(This maintest)
set(SOURCES maintest.cpp)

include_directories(../inc)
include_directories(../../googletest/googletest/include ../../googletest/googlemock/include)
add_executable(${This} ${SOURCES})
target_link_libraries(${This} 
                      gmock_main
                    )

add_test(
    NAME ${This}
    COMMAND ${This}
)