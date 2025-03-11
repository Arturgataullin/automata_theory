//
// Created by artur on 06.03.2025.
//
#include "lex.yy.cc"
#include <sstream>
#include <iostream>
int main() {
    yyFlexLexer lexer;
        if (lexer.yylex()) {
            std::cout << "1\n";
        } else {
            std::cout << "0\n";
        }

    std::cout << str;
    return 0;
}