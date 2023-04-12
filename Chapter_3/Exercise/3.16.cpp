#include <iostream>
using namespace std;

int main() {

	cout << "Enter three length fo the triangle";
	int a, b, c, perimeter;
	cin >> a >> b >> c;

	if (a + b < c || a + c < b || c + b < a)
		cout << "Invalid." << endl;
	else
		cout << "The perimeter is " << perimeter << endl;

	return 0;
}