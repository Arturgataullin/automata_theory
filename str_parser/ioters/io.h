//
// Created by artur on 26.02.2025.
//

#ifndef RECOGNIZER_IO_H
#define RECOGNIZER_IO_H
#include <string>
namespace io {
    class ioter {
    public:
        std::string input(std::istream& istream);
        void output(std::ostream& ostream, const std::string& out_str);
    };
}

#endif //RECOGNIZER_IO_H
