#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct org {
	string name;
	double money;
};

void printByType(ofstream &ofile, vector<org> &donators, int type) {
	ofile.setf(ios_base::fixed, ios_base::floatfield);
	ofile.precision(2);
	for (int i = 0; i < donators.size(); i++) {
		if (donators[i].money >= 10000 && type == 1 || donators[i].money < 10000 && type == 2) {
			ofile << "Name: " << donators[i].name << " Money: " << donators[i].money << endl;
		}
	}
}

int main () {
	vector<org> donators;
	int n;
	string filename = "t_09.txt";
	ifstream ifile;
	ifile.open(filename);
	if (!ifile.is_open()) {
		exit(EXIT_FAILURE);
	}
	ifile >> n;
	donators.resize(n);
	int i = 0;
	while (ifile.good()) {
		ifile.get();
		getline(ifile, donators[i].name);
		ifile >> donators[i].money;
		i++;
	}
	ifile.close();
	ofstream ofile;
	ofile.open("t_09_result.txt");
	if (!ofile.is_open()) {
		exit(EXIT_FAILURE);
	}
	if (n == 0) {
		ofile << "none\n";
	} else {
		ofile << "-----Grand Patrons-----\n";
		printByType(ofile, donators, 1);
		ofile << "-----   Patrons   -----\n";
		printByType(ofile, donators, 2);
	}
	ofile.close();
	return 0;
}
