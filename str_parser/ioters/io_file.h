//
// Created by artur on 26.02.2025.
//

#ifndef RECOGNIZER_IO_FILE_H
#define RECOGNIZER_IO_FILE_H

#include "io.h"

namespace io {
    class file_ioter : public ioter {
        std::string input() override;
        void output(const std::string& out_str) override;
    };
}
#endif //RECOGNIZER_IO_FILE_H
