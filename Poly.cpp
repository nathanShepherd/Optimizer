/*
Poly.cpp
Classes related to Math architecture

Poly is a class for creating Polynomial structure.
Developer: Nathan Shepherd
*/


#include <iostream>
#include <string>
#include "Poly.h"
using namespace std;


Poly::Poly() {
        numTermsNum = 0;
        numTermsDom = 0;
		Term initialize(0, 0);
		Term nomial[2][8] = {{ (initialize),(initialize), 
							   (initialize),(initialize),
							   (initialize),(initialize), 
							   (initialize),(initialize) }, 
							   
							 { (initialize),(initialize), 
							   (initialize),(initialize),
							   (initialize),(initialize), 
							   (initialize),(initialize) }};
}

void Poly::setTo(Poly inPoly) {}

void Poly::setTerm(Term newTerm, bool isNumerator) {
        if (isNumerator && (numTermsNum < colMax)) {
                nomial[0][numTermsNum] = newTerm;
                ++numTermsNum;
        }
        if (!isNumerator && (numTermsDom < colMax)) {
                nomial[1][numTermsDom] = newTerm;
                ++numTermsDom;
        }
}

Term const Poly::getTerm(int termPosition, bool isNumerator) {
    if (isNumerator && (termPosition < numTermsNum)) {
        return nomial[0][termPosition];
    }
    else if (!isNumerator && (termPosition < numTermsDom)) {
        return nomial[1][termPosition];
    } else {
        Term error;
        error.setBase('~');
		return error;
    }
}

int const Poly::getNumTermsNum(Poly inPoly) {
	return numTermsNum;
}
int const Poly::getNumTermsDom(Poly inPoly) {
	return numTermsDom;
}

void Poly::write(ostream& outs) {
        //for loop iterates over nomial()()
        cout << "[";
        for (int i = 0; i < numTermsNum; ++i) {
                nomial[0][i].write(outs);
        }
        cout << "]" << "/" << "[";
        for (int i = 0; i < numTermsDom; ++i) {
                nomial[1][i].write(outs);
        }
        cout << "]";
}
