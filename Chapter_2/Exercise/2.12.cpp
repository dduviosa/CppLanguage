#include <iostream>
using namespace std;

int main() {

	double speed, acceleration;
	cout << "Enter speed and acceleration: ";
	cin >> speed >> acceleration;

	double length = speed * speed / (2 * acceleration);

	cout << "The minimum runway length for this airplane is " << length << endl;

	return 0;
}