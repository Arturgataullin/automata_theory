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

    std::string converter_by_format(const std::string& str) {
        std::regex format(R"(^(int|short|double)?\s*([a-zA-Z][a-zA-Z0-9]{0,15})\s*:=\s*([a-zA-Z0-9]+)\s*([\+\*\-/])\s*([0-9]+))");
        std::smatch match;
        std::stringstream ss;
        if (std::regex_search(str, match,format)) {
            auto match1 = match[2].str();
            auto match2 = match[1].str();
            if (match2.empty()) match2 = "int";
            ss << match1 << " + " << match2 << "\n";
        }
        return ss.str();
    }

    std::string regex_str_recognizer::recognize(const std::string &text) {
        std::stringstream converted_text_ss;
        auto sentences = tokenGetter(text);
        for (auto& sent : sentences) {
            auto str = converter_by_format(sent);
            converted_text_ss << str;
        }
        return converted_text_ss.str();
    }
}