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
Symbol -> SymbolCoefficient-> BasicExpression(Including all basic +-*(div)^ operations. Use brackets)


*/

#include <string>
#ifndef ALGEBRAICMANIPULATION_H
#define ALGEBRAICMANIPULATION_H

namespace Algebra {
	/// <summary>
	/// Single item algebraic term only (no integer coefficient)
	/// </summary>
	class Symbols {
	private:
		char symbol;
		bool usable;
	public:
		Symbols();


		/// <summary>
		/// Set symbol from user input
		/// </summary>
		/// <param name="s">input param</param>
		/// <returns>true for a successful set, false otherwise</returns>
		bool SetSymbol(std::string s);

		//manual override set for char input
		void SetSymbol(char c);

		char GetSymbol();

	};
	class Fractions { //numerical only
	private:
		int numerator;
		int denominator;
		int GCD(int a, int b);
	public:
		Fractions();
		void SetNumerator(int i);
		bool SetDenominator(int i);
		void Simplify();
	};
	/// <summary>
	/// Inline as functions are trivial
	/// Only supports non-component symbols and coefficients
	/// </summary>
	class SymbolCoefficient {
	private:
		Fractions coefficient;
		Symbols symbol;
	public:
		inline SymbolCoefficient() { 
			coefficient = Fractions(); 
			symbol = Symbols(); 
		};
		inline void SetFraction(Fractions f) {
			coefficient = f;
		}
		inline void SetSymbol(Symbols s) {
			symbol = s;
		}
	};

	/// <summary>
	/// List of operands and symbol coefficients (single line)
	/// </summary>
	class BasicExpression {
	private:

	public:
		
	};

	class BasicExpressionTree {
	private:
	public:
	};
}

#endif