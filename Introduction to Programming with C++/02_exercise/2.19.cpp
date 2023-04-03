#include <iostream>
using namespace std;

int main() {
	double x1, y1, x2, y2, x3, y3;

	cout << "Enter three points for a triangle: ";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	double side1 = pow((x1 * x1 + y1 * y1), 0.5);
	double side2 = pow((x2 * x2 + y2 * y2), 0.5);
	double side3 = pow((x3 * x3 + y3 * y3), 0.5);

	double s = (side1 + side2 + side3) / 2;
	double area = pow(s * (s - side1) * (s - side2) * (s - side3), 0.5);

	cout << "The area of the triangle is " << area << endl;
	return 0;
}