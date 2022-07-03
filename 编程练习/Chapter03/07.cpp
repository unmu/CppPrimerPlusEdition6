#include <iostream>
using namespace std;

const double kilometerToMile = 0.6214;
const double gallonToLiter = 3.785;

int main () {
	double lpk, mpg;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(2);
	cout << "Input liters/(100*kilometers): ";
	while (cin >> lpk) {
		mpg = 1 / (lpk / 100) * kilometerToMile * gallonToLiter;
		cout << mpg << " miles/gallon" << endl;
		cout << "Input liters/(100*kilometers): ";
	}
	return 0;
} 
