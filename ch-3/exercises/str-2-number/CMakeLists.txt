cmake_minimum_required(VERSION 3.0.0)
project(str_to_num VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(str_to_num.out str_to_num.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
