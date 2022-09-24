#include "Lexer.h"

Lexer::Lexer() {
    CreateAutomata();
}

Lexer::~Lexer() {
    for (unsigned int i = 0; i < automata.size(); i++) {
        delete automata[i];
    }
    for (unsigned int i = 0; i < tokens.size(); i++) {
        delete tokens[i];
    }
}

void Lexer::CreateAutomata() {
    automata.push_back(new IdAutomaton());
    automata.push_back(new ColonAutomaton());
    automata.push_back(new ColonDashAutomaton());
    automata.push_back(new CommaAutomaton());
    automata.push_back(new PeriodAutomaton());
    automata.push_back(new LeftParenAutomaton());
    automata.push_back(new RightParenAutomaton());
    automata.push_back(new MultiplyAutomaton());
    automata.push_back(new AddAutomaton());
    automata.push_back(new SchemesAutomaton());
    automata.push_back(new FactsAutomaton());
    automata.push_back(new RulesAutomaton());
    automata.push_back(new QueriesAutomaton());
    automata.push_back(new StringAutomaton());
    automata.push_back(new CommentAutomaton());
    automata.push_back(new QuestionMarkAutomaton());
}

void Lexer::Run(std::string& input) {
    int lineNumber = 1;
    string currString = input;

    while (currString.size() > 0) {
        unsigned int maxRead = 0;
        Automaton* maxAutomaton = automata.at(0);

        for (unsigned int i = 0; i < automata.size(); i++) {
            unsigned int inputRead = automata.at(i)->Start(currString);
            if (inputRead > maxRead) {
                maxRead = inputRead;
                maxAutomaton = automata.at(i);
            }
        }
        if (maxRead > 0) {
            string strVal = currString.substr(0, maxRead);
            Token* newToken = maxAutomaton->CreateToken(strVal, lineNumber);
            tokens.push_back(newToken);

            for (unsigned int i = 0; i < maxRead; i++) {
                if (currString[i] == '\n') {
                    lineNumber++;
                }
            }
        }
        else {
            maxRead = 1;
            if (currString[0] == '\n') {
                lineNumber += maxRead;
            }

            else if (!isspace(currString[0])) {
                Token* newToken = new Token(TokenType::UNDEFINED, currString.substr(0, maxRead), lineNumber);
                tokens.push_back(newToken);
            }
        }
        currString = currString.substr(maxRead);
    }
    Token* EndOfToken = new Token(TokenType::END_OF_FILE, "", lineNumber);
    tokens.push_back(EndOfToken);
}

string Lexer::toString() {
    string str = "";
    for (unsigned int i = 0; i < tokens.size(); i++) {
        str += tokens.at(i)->toString() + "\n";
    }
    str += "Total Tokens = " + to_string(tokens.size());
    return str;
}
