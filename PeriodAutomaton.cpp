#include "PeriodAutomaton.h"

void PeriodAutomaton::S0(const std::string& input) {
    if (input[index] == '.') {
        inputRead++;
    }
    else {
        Serr();
    }
}