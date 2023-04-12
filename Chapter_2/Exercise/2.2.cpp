#include <iostream>
using namespace std;

int main() {

	const int PI = 3.1415;

	double radius, length;
	cout << "Enter the radius and length of a cylinder: ";
	cin >> radius >> length;

	double area = radius * radius * PI;
	double volume = area * length;

	cout << "The area is " << area << endl;
	cout << "The volume is " << volume << endl;


	return 0;
}