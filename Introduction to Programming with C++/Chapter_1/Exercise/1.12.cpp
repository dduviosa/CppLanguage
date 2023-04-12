#include <iostream>
using namespace std;

int main() {
	double milePerKilometers = 1.6;
	double hour = 40.35 * 60;
	double mile_distance = 24.0;
	double km_distance = mile_distance * milePerKilometers;

	double averageSpeed = km_distance / hour;

	cout << "The average speed of miles per hour is " << averageSpeed << endl;

	return 0;
}


