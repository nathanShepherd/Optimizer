/*

Classes related to Math architecture

Poly is a class for creating Polynomial structure.

*/

#pragma once
#include "Term.h"
using namespace std;

class Poly {
private:
	//array 'nomial' contains numerator Terms in rows
	//and denominator Terms in columns
	int const rowMax = 2;
	int const colMax = 8;
	int numTermsNum = 0;
	int numTermsDom = 0;
	Term nomial[2][8];

public:
	Poly();

	void setTerm(Term newTerm, bool isNumerator);
	void print();

};