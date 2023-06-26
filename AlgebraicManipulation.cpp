// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
Algebraic expressions. These will use ONLY integer fraction components and defined constants like pi or e.


NEED TO UNIT TEST

Rules:
Everything bracketed, PI = pi, E = e, '/' is a divide operation
Adjacent brackets represent multiplication
+- as standard
^ as exponential function
Square roots etc as fractional powers.
Maximum simplification
Algebraic lettering remains as that and can ONLY be lower case, else throw error. Single letter for each algebraic term.



*/
#include <string>
#include <iostream>
#include "AlgebraicManipulation.h"


using namespace Algebra;
Symbols::Symbols() {
	symbol = '.';
	usable = false;
}
bool Symbols::SetSymbol(std::string s) {
	if (s.length() != 1) {
		return false;
	}
	else {
		symbol = s[0];
		usable = true;
		return true;
	}
}
char Symbols::GetSymbol() {
	return symbol;
}