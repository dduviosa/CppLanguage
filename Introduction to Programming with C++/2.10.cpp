#include <iostream>
using namespace std;

int main() {

	double waterKilo;
	cout << "Enter the amount of water in kilograms: ";
	cin >> waterKilo;

	double iniTem;
	cout << "Enter the initial temperture: ";
	cin >> iniTem;

	double finalTem;
	cout << "Enter the final temperture: ";
	cin >> finalTem;
	
	double value = waterKilo * (finalTem - iniTem) * 4184;
	cout << "Thr energy needed is " << value << endl;

	return 0;
}