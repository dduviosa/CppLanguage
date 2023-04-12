#include <iostream>
using namespace std;

int main() {

	double subtotal, gratuityRate;
	cout << "Enter the subtotal and a gratuity rate: ";
	cin >> subtotal >> gratuityRate;

	double gratuity = gratuityRate / 10.0;
	double total = subtotal + gratuity;

	cout << "The gratuity is $" << gratuity << " and total is $" << total << endl;

	return 0;
}