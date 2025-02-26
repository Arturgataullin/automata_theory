//
// Created by artur on 26.02.2025.
//
#include <iostream>
#include "io_standart.h"

namespace io {
    std::string standart_ioter::input() {
        std::string line;
        std::string res;
        while (std::getline(std::cin, line)) {
            res += line + "\n";
        }
        return res;
    }

    void  standart_ioter::output(const std::string& out_str) {
        std::cout << out_str;
    }

}