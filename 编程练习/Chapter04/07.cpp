#include <iostream>
using namespace std;

struct Pizza {
	string name;
	double diameter;
	double weight;
}; 

int main () {
	cout << "--Pizza--\n";
	Pizza pizza;
	cout << "Name: ";
	cin >> pizza.name;
	cout << "Diameter: ";
	cin >> pizza.diameter;
	cout << "Weight: ";
	cin >> pizza.weight;
	cout << "The Infomation of Pizza: \n";
	cout << "Name: " << pizza.name << endl;
	cout << "Diameter: " << pizza.diameter << endl;
	cout << "Weight: " << pizza.weight << endl;
	return 0;
}
