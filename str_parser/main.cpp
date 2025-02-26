#include <iostream>
#include <memory>
#include "headers/recognizer.h"
#include "headers/regex_recognizer.h"

using namespace recognizer;

int main() {
    auto recognizer = std::make_unique<regex_str_recognizer>();
    std::cout << recognizer->recognize("int a:=5+5\nint b:=a+6\n");
    return 0;
}
