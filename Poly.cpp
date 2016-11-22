/*

Classes related to Math architecture

Poly is a class for creating Polynomial structure.

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