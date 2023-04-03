#include <iostream>
#include <limits>
using namespace std;

int main() {
	int totalSeconds = time(0);
	int currentSeconds = totalSeconds % 60;
	int totalMinutes = totalSeconds / 60;
	int currentMinutes = totalMinutes % 60;
	int totalHours = totalMinutes / 60;
	int currentHour = totalMinutes % 60;

	cout << "Current time is " << currentHour << ":" << currentMinutes << ":" << currentSeconds << endl;

	return 0;
}