#include "FactsAutomaton.h"

void FactsAutomaton::S0(const std::string& input) {
    if (input.substr(0, 5) == "Facts") {
        inputRead += 5;
    }
    else {
        Serr();
    }
}