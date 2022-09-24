#include "QueriesAutomaton.h"

void QueriesAutomaton::S0(const std::string& input) {
    if (input.substr(0, 7) == "Queries") {
        inputRead += 7;
    }
    else {
        Serr();
    }
}