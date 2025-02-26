cmake_minimum_required(VERSION 3.28)
project(recognizer)

set(CMAKE_CXX_STANDARD 20)

add_library(Recognizer realization/regex_recognizer.cpp headers/regex_recognizer.h)

link_libraries(Recognizer)

add_executable(recognizer_app main.cpp)


