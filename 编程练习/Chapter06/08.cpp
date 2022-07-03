#include <iostream>
#include <fstream>
using namespace std;
int main () {
	ifstream file;
	file.open("t_08.txt");
	if (!file.is_open()) {
		exit(EXIT_FAILURE);
	}
	int cnt = 0;
	char ch;
	while (file.good()) {
		ch = file.get();
		cnt++;
	}
	cout << "There are " << cnt << " characters in this file.";
	file.close();
	return 0;
}
