#ifndef PROJECT1_STARTER_CODE_RULESAUTOMATON_H
#define PROJECT1_STARTER_CODE_RULESAUTOMATON_H

#include "Automaton.h"

class RulesAutomaton : public Automaton {
public:
    RulesAutomaton() : Automaton(TokenType::RULES) {}
    void S0(const std::string& input);
};


#endif //PROJECT1_STARTER_CODE_RULESAUTOMATON_H
