//
// Created by artur on 26.02.2025.
//

#include "../helper_for_parser.h"
#include "../../headers/smc_recognizer.h"

namespace recognizer {

    std::string smc_str_recognizer::recognize(const std::string& text) {
        Parser parser;
        std::stringstream converted_text_ss;
        auto sentences = tokenGetter(text);
        for (auto& sent : sentences) {
            parser.push_string(sent);
            auto results = parser.parse();
            if ( !results.empty() && is_in_types(results[0]) && (
                    is_matched((toLower(results[2]))) && is_matched(toLower(results[3])) ||
                    isdigit((results[2])[0]) && is_matched(toLower(results[3])) ||
                    isdigit((results[3])[0]) && is_matched(toLower(results[2])) ||
                    isdigit((results[2])[0]) && isdigit((results[3])[0])  //isdigit тк переменная не начин на цифру => это 100 проц число
            )) {
                converted_text_ss << results[1] << " - " << results[0] << "\n";
                insert_word(toLower(results[1]));
            }
            parser.clear();
        }
        return converted_text_ss.str();
    };
}