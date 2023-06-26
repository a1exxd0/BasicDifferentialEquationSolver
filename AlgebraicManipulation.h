#pragma once
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

Structure as parent class for expressions and build greater expression holders. Using composition:
Symbol -> BasicExpression(Including all basic +-*(div)^ operations. Use brackets)


*/

#include <string>
#ifndef ALGEBRAICMANIPULATION_H
#define ALGEBRAICMANIPULATION_H

namespace Algebra {
	class Symbols {
	private:
		char symbol;
		bool usable;
	public:
		Symbols();
		bool SetSymbol(std::string s);
		char GetSymbol();
	};


	class BasicExpression {
	private:

	public:

	};
}

#endif