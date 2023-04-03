#include <iostream>
using namespace std;

int main() {
	double num1, num2, num3;
	cout << "Enter three number: ";
	cin >> num1 >> num2 >> num3;

	double average = (num1 + num2 + num3) / 3;

	cout << "The average of " << num1 << " " << num2 << " " << num3 << "is" << average << endl;

	return 0;
}