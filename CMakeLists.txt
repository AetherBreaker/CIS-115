cmake_minimum_required(VERSION 3.0.0)
project(CIS115 VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(diamond week3/assignments/diamond.cpp)
add_executable(prime week4/assignments/prime.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
