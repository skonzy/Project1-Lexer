#ifndef PROJECT1_STARTER_CODE_QUESTIONMARKAUTOMATON_H
#define PROJECT1_STARTER_CODE_QUESTIONMARKAUTOMATON_H

#include "Automaton.h"

class QuestionMarkAutomaton : public Automaton {
public:
    QuestionMarkAutomaton() : Automaton(TokenType::Q_MARK) {}
    void S0(const std::string& input);
};

#endif //PROJECT1_STARTER_CODE_QUESTIONMARKAUTOMATON_H
