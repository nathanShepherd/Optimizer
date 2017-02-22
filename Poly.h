/*
Poly.h
Classes related to Math architecture

Poly is a class for creating Polynomial structure.
Developer: Nathan Shepherd
*/

#pragma once
#include "Term.h"
using namespace std;

class Poly {
private:
	//array 'nomial' contains numerator Terms in rows
	//and denominator Terms in columns
	int const rowMax = 2;
	int const colMax = 2;
	int numTermsNum = 0;
	int numTermsDom = 0;
	Term nomial[2][2];

public:
	Poly();
	
	void setTo(Poly inPoly);
	void setTerm(Term newTerm, bool isNumerator);
	
	Term const getTerm(int termPosition, bool isNumerator);
	int const getNumTermsNum(Poly inPoly);
	int const getNumTermsDom(Poly inPoly);

	void write(ostream& outs);
};