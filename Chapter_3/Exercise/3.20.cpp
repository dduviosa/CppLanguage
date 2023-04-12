#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

	int rec_x = 10, rec_y = 5;

	cout << "Enter x and y of the point:";
	int x, y;
	cin >> x >> y;

	if (x < rec_x && y < rec_y)
		cout << "(" << x << ", " << y << ") is in the rectangle." << endl;
	else
		cout << "(" << x << ", " << y << ") is not in the rectangle." << endl;

	return 0;
}