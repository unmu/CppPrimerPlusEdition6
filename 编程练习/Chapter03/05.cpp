#include <iostream>
using namespace std;
int main () {
	long long world, us;
	cout << "Enter the world's population: ";
	cin >> world;
	cout << "Enter thr population of the US: ";
	cin >> us;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(5);
	cout << "The population of the US is " << (double)us / world * 100 << "% of the world population.\n";
	return 0;
}
