#include <iostream>
using namespace std;

int main() {

	int numMinutes;
	cout << "Enter the number of minutes: ";
	cin >> numMinutes;

	int totalDay = static_cast<int>(numMinutes / (60 * 24));

	int year = totalDay / 365;
	int day = static_cast<int>(totalDay % 365);
	
	cout << numMinutes << " minutes is approximately " << year << " years and " << day << " days." << endl;

	return 0;
}