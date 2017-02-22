/*
Term.cpp
Classes related to Math architecture

Poly is a class for creating Polynomial structure.
Developer: Nathan Shepherd
*/

#pragma once
#include "Term.h"
using namespace std;


Term::Term(int a, int pwr) {
	coef = a;
	base = 'x';
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
void Term::setTerm(Term inTerm) {
	coef = inTerm.getCoef();
	base = inTerm.getBase();
	power = inTerm.getPower();
}

int const Term::getCoef() {
	return coef;
}
int const Term::getPower() {
	return power;
}
char const Term::getBase() {
	return base;
}

Term Term::operator- (Term rhs) {
	Term diff;
	diff.coef = coef + rhs.coef;

	diff.base = base;
	diff.power = power;

	return diff;
}
Term Term::operator+ (Term rhs) {
	Term sum;
	sum.coef = coef + rhs.coef;

	sum.base = base;
	sum.power = power;

	return sum;
}
Term Term::operator* (Term right) {
	Term product;
	product.coef = coef * right.coef;

	product.base = base;
	product.power = power;

	return product;
}
Term Term::operator/ (Term dividend) {
	Term quotient;
	quotient.coef = coef * dividend.coef;

	quotient.base = base;
	quotient.power = power;

	return quotient;
}
Term Term::operator=(Term give) {
	Term assign;
	assign.coef = give.coef;
	assign.base = give.base;
	assign.power = give.power;

	return assign;
}

//istream& Term::operator>> (Term Term) {

ostream& operator<< (ostream& outs, Term Term) {
	Term.write(outs);
	return outs;
}

void Term::powerRule() {
	coef = coef * power;
}

void Term::read(Term inTerm, istream ins) {
	char delCarrot;
	int a, pwr;
	char b;

	ins >> a >> b >> delCarrot >> pwr;

	inTerm.setCoef(a);
	inTerm.setBase(b);
	inTerm.setPower(pwr);
}
void Term::write(ostream& outs) {
	outs << getCoef() << getBase() << '^' << getPower();
}