#include <iostream>
#include <limits>
using namespace std;

int main() {
	double number;
	cout << "Enter an amout in double, example 11.56: ";
	cin >> number;

	int cent = static_cast<int>(number * 100);
	int dollar = cent / 100;
	int cent = cent % 100;

	int quarter = cent / 25;
	int cent = cent % 25;

	int dime = cent / 10;
	int cent = cent % 10;

	int nickel = cent / 5;
	int cent = cent % 5;

	int penny = cent;

	cout << "dollars, quarters, dimes, nickels, pennys are " << endl;
	cout << dollar << quarter << dime << nickel << penny << endl;

	return 0;
}