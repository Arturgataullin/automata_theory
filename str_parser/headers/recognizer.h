//
// Created by artur on 25.02.2025.
//

#ifndef STR_PARSER_RECOGNIZER_H
#define STR_PARSER_RECOGNIZER_H

#include <string>

namespace recognizer {
    class str_recognizer {
    public:
        virtual ~str_recognizer() = default;
        virtual std::string recognize(const std::string& str) = 0;
    };
}

#endif //STR_PARSER_RECOGNIZER_H
