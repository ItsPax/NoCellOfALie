// include guard
#ifndef PRINTTABLES_H
#define PRINTTABLES_H
#include<iostream>
#include <queue>
#include <string>

using namespace std;

void printPlaintext(bool truthArray[], deque<string> vars, string equation, int numVariations, int numBits);
void printLatexSyntax(bool truthArray[], deque<string> vars, string equation, int numVariations, int numBits);
void printMarkdownSyntax(bool truthArray[], deque<string> vars, string equation, int numVariations, int numBits);
string toLatex(string equation);

#endif

