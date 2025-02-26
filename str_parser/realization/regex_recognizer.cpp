#include "../headers/regex_recognizer.h"

namespace recognizer {
    std::vector<std::string> tokenGetter(const std::string& str) {
        std::stringstream ss(str);
        std::vector<std::string> res;
        std::string line;
        while (getline(ss, line)) {
            if (!line.empty()) res.push_back(line);
        }
        return res;
    }

    std::vector<std::string> converter_by_format(const std::string& str) {
        std::regex format(R"(^(int|short|double)?\s*([a-zA-Z][a-zA-Z0-9]{0,15})\s*:=\s*([0-9]+|[a-zA-Z][a-zA-Z0-9]{0,15})\s*([\+\*\-/])\s*([0-9]+))");
        std::smatch match;
        std::vector<std::string> results;
        if (std::regex_search(str, match,format)) {
            auto match1 = match[1].str();
            if (match1.empty()) match1 = "int";
            results.push_back(match1);
            results.push_back(match[2].str());
            results.push_back(match[3].str());
        }
        return results;
    }

    std::string regex_str_recognizer::recognize(const std::string &text) {
        std::stringstream converted_text_ss;
        auto sentences = tokenGetter(text);
        for (auto& sent : sentences) {
            auto results = converter_by_format(sent);
            if (!results.empty() && isdigit((results[2])[0]) || !results.empty() && is_matched(results[2])) {
                converted_text_ss << results[1] << " + " << results[0] << "\n";
                insert_word(results[1]);
            }

        }
        return converted_text_ss.str();
    }
}