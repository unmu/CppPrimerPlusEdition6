#include <iostream>
using namespace std;
int main () {
	int year = 0;
	double Daphne = 100, Cleo = 100;
	while (Cleo <= Daphne) {
		Daphne = Daphne + 10;
		Cleo = Cleo * 1.05;
		year++;
		cout << "Year: " << year << " - Daphne: " << Daphne << ", Cleo: " << Cleo << endl;
	}
	return 0;
}
