#include <iostream>
using namespace std;

int main() {
	double tempPerFah, speedMileHour;

	cout << "Enter the temperture in Fahrenheit: ";
	cin >> tempPerFah;

	cout << "Enter the wind speed in miles per hour: ";
	cin >> speedMileHour;

	double chillIndex = 35.74 + 0.6215 * tempPerFah + ( - 35.75 + 0.4275 * tempPerFah)* pow(speedMileHour, 0.16);
	cout << "The wind chill index is " << chillIndex << endl;
	return 0;
}