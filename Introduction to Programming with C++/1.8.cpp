#include <iostream>
using namespace std;

int main() {
	double radius = 5.5;

	double perimeter = 2 * radius * 3.1415;
	double area = radius * radius * 3.1415;

	cout << "The radius of a circle: " << radius << endl;
	cout << "Perimeter of a circle is " << perimeter << endl;
	cout << "Area of a circle is " << area << endl;

	return 0;
}