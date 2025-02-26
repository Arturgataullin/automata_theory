//
// Created by artur on 24.02.2025.
//

#ifndef STR_PARSER_STR_REGEX_RECOGNIZER_H
#define STR_PARSER_STR_REGEX_RECOGNIZER_H

#include <string>
#include <regex>
#include "recognizer.h"

namespace recognizer {
    class regex_str_recognizer : public str_recognizer {
    public:
        std::string recognize(const std::string& text) override;
    };
}

#endif