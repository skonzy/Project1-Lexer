#include "Lexer.h"
#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

int main(int argc, char** argv) {

    string srcPath = argv[1];

    Lexer lex;

    string inputString = "";
    string toAppendString = "";

    ifstream fin;
    fin.open(srcPath);

    if (!fin.is_open()) {
        cout << "Could not open input path." << endl;
    } else {

        while (getline(fin, toAppendString)) {
            toAppendString += "\n";
            inputString += toAppendString;
        }
    }

    fin.close();

    lex.Run(inputString);
    cout << lex.toString();

    return 0;
}