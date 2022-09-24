#include "IdAutomaton.h"

void IdAutomaton::S0(const std::string &input) {
//    int inputRead = 0;
    bool isId = false;

    if (isalpha(input[0])) {
        isId = true;
        inputRead++;
    }
    if (isId) {
        for (unsigned int i = 1; i < input.size(); i++) {
            if (isalnum(input[i])) {
                inputRead++;
            } else {
                break;
            }
        }
        string id = input.substr(0, inputRead);
        if (id == "Schemes" || id == "Facts" || id == "Rules" || id == "Queries") {
            Serr();
        }
    }
}
