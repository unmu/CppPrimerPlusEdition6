#include <iostream>
using namespace std;

void inputInfo() {
	cout << "Input number 1 to calculate mile/gallon, " << endl;
	cout << "Input number 2 to calculate kilometer/liter. " << endl;
	cout << "Input 'q' to terminate the program." << endl;
}

int main () {
	double mile, gallon, kilometer, liter;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(2);
	inputInfo();
	char choice;
	while (cin >> choice) {
		if (choice != '1' && choice != '2' && choice != 'q') {
			cout << "Invalid input. Input again. " << endl;
			continue;
		}
		if (choice == 'q') {
			break;
		} else if (choice == '1') {
			cout << "Input miles: ";
			cin >> mile;
			cout << "Input gallons: ";
			cin >> gallon;
			cout << mile / gallon << " miles/gallon" << endl;
		} else {
			cout << "Input kilometers: ";
			cin >> kilometer;
			cout << "Input liters: ";
			cin >> liter;
			cout << liter / kilometer * 100 << " liters/(100*kilometers)" << endl;
		}
		inputInfo();
	}
	return 0;
} 
