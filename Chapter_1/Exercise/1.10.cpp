#include <iostream>
using namespace std;

int main() {
	double milePerKilometers = 1.6;
	double time = 45.5 * 60;
	double km_distance = 14.0;
	double mile_distance = km_distance / milePerKilometers;

	double averageSpeed = mile_distance / time;

	cout << "The average speed of miles per hour is " << averageSpeed << endl;

	return 0;
}