#include "SchemesAutomaton.h"

void SchemesAutomaton::S0(const std::string& input) {
    if (input.substr(0, 7) == "Schemes") {
        inputRead += 7;
    }
    else {
        Serr();
    }
}