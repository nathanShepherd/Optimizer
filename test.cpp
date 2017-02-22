/*
test.cpp
Testing Class implementation
Developer: Nathan Shepherd
*/
#pragma once
#include <iostream>
#include "Poly.h"
#include "Module.h"
using namespace std;

void derivation();
void algebra();

int main() {
	derivation();
	algebra();

	return 0;
}

void derivation() {
	cout << "You are presented with two terms." << endl;
	cout << "The first term f(x) = x^3" << endl;
	cout << "The second term g(x) = 5x^3" << endl << endl;

	cout << "Getting terms ..." << endl;
	Term f(1, 2);
	Term g(5, 3);

	cout << "finding derivitive of f(x)" << endl;
	Term fPrime(0,0);
	fPrime.setTerm(f);
	fPrime.powerRule();
	cout << "f'(x) = ";
	fPrime.write(cout);
	cout << endl;
	

	cout << "setting to a polynomial" << endl;
	Poly function;
	function.setTerm(f, true);
	function.setTerm(g, false);

	cout << "Your function is d(x): ";
	function.write(cout);
	cout << endl << endl;

	cout << "finding derivitive of d(x)" << endl;
	function.setTerm(function.getTerm(0, true), true);
	
	function.getTerm(0, true);
	cout << "d'(x) = " << endl;
}

void algebra() {
	Term f(1, 2);
	Term g(5, 3);
	
	cout << "Adding ..." << endl;
	Term sum(0,0);
	sum = f + g;

	cout << "x^2 + 5x^3 = ";
	sum.write(cout);
}