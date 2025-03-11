//
// Created by artur on 27.02.2025.
//

#include <vector>
#include <array>
#include <algorithm>
#include "Parser_sm.h"
#define OPRES_COUNT 3
#define SIGNS_COUNT 2

using namespace statemap;

class Parser {
private:
    ParserContext _fsm;

    std::vector<unsigned > starts_ends_of_tokens;
    unsigned index = 0;
    std::string str;
    unsigned is_acceptable = 0;
    unsigned state = 0;
    // int a := 3 + 3
    // 1   2 3  4 5 6

    //     a := 3 + 3
    //     2 3  4 5 6
public:
    Parser() : _fsm(*this), starts_ends_of_tokens(), str() {}
    ~Parser() = default;

    void clear() {
        starts_ends_of_tokens = std::vector<unsigned >();
        index = 0;
        state = 0;
        str = std::string();
        is_acceptable = 0;
    }

    void push_string(const std::string& new_str) {
        str = new_str;
    }
//фикс состояния, если нет типа
    void fix_state() {
        state = 2;
    }

    bool is_operation_sign(char ch) {
        return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
    }

    unsigned get_state() {
        return state;
    }

    void increase_state() {
        state++;
    }

    void acceptable() {
        is_acceptable = 1;
    }

    void unacceptable() {
        is_acceptable = 2;
    }

    void token_start() {
        starts_ends_of_tokens.push_back(index);
    }

    void token_end() {
        starts_ends_of_tokens.push_back(index);
    }

    void consume() {
        index++;
    }

    char peek() {
        if (index >= str.length())
            return '\0';
        return str[index];
    }

    void next() {
        _fsm.next();
    }

    std::vector<std::string> parse();
};