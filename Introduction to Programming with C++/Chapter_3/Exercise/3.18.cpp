#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

	srand(time(0));
	int num1 = rand() % 100;
	int num2 = rand() % 100;
	int num3 = rand() % 100;

	cout << "What is the answer \"" << num1 << "+" << num2 << "+" << num3 << "\" ?" << endl;

	cout << "Enter the answer:";
	int answer;
	cin >> answer;

	if (answer == num1 + num2 + num3)
		cout << "Correct!" << endl;
	else
		cout << "Wrong.. The answer is " << (num1 + num2 + num3) << endl;

	return 0;
}