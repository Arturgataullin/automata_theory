//
// Created by artur on 27.02.2025.
//
#include <algorithm>
#include "Parser.h"
#define DEFAULT "int"
#define TOKEN_NUM 3

std::vector<std::string> Parser::parse() {
    std::vector<std::string> res_vect;
    std::for_each(this->str.begin(), this->str.end(), [&](char symb){
        if (this->is_acceptable == 0) {
            this->next();
        }
    });
    auto st_ends = this->starts_ends_of_tokens;
    if (is_acceptable) {
        if (st_ends.size()/2 == TOKEN_NUM) {
            res_vect.emplace_back(DEFAULT); //если тип не был указан
        }
        unsigned ind = 0;
        while (ind < st_ends.size()) {
            auto first = this->str.begin() + st_ends[ind];
            auto end = this->str.begin() + st_ends[++ind];
            ind++;
            res_vect.emplace_back(first, end);
        }
    }
    return res_vect;
}