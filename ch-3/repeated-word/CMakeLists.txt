cmake_minimum_required(VERSION 3.0.0)
project(repeated VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(repeated.out repeated_word.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
