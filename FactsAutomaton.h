#ifndef PROJECT1_STARTER_CODE_FACTSAUTOMATON_H
#define PROJECT1_STARTER_CODE_FACTSAUTOMATON_H

#include "Automaton.h"

class FactsAutomaton : public Automaton {
public:
    FactsAutomaton() : Automaton(TokenType::FACTS) {}
    void S0(const std::string& input);
};


#endif //PROJECT1_STARTER_CODE_FACTSAUTOMATON_H
