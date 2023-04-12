#include <iostream>
using namespace std;

int main() {

	cout << "enter a, b, c.";
	int a, b, c;
	cin >> a >> b >> c;

	double discrimianant = b * b - 4 * a * c;
	double value1 = (- b + pow(discrimianant, 1 / 2)) / 2 * a;
	double value2 = (- b - pow(discrimianant, 1 / 2)) / 2 * a;

	if (discrimianant > 0)
		cout << "The root are " << value1 << " and " << value2 << endl;
	else if (discrimianant == 0)
		cout << "The root are " << value1 << endl;
	else
		cout << "The equation has no real roots" << endl;

	return 0;
}