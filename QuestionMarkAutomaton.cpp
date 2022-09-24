#include "QuestionMarkAutomaton.h"

void QuestionMarkAutomaton::S0(const std::string& input) {
    if (input[index] == '?') {
        inputRead++;
    }
    else {
        Serr();
    }
}