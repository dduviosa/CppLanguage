#include <iostream>
using namespace std;

int main() {

	double pound;
	cout << "Enter a number in pounds: ";
	cin >> pound;

	double kilogram = pound * 0.454;
	cout << pound << " pounds is " << kilogram << " kilograms." << endl;

	return 0;
}