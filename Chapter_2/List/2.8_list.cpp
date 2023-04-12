#include <iostream>
#include <limits>
using namespace std;

int main() {
	double fahrenheit;
	cout << "Enter a degree in Fahrenheit: ";
	cin >> fahrenheit;

	double celsius = (5.0 / 9) * (fahrenheit - 32);

	cout << "fahrenheit is " << fahrenheit << "and celsius is " << celsius << endl;
	return 0;
}