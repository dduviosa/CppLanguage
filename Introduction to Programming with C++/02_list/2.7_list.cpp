#include <iostream>
#include <limits>
using namespace std;

int main() {
	int seconds;

	cout << "Enter an integer for seconds: ";
	cin >> seconds;

	int minutes = seconds / 60;
	int remaining = seconds % 60;
	cout << seconds << "seconds is " << minutes << "minutes and " << remaining << "seconds" << endl;
	return 0;
}