#include <iostream>
using namespace std;

const int strsize = 50;
const int BOPsize = 5;

struct bop {
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;
};

void hint() {
	cout << "a. display by name    b. display by title\n"
		<< "c. display by bopname  d. display by preference\n"
		<< "q. quit\n";
}

int main () {
	bop b[BOPsize] = {{"Wimp Macho", "Programmer", "BOP", 0},
					{"Raki Rhodes", "Junior Programmer", "BOP", 1},
					{"Celia Laiter", "Programmer", "MIPS", 2},
					{"Hoppy Hipman", "Analyst Trainee", "BOP", 1},
					{"Pat Hand", "Programmer", "LOOPY", 2}
	};
	char ch;
	cout << "Benevolent Order of Programmers Report\n";
	hint();
	cout << "Enter your choice: ";
	while (cin >> ch) {
		if (ch == 'q') {
			cout << "Bye\b";
			break;
		} else if (ch == 'a') {
			for (int i = 0; i < BOPsize; i++) {
				cout << b[i].fullname << endl;
			}
		} else if (ch == 'b') {
			for (int i = 0; i < BOPsize; i++) {
				cout << b[i].title << endl;
			}
		} else if (ch == 'c') {
			for (int i = 0; i < BOPsize; i++) {
				cout << b[i].bopname << endl;
			}
		} else if (ch == 'd') {
			for (int i = 0; i < BOPsize; i++) {
				switch (b[i].preference) {
					case 0:
						cout << b[i].fullname << endl;
						break;
					case 1:
						cout << b[i].title << endl;
						break;
					case 2:
						cout << b[i].bopname << endl;
						break;
					default:
						break;
				}
			}
		} else {
			hint();
		}
		cout << "Next choice: ";
	}
	return 0;
}
