/*

Testing Class implimentation

*/
#pragma once
#include <iostream>
#include "Poly.h"
using namespace std;



int main() {
	Term a(1, 'x', 2);
	Term b(5, 'x', 3);
	bool me = true;
	Poly function;
	function.setTerm(a, true);
	function.setTerm(b, false);
	function.print();

	return 0;
}
