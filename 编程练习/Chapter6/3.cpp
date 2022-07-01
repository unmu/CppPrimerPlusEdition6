#include <iostream>
using namespace std;
int main () {
	char ch;
	cout << "Please enter one of the following choices:\n";
	cout << "c) carnivore p) pianist\n";
	cout << "t) tree g) game\n";
	while (ch = cin.get()) {
		switch (ch) {
			case 'c':
				cout << "A lion is a carnivore.\n";
				break;
			case 'p':
				cout << "Chopin is a pianist.\n";
				break;
			case 't':
				cout << "A maple is a tree.\n";
				break;
			case 'g':
				cout << "Super Mario is a game.\n";
				break;
			default:
				cout << "Please enter a c, p, t, or g: ";
		}
	}
	return 0;
}
