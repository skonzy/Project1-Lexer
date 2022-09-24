#include "MultiplyAutomaton.h"

void MultiplyAutomaton::S0(const std::string& input) {
    if (input[index] == '*') {
        inputRead++;
    }
    else {
        Serr();
    }
}