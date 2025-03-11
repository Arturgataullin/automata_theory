cmake_minimum_required(VERSION 3.28)
project(recognizer)

set(CMAKE_CXX_STANDARD 20)

#add_library(
#        Sm_recognizer realization/smc_recognizer/Parser.cpp realization/regex_recognizer.cpp
#)

add_library (
        IOter ioters/io_file.cpp
        ioters/io_standart.cpp
)

add_library(Recognizer realization/flex_recognizer/flex_realization.cpp realization/flex_recognizer/flex.cpp)

link_libraries(Recognizer)

#link_libraries(Sm_recognizer)

link_libraries(IOter)

add_executable(recognizer_app main.cpp)


