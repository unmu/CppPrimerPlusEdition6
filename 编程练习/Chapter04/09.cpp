#include <iostream>
using namespace std;

struct CandyBar {
	string brand;
	double weight;
	int calorie;
};

int main () {
	CandyBar *snacks = new CandyBar[3] {{"Mocha Munch", 2.3, 350}, 
						{"Golden monkey", 3.1, 400},
						{"Hsu Fu Kee", 5.2, 370}};
	for (int i = 0; i < 3; i++) {
		cout << snacks[i].brand << endl;
		cout << snacks[i].weight << endl;
		cout << snacks[i].calorie << endl;
		cout << endl;
	}
	return 0;
}
