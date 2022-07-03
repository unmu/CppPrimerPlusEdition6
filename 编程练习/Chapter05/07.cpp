#include <iostream>
using namespace std;

struct car {
	string manufacturer;
	int year;
};

int main () {
	int n;
	cout << "How many cars do you wish to catalog? ";
	cin >> n;
	car *mycars = new car[n];
	for (int i = 0; i < n; i++) {
		cin.get();
		cout << "Car #" << i + 1 << endl;
		cout << "Please enter the make: ";
		getline(cin, mycars[i].manufacturer);
		cout << "Please enter the year made: ";
		cin >> mycars[i].year;
	}
	for (int i = 0; i < n; i++) {
		cout << mycars[i].year << " " << mycars[i].manufacturer << endl;
	}
	return 0;
}
