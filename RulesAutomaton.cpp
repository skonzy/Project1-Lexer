#include "RulesAutomaton.h"

void RulesAutomaton::S0(const std::string& input) {
    if (input.substr(0, 5) == "Rules") {
        inputRead += 5;
    }
    else {
        Serr();
    }
}