#include <iostream>
#include <vector>
#include <climits>
using namespace std;

struct org {
	string name;
	double money;
};

void printByType(vector<org> &donators, int type) {
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(2);
	for (int i = 0; i < donators.size(); i++) {
		if (donators[i].money >= 10000 && type == 1 || donators[i].money < 10000 && type == 2) {
			cout << "Name: " << donators[i].name << " Money: " << donators[i].money << endl;
		}
	}
}

int main () {
	vector<org> donators;
	int n;
	cout << "Enter the number of donators: ";
	cin >> n;
	donators.resize(n);
	string name;
	double money;
	for (int i = 0; i < n; i++) {
		cout << "Enter name :";
		cin.get();
		getline(cin, name);
		cout << "Enter money: ";
		cin >> money;
		donators[i].name = name;
		donators[i].money = money;
	}
	if (n == 0) {
		cout << "none\n";
	} else {
		cout << "-----Grand Patrons-----\n";
		printByType(donators, 1);
		cout << "-----   Patrons   -----\n";
		printByType(donators, 2);
	}
	return 0;
}
