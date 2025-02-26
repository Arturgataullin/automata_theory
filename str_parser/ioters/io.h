//
// Created by artur on 26.02.2025.
//

#ifndef RECOGNIZER_IO_H
#define RECOGNIZER_IO_H
#include <string>
namespace io {
    class ioter {
    public:
        virtual std::string input() = 0;
        virtual void output(const std::string& out_str) = 0;
    };
}

#endif //RECOGNIZER_IO_H
