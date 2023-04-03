#include <iostream>
using namespace std;

int main() {
	double distance, milePerGallon, pricePerGallon;

	cout << "Enter the driving distance: ";
	cin >> distance;

	cout << "Enter miles per gallon: ";
	cin >> milePerGallon;

	cout << "Enter price per gallon: ";
	cin >> pricePerGallon;


	double cost = distance / milePerGallon * pricePerGallon;

	cout << "The cost of driving is $" << cost << endl;
	return 0;
}