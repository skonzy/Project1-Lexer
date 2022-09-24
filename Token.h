#ifndef TOKEN_H
#define TOKEN_H
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;

enum class TokenType {
    COLON,
    COLON_DASH,
    COMMA,
    PERIOD,
    Q_MARK,
    LEFT_PAREN,
    RIGHT_PAREN,
    MULTIPLY,
    ADD,
    SCHEMES,
    FACTS,
    RULES,
    QUERIES,
    ID,
    STRING,
    COMMENT,
    UNDEFINED,
    END_OF_FILE
};

class Token
{
public:
    Token();
    Token(TokenType type, std::string description, int line);
    string toString();
private:
    TokenType type;
    string description;
    int lineNumber;
};

#endif // TOKEN_H

