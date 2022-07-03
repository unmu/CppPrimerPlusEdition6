#include <iostream>
using namespace std;

char *month[12] = {
	"January", "February", "March", "April", "May", "June",
	"July", "August", "September", "October", "November", "December"
};

int main () {
	int sales[12], sum = 0;
	for (int i = 0; i < 12; i++) {
		cout << month[i] << ": ";
		cin >> sales[i];
		sum += sales[i];
	}
	cout << "Total: " << sum << endl;
	return 0;
}
