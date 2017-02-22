/*
Module.h
Classes related to Math architecture

Module interprets Terms to find its derivative
Developer: Nathan Shepherd
*/
#pragma once
#include "Poly.h"
using namespace std;

class Module {
//?? Link poly and module class
// Poly must inherit module functionality
private:
	Poly copyPoly[2][8];
public:
	//Poly copyPoly(Poly inPoly);
	Term powerRule(Term inTerm);
	Poly quotientRule(Poly inPoly);

	//Term chainRule(Term inTerm);
	//Point findMax(Poly function);
	//Point findMin(Poly function);

};