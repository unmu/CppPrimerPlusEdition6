#include <iostream>
#include <array>
using namespace std;

const int Arsize = 16;

int main () {
	array<long double, Arsize> factorials;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(0);
	factorials[1] = factorials[2] = 1LL;
	for (int i = 2; i < Arsize; i++) {
		factorials[i] = factorials[i - 1] * i;
	}
	for (int i = 0; i < Arsize; i++) {
		cout << i << "! = " << factorials[i] << endl;
	}
	return 0;
}
