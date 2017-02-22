/*
Module.cpp
Classes related to Math architecture

Module interprets Terms to find its derivitive by various methods
Developer: Nathan Shepherd
*/
#include "Module.h"
using namespace std;

/*
Poly Module::copyPoly(Poly inPoly) {
	Poly copyPoly;
	for (int i = 0; i < inPoly.getNumTermsNum; ++i) {
		copyPoly.setTerm(inPoly.getTerm(i, true), true);
	}
	for (int k = 0; k < inPoly.getNumTermsDom; ++k) {
		copyPoly.setTerm(inPoly.getTerm(k, false), false);
	}
	return copyPoly;
}
*/

Term Module::powerRule(Term inTerm) { 
    inTerm.setCoef(inTerm.getCoef() * inTerm.getPower());
    return inTerm; 
}

Poly Module::quotientRule(Poly inPoly) {
	//(u/v)' = (u'v - uv') / v^2
	Poly copy;
	//copyPoly(inPoly);
	inPoly;
    return inPoly; 
}

//Term Module::chainRule(Term inTerm) {return inTerm;}