/*

Classes related to Math architecture

Term is a class for creating a group of data types
that correspond to to an n-th term polynomial.

*/
#pragma once
using namespace std;

class Term {
private:
	int coef;
	int power;
	char base;
public:
	Term() {};
	Term(int a, char b, int pwr);

	void setCoef(int a);
	void setPower(int pwr);
	void setBase(char b);

	int getCoef();
	int getPower();
	char getBase();

	void print();
};