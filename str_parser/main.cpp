#include <memory>
#include <iostream>
#include "ioters/io_file.h"
#include "ioters/io_standart.h"
#include "headers/recognizer.h"
#include "headers/regex_recognizer.h"

using namespace recognizer;
using namespace io;

int main() {
    auto ioter = std::make_unique<standart_ioter>();
    auto recognizer = std::make_unique<regex_str_recognizer>();

    std::string input = ioter->input();
    std::string res = recognizer->recognize(input);
    ioter->output(res);
    return 0;
}
