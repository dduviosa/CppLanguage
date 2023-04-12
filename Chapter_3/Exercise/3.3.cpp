#include <iostream>
using namespace std;

int main() {
	cout << "Enter a, b, c, d, e, f: ";
	double a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;

	double x = (e * d - b * f) / (a * d - b * c);
	double y = (a * f - e * c) / (a * d - b * c);

	e = a * x + b * y;
	f = c * x + d * y;

	if ((a * d - b * c) == 0)
		cout << "The equation has no solution." << endl;
	else
		cout << "x is " << x << " and y is " << y << endl;

	return 0;
}