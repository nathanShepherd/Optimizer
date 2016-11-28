/*

Classes related to Math architecture

Module interprets Terms to find its derivitive

*/
#include "Module.h"
using namespace std;

Term Module::powerRule(Term inTerm) { 
    inTerm.setCoef() = inTerm.getCoef() * inTerm.getPower();
    return inTerm; 
}
Term Module::chainRule(Term inTerm) { return inTerm; } //not functional in this iteration
Term Module::quotientRule(Poly inPoly) { 
    inPoly
    return inTerm; 
}
