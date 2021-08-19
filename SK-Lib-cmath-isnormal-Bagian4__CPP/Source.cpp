#include <iostream>
#include <conio.h>
#include <cmath>

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

using namespace std;

int main() {

	long double f = 7.0;

	// check for non-zero value
	cout << "isnormal(7.0) is = " << isnormal(f) << endl;

	// check for zero
	f = 0.0;
	cout << "isnormal(0.0) is = " << isnormal(f) << endl;

	// check for infinite value
	f = 9.2;
	cout << "isnormal(9.2/0.0) is = " << isnormal(f / 5.0) << endl;

	_getch();
	return 0;
}
