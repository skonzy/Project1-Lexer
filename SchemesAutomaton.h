#ifndef PROJECT1_STARTER_CODE_SCHEMESAUTOMATON_H
#define PROJECT1_STARTER_CODE_SCHEMESAUTOMATON_H

#include "Automaton.h"

class SchemesAutomaton : public Automaton {
public:
    SchemesAutomaton() : Automaton(TokenType::SCHEMES) {}
    void S0(const std::string& input);
};


#endif //PROJECT1_STARTER_CODE_SCHEMESAUTOMATON_H
