#include <iostream>
using namespace std;

int main() {

	int currentPopulation = 312032486;
	int days = 365;

	int numYear;
	cout << "Enter the number of years: ";
	cin >> numYear;

	double birthPerSecond = 1.0 / 7;
	double deathPerSecond = 1.0 / 13;
	double immigrationPerSecond = 1.0 / 45;

	double changePopPerDay = (birthPerSecond - deathPerSecond + immigrationPerSecond) * 60 * 60 * 24.0;

	int popSum = static_cast<int>(currentPopulation + changePopPerDay * days * numYear);

	cout << "The population in " << numYear << " years is " << popSum << endl;

	return 0;
}