//
// Created by artur on 25.02.2025.
//

#ifndef STR_PARSER_SMC_RECOGNIZE_H
#define STR_PARSER_SMC_RECOGNIZE_H

#include <string>
#include <unordered_set>
#include "../realization/smc_recognizer/Parser.h"
#include "recognizer.h"


namespace recognizer {
    class smc_str_recognizer : public str_recognizer {
    private:
        std::unordered_set<std::string> matched_names;
    public:
        std::string recognize(const std::string& str) override;

        bool is_matched(const std::string& name) {
            if (matched_names.find(name) != matched_names.end()) return true;
            return false;
        }

        void insert_word(const std::string& word) {
            matched_names.insert(word);
        }
    };
}

#endif //STR_PARSER_SMC_RECOGNIZE_H
