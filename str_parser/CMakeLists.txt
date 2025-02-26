cmake_minimum_required(VERSION 3.28)
project(recognizer)

set(CMAKE_CXX_STANDARD 20)

add_library(Recognizer realization/regex_recognizer.cpp)

add_library(IOter ioters/io_file.cpp ioters/io_file.h ioters/io_standart.cpp ioters/io_file.h)

link_libraries(Recognizer)

link_libraries(IOter)

add_executable(recognizer_app main.cpp)


