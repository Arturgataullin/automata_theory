//
// Created by artur on 25.02.2025.
//

#ifndef RECOGNIZER_FLEX_RECOGNIZER_H
#define RECOGNIZER_FLEX_RECOGNIZER_H

#include <string>
#include <unordered_set>
#include "recognizer.h"
namespace recognizer {
    class flex_recognizer : public str_recognizer {
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
#endif //RECOGNIZER_FLEX_RECOGNIZER_H
