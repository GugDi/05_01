#include "TLogElement.h"
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	TNot elNot;
	TAnd elAnd;
	int A, B;
	//для “примера из книжки” нужно вырезать то что тут (ниже
	/**/  elAnd.setIn1(true);
	/**/  elAnd.setIn2(true);
	/**/  cout << "elAnd.In1 = " << elAnd.getIn1() << endl;
	/**/  cout << "elAnd.In2 = " << elAnd.getIn2() << endl;
	/**/  cout << "elAnd.Res = " << elAnd.getRes() << endl;
	/**/
	/**/  elAnd.Link(&elNot);
	/**/  elAnd.setIn1(true);
	/**/  elAnd.setIn2(true);
	//для “примера из книжки” нужно вырезать то что тут (выше)
	cout << " A B !(A&B)" << endl;
	cout << "-------------" << endl;
	for (A = 0; A <= 1; A++) {
		elAnd.setIn1(A);
		for (B = 0; B <= 1; B++) {
			elAnd.setIn2(B);
			elNot.setIn1(elAnd.getRes());
			cout << " " << A << " " << B
				<< " " << elNot.getRes() << endl;
		}
	}
};
