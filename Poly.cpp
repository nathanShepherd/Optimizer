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
        Term nomial[2][8];
}

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

Term Poly::getTerm(int termPosition, bool isNumerator) {
    if (isNumerator && (termPosition < numTermNum)) {
        return nomial[0][termPosition];
    }
    else if (!isNumerator && (termPosition < numTermsDom)) {
        return nomial[1][termPosition];
    } else {
        Term error;
        error.setBase('~');
    }
}

void Poly::print() {
        //for loop iterates over nomial()()
        cout << "[";
        for (int i = 0; i < numTermsNum; ++i) {
                nomial[0][i].print();
        }
        cout << "]" << "/" << "[";
        for (int i = 0; i < numTermsDom; ++i) {
                nomial[1][i].print();
        }
        cout << "]";
}
