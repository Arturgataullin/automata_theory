//
// Created by artur on 26.02.2025.
//
#include <iostream>
#include <fstream>
#include <sstream>
#include "io_file.h"

namespace io {
    std::string get_file_name() {
        std::string name;
        std::cin >> name;
        return name;
    }

    std::string file_ioter::input() {
        auto name = get_file_name();
        std::ifstream file_istream(name);
        std::string line;
        std::string res;
        while (getline(file_istream, line)) {
            res += line;
        }
        return res;
    }

    void file_ioter::output(const std::string& out_str) {
        auto name = get_file_name();
        std::ofstream file_ostream(name);
        std::stringstream out_str_ss(out_str);
        std::string line;
        while (getline(out_str_ss, line)) {
            file_ostream << line;
        }
    }
}