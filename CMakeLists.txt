cmake_minimum_required(VERSION 3.20)
project(Project1_Test)

set(CMAKE_CXX_STANDARD 14)

add_executable(Project1_Test main.cpp Lexer.cpp Token.cpp IdAutomaton.cpp CommaAutomaton.cpp FactsAutomaton.cpp PeriodAutomaton.cpp StringAutomaton.cpp CommentAutomaton.cpp QueriesAutomaton.cpp SchemesAutomaton.cpp MultiplyAutomaton.cpp ColonAutomaton.cpp LeftParenAutomaton.cpp RightParenAutomaton.cpp AddAutomaton.cpp RulesAutomaton.cpp ColonDashAutomaton.cpp QuestionMarkAutomaton.cpp)
