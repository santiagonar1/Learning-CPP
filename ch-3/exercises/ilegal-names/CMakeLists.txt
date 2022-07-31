cmake_minimum_required(VERSION 3.0.0)
project(ilegal VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(ilegal.out ilegal.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
