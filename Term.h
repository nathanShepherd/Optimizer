/*
Term.h
Classes related to Math architecture

Term is a class for a group of data types that
correspond to to an n-th term polynomial.
Developer: Nathan Shepherd
*/
#pragma once
#include <iostream>
using namespace std;

class Term {
private:
	int coef;
	int power;
	char base;
public:
	Term() {};
	Term(int a, int pwr);

	void setCoef(int a);
	void setPower(int pwr);
	void setBase(char b);
	void setTerm(Term inTerm);

	int const getCoef();
	int const getPower();
	char const getBase();

	Term operator-(Term rhs);
	Term operator+(Term rhs);
	Term operator*(Term rhs);
	Term operator/(Term dividend);
	Term operator=(Term dividend);

	void Term::powerRule();

	//istream& Term::operator>> (istream& ins, Term& Term);
	//ostream& operator<< (ostream& outs, Term Term);
	void read(Term inTerm, istream ins);
	void write(ostream& outs);
};