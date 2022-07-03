#include <iostream>
#include <array>
using namespace std;
int main () {
	array<double, 3> ar;
	cout << "Input Grades of three times: \n";
	cout << "1: ";
	cin >> ar[1];
	cout << "2: ";
	cin >> ar[2];
	cout << "3: ";
	cin >> ar[3];
	cout << "Average grade: " << (ar[1] + ar[2] + ar[3]) / 3 << endl;
	return 0;
}
