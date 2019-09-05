cmake_minimum_required(VERSION 3.7)
project(ForgotCppLearning)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp chapter1.cpp chapter1.h problemA/problem1001.cpp demo.cpp)
add_executable(ForgotCppLearning ${SOURCE_FILES})