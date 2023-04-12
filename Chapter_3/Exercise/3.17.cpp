#include <iostream>
using namespace std;

int main() {

	int temperture, windSpeed;

	cout << "Enter the temperture and windSpeed.";
	cin >> temperture >> windSpeed;

	int windChill = 35.74 + 0.6215 * temperture - 35.75 * pow(windSpeed, 0.16) + 0.4275 * temperture * pow(windSpeed, 0.16);

	if (temperture <= 41 || temperture >= -58 || windSpeed >= 2)
		cout << "wind chill is" << windChill << endl;
	else
		cout << "Invalid" << endl;

	return 0;
}