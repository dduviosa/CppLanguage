#include <iostream>
using namespace std;

int main() {

	int number;
	cout << "Enter a number between 0 ans 1000: ";
	cin >> number;

	int first = number % 10; //932Сп 2
	int second = number / 10 % 10; //93Сп 3
	int third = number / 10 / 10;

	int sum = first + second + third;
	cout << "The sum of the digits is " << sum << endl;
	return 0;
}