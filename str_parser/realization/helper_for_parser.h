//
// Created by artur on 04.03.2025.
//

#ifndef RECOGNIZER_HELPER_FOR_PARSER_H
#define RECOGNIZER_HELPER_FOR_PARSER_H

#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#define types {"int","long","short"}

namespace recognizer {
    bool is_in_types(const std::string& str) {
        for (auto& word : types) {
            if (str == word) return true;
        }
        return false;
    }

    std::vector<std::string> tokenGetter(const std::string& str) {
        std::stringstream ss(str);
        std::vector<std::string> res;
        std::string line;
        while (getline(ss, line)) {
            if (!line.empty()) res.push_back(line + "\n");
        }
        return res;
    }

    std::string toLower(const std::string& str) {
        std::string res;
        std::for_each(str.begin(), str.end(), [&](auto symb){
            res.push_back(std::tolower(symb));
        });
        return res;
    }
}
#endif //RECOGNIZER_HELPER_FOR_PARSER_H
