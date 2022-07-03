#include <iostream>
#include <cstring>
using namespace std;

int main () {
	char ch[50]; 
	int cnt = 0;
	cout << "Enter words (to stop, type the word done):\n";
	while (cin >> ch && strcmp(ch, "done")) {
		cnt++;
	}
	cout << "You entered a total of " << cnt << " words.\n";
	return 0;
}
