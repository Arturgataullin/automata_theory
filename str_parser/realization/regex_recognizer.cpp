#include "../headers/regex_recognizer.h"
#include "helper_for_parser.h"

namespace recognizer {

    std::vector<std::string> converter_by_format(const std::string& str) {
        std::regex format(R"(^\s*(int|short|long)?\s*([a-zA-Z][a-zA-Z0-9]{0,15})\s*:=\s*([0-9]+|[a-zA-Z][a-zA-Z0-9]{0,15})\s*[\+\*\-/]\s*([0-9]+|[a-zA-Z][a-zA-Z0-9]{0,15}))");
        std::smatch match;
        std::vector<std::string> results;
        if (std::regex_search(str, match,format)) {
            auto type = match[1].str();
            auto main_name = match[2].str();
            auto name1 = match[3].str();
            auto name2 = match[4].str();
            if (type.empty()) type = "int";
            //защита от int int или int Int (нечуств к регистру)
            if (is_in_types(toLower(name1)) || is_in_types(toLower(name2)) || is_in_types(toLower(main_name))) {
                return results;
            }
            results.push_back(type);
            results.push_back(main_name);
            results.push_back(name1);
            results.push_back(name2);
        }
        return results;
    }

    std::string regex_str_recognizer::recognize(const std::string &text) {
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