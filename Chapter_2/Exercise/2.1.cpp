#include <iostream>
using namespace std;

int main() {
	double celsius;
	cout << "Enter a degree in Celsius ";
	cin >> celsius;

	double fahrenheit = (9 / 5) * celsius + 32;

	cout << fahrenheit << " Celsius is " << fahrenheit << " Fahrenheit" << endl;

	return 0;
}