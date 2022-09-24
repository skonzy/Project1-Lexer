#ifndef PROJECT1_STARTER_CODE_COMMENTAUTOMATON_H
#define PROJECT1_STARTER_CODE_COMMENTAUTOMATON_H

#include "Automaton.h"
#include <string>

class CommentAutomaton : public Automaton {
public:
    CommentAutomaton() : Automaton(TokenType::COMMENT) {}
    void S0(const std::string& input);
};


#endif //PROJECT1_STARTER_CODE_COMMENTAUTOMATON_H
