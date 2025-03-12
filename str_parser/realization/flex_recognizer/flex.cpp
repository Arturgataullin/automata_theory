//
// Created by artur on 06.03.2025.
//
#include "lex.yy.cc"
#include <sstream>
#include <iostream>
int main() {
    std::string str2("int a:= 3 + 2\n");
    std::stringstream ss(str2);
    yyFlexLexer lexer(&ss);
    if (lexer.yylex()) {
        std::cout << vector[1] << " - " << vector[0] << "\n";
    } else {
        std::cout << "0\n";
    }

    return 0;
}