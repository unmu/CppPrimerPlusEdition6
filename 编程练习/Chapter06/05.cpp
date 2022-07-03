#include <iostream>
using namespace std;
int main () {
	int money;
	int tvarps;
	while (cin >> money) {
		if (money < 0) {
			break;
		}
		tvarps = 0;
		if (money <= 5000) {
			cout << "0 tvarps.\n";
			continue;
		}
		money -= 5000;
		if (money <= 10000) {
			tvarps += money * 0.1;
			cout << tvarps << " tvarps.\n";
			continue;
		}
		money -= 10000;
		tvarps += 1000;
		if (money <= 20000) {
			tvarps += money * 0.15;
			cout << tvarps << " tvarps.\n";
			continue;
		}
		money -= 20000;
		tvarps = tvarps + 3000 + money * 0.2;
		cout << tvarps << " tvarps.\n";
	}
	return 0;
}
