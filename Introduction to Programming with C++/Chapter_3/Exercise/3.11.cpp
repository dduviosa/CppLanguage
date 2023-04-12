#include <iostream>
using namespace std;

int main() {

	double price;

	cout << "Enter weight of the package: ";
	double w;
	cin >> w;

	//선적 가격
	if (w > 0 && w <= 1)
		price = 3.5;
	else if (w <= 3)
		price = 5.5;
	else if (w <= 10)
		price = 8.5;
	else if (w <= 20)
		price = 10.5;

	if (w > 0 && w <= 20)
		cout << "price about the package is " << price << endl;
	else
		cout << "The package cannot be shipped." << endl;

	return 0;
}