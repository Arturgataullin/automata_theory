//
// Created by artur on 24.02.2025.
//

#ifndef STR_PARSER_STR_REGEX_RECOGNIZER_H
#define STR_PARSER_STR_REGEX_RECOGNIZER_H


#include <string>
#include <regex>
#include <unordered_set>
#include "recognizer.h"

namespace recognizer {
    class regex_str_recognizer : public str_recognizer {
    private:
        std::unordered_set<std::string> matched_names;
    public:
        std::string recognize(const std::string& text) override;

        bool is_matched(const std::string& name) {
            if (matched_names.find(name) != matched_names.end()) return true;
            return false;
        }

        void insert_word(const std::string& word) {
            matched_names.insert(word);
        }
    };
}

#endif