#include "StringAutomaton.h"

void StringAutomaton::S0(const std::string &input) {
    if (input[index] == '\'') {
        index++;
        inputRead++;
        S1(input);
    } else {
        Serr();
    }
}
void StringAutomaton::S1(const std::string &input) {
    if (input[index] == '\'') {
        index++;
        inputRead++;
        S2(input);
    } else if ((input.size()) == index) {
        this->type = TokenType::UNDEFINED;
    } else if (input[index] == '\n') {
        index++;
        inputRead++;
        S1(input);
        } else {
        inputRead++;
        index++;
        S1(input);
    }
}
void StringAutomaton::S2(const std::string & input) {
    if(input[index] == '\'') {
        index++;
        inputRead++;
        S1(input);
    }
}