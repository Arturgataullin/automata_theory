#include <string>
#include <sstream>
#include "lex.yy.cc"
#include "../helper_for_parser.h"
#include "../../headers/flex_recognizer.h"

namespace recognizer {
    std::string flex_recognizer::recognize(const std::string &text) {
        std::stringstream ss(text);
        std::string line;
        std::stringstream converted_text_ss;
        while (getline(ss, line, '\n')) {
            std::stringstream line_ss(line + "\n");
            yyFlexLexer flex(&line_ss);
            if (flex.yylex()) {
                if ( !vector.empty() && !is_in_types(toLower(vector[1])) && (
                        is_matched((toLower(vector[2]))) && is_matched(toLower(vector[3])) ||
                        isdigit((vector[2])[0]) && is_matched(toLower(vector[3])) ||
                        isdigit((vector[3])[0]) && is_matched(toLower(vector[2])) ||
                        isdigit((vector[2])[0]) && isdigit((vector[3])[0])  //isdigit тк переменная не начин на цифру => это 100 проц число
                )) {
                    converted_text_ss << vector[1] << " - " << vector[0] << "\n";
                    insert_word(toLower(vector[1]));
                }
            }
        }
        return converted_text_ss.str();
    }
}