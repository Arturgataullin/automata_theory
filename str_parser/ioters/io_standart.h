//
// Created by artur on 26.02.2025.
//

#ifndef RECOGNIZER_IO_STANDART_H
#define RECOGNIZER_IO_STANDART_H

#include <string>
#include "io.h"

namespace io {
    class standart_ioter : public ioter {
    public:
        std::string input() override;
        void output(const std::string& out_str) override;
    };
}

#endif //RECOGNIZER_IO_STANDART_H
