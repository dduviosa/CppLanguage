#include <iostream>
using namespace std;

int main() {

	double feet;
	cout << "Enter a value for feet: ";
	cin >> feet;

	double meter = 0.305 * feet;

	cout << feet << " feet is " << meter << " meters." << endl;

	return 0;
}