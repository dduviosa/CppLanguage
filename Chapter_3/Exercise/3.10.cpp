#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

	srand(time(0));
	int num1 = rand() % 100;
	int num2 = rand() % 100;

	cout << "What is the answer of " << num1 << " + " << num2 << "? " << endl;
	int answer;
	cin >> answer;

	if (answer == num1 + num2)
		cout << "Correct!" << endl;
	else
		cout << "Wrong.." << endl;

	return 0;
}