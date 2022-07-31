cmake_minimum_required(VERSION 3.0.0)
project(odd_or_even VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(odd_or_even.out odd_or_even.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)