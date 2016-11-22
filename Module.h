/*

Classes related to Math architecture

Module interprets Terms to find its derivitive

*/
#pragma once
#include "Poly.h"
using namespace std;

class Module {
private:
	Poly copyPoly[2][8];
public:
	Term powerRule(Term inTerm);
	Term chainRule(Term inTerm);
	Term quotientRule(Term inTerm);

	//Point findMax(Poly function);
	//Point findMin(Poly function);

};