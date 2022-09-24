#include "CommentAutomaton.h"
#include <iostream>

void CommentAutomaton::S0(const string& input) {
//    int inputRead = 0;
    bool multiLineComment = false;
    bool blockComment = false;

    if (input[0] == '#') {
        if (input[1] == '|') {
            blockComment = true;
        } else {
            multiLineComment = true;
        }
        inputRead++;
    }
    if (multiLineComment) {
        for (unsigned int i = 1; i < input.size(); i++) {
            if (input[i] == '\n') {
                break;
            } else {
                inputRead++;
            }
        }
    } else if (blockComment) {
        inputRead++;
        bool badComment = true;
        for (unsigned int i = 2; i < (input.size()); i++) {
            inputRead++;
            if (input[i] == '|') {
                if ((i < (input.size() - 1)) && !(input[(i + 1)] == '#')) {
                } else {
                    inputRead++;
                    badComment = false;
                    break;
                }
            }
        }
        if (badComment) {
            this->type = TokenType::UNDEFINED;
        }
    }
}
