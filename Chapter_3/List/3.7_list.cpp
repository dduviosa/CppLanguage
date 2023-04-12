#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

	srand(time(0));
	int lottery = rand() % 100;

	cout << "Enter your lottery";
	int guess;
	cin >> guess;

	int lottery1 = lottery / 10;
	int lottery2 = lottery / 10;

	int guess1 = guess / 10;
	int guess2 = guess / 10;

	if (guess == lottery)
		cout << "Correct!" << endl;
	else if (lottery1 == guess2 && lottery2 == guess1)
		cout << "Exact match." << endl;
	else if (lottery1 == guess1 || lottery1 == guess2 || lottery2 == guess1 && lottery2 == guess2)
		cout << "Match all digits." << endl;
	else
		cout << "No match." << endl;

	return 0;
}