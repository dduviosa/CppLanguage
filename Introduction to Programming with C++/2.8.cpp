#include <iostream>
#include <ctime>
using namespace std;

int main() {
	int totalSeconds = time(0);

	int offSet;
	cout << "Enter the time zone offset to GMT: ";
	cin >> offSet;

	int currentSeconds = totalSeconds % 60;

	int totalMinutes = totalSeconds / 60;
	int cuurentMinutes = totalMinutes % 60;

	int totalHours = totalMinutes / 60;
	totalHours += offSet;

	int currentHours = totalHours % 24;

	cout << "The current time is " << currentHours << ":" << cuurentMinutes << ":" << currentSeconds << " GMT" << endl;
	return 0;
}