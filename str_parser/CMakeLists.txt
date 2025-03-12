cmake_minimum_required(VERSION 3.28)
project(recognizer)

set(CMAKE_CXX_STANDARD 20)

add_library (IOter
        ioters/io_standart.cpp
)
#add_library (IOter
#        ioters/io_file.cpp
#)

#add_library(Recognizer
#        realization/smc_recognizer/smc_recognizer.cpp
#        realization/smc_recognizer/Parser.cpp
#        realization/smc_recognizer/Parser_sm.cpp
#)
#add_library(Recognizer
#        realization/regex_recognizer.cpp
#)


link_libraries(Recognizer)

link_libraries(IOter)

add_executable(recognizer_app main.cpp)


