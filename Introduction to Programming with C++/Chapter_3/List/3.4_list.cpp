#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

	srand(time(0));
	int num1 = rand() % 10;
	int num2 = rand() % 10;

	if (num1 < num2)
	{
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}

	cout << "What is " << num1 << "-" << num2 << "?";
	int answer;
	cin >> answer;

	if (num1 - num2 == answer)
		cout << "You are correct!" << endl;
	else
		cout << "Your answer is wrong. " << num1 << " - " << num2 << " should be " << (num1 - num2) << endl;

	return 0;
}