#include <iostream>
#include <array>
using namespace std;
int main () {
	array<double, 10> donation;
	double sum = 0, avg;
	int cnt = 0, greater = 0;
	while (cnt < 10 && cin >> donation[cnt]) {
		sum += donation[cnt];
		cnt++;
	}
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(2);
	avg = sum / cnt;
	for (int x : donation) {
		if (x > avg) {
			greater++;
		}
	}
	cout << "Average: " << avg << endl;
	cout << "There is " << greater << " numbers greater than average number.\n";
	return 0;
}
