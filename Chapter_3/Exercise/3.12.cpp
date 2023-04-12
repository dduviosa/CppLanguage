#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
	cout << "Anticipate 0 or 1: ";
	int EstimatedValue;
	cin >> EstimatedValue;

	int answer = rand() % 2;

	if (answer == EstimatedValue)
		cout << "Correct!" << endl;
	else
		cout << "Wrong.." << endl;

	cout << "The answer is " << answer << endl;

	return 0;
}