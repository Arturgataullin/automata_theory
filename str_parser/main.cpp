#include <memory>
#include "ioters/io_standart.h"
#include "headers/recognizer.h"
#include "headers/flex_recognizer.h"

using namespace recognizer;
using namespace io;

int main() {
    auto ioter = std::make_unique<standart_ioter>();
    auto recognizer = std::make_unique<flex_recognizer>();

    std::string input = ioter->input();
    std::string res = recognizer->recognize(input);
    ioter->output(res);
    return 0;
}
