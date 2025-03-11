#include <string>
#include <sstream>
#include "../helper_for_parser.h"
#include "../../headers/flex_recognizer.h"

namespace recognizer {
    std::string flex_recognizer::recognize(const std::string &text) {
        std::stringstream converted_text_ss;
        auto sentences = tokenGetter(text);
        for (auto& sent : sentences) {
            auto results = converter_by_format(sent);
            //поправить логику -> done
            if ( !results.empty() && (
                    is_matched((toLower(results[2]))) && is_matched(toLower(results[3])) ||
                    isdigit((results[2])[0]) && is_matched(toLower(results[3])) ||
                    isdigit((results[3])[0]) && is_matched(toLower(results[2])) ||
                    isdigit((results[2])[0]) && isdigit((results[3])[0])  //isdigit тк переменная не начин на цифру => это 100 проц число
            )) {
                converted_text_ss << results[1] << " - " << results[0] << "\n";
                insert_word(toLower(results[1]));
            }
        }
        return converted_text_ss.str();
    }
}