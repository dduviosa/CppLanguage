#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

	cout << "Enter x and y of the point:";
	int x, y;
	cin >> x >> y;

	int line = pow((x * x + y * y), 1 / 2);

	if (line < 10)
		cout << "(" << x << ", " << y << ") is in the circle." << endl;
	else
		cout << "(" << x << ", " << y << ") is not in the circle." << endl;

	return 0;
}