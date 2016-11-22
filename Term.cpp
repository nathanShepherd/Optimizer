/*

Classes related to Math architecture

Term is a class for creating a group of data types
	that correspond to to an n-th term polynomial.

*/
#include <iostream>
#include "Term.h"
using namespace std;

Term::Term(int a, char b, int pwr) {
	coef = a;
	base = b;
	power = pwr;
}

void Term::setCoef(int a) { 
	coef = a; 
}
void Term::setPower(int pwr) { 
	power = pwr; 
}
void Term::setBase(char b) { 
	base = b; 
}

int Term::getCoef() { 
	return coef;
}
int Term::getPower() { 
	return power; 
}
char Term::getBase() { 
	return base; 
}

void Term::print() {
	cout << getCoef() << getBase() << '^' << getPower();
}
