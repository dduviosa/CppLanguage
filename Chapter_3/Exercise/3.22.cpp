#include <iostream>
using namespace std;

int main() {

	double a, b, c, d, e, f, x, y;
	double x1, y1, x2, y2, x3, y3, x4, y4;

	cout << "Enter x and y of the four points: ";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

	a = y1 - y2;
	b = x2 - x1;
	e = x2 * y1 - x1 * y2;
	c = y3 - y4;
	d = x4 - x3;
	f = x4 * y3 - x3 * y4;

	double line1And2 = y2 - y1 / x2 - x1;
	double line3And4 = y4 - y3 / x4 - x3;

	if (line1And2 == line3And4)
		cout << "The two lines are parallel." << endl;
	else
		x = (e * d - b * f) / line1And2;
		y = (a * f - e * c) / line3And4;

		cout << "The intersecting point is at (" << x << ", " << y << ")" << endl;

	return 0;
}