#include <iostream>
using namespace std;

int main() {
	double s;

	cout << "Enter the side: ";
	cin >> s;
	
	double area = (3 * pow(3, 0.5) / 2) * pow(s, 2);

	cout << "The area of the hexagon is " << area << endl;
	return 0;
}