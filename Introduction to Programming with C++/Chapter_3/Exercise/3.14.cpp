#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

	srand(time(0));

	int lottery[3];
	for (int i = 0; i < 3; i++)
		lottery[i] = rand() % 10;

	int guess[3];
	cout << "Enter the guess number about lottery.";
	cin >> guess[0] >> guess[1] >> guess[2];

	//상금 결정
	int matchCount = 0;

	for (int i = 0; i < 3; i++)
	{
		if (lottery[i] == guess[i])
			matchCount++;
	}
	
	if (matchCount == 3)
		cout << "Correct all number! %10,000" << endl;

	else if (guess[0] == lottery[0] || guess[0] == lottery[1] || guess[0] == lottery[2]
		|| guess[1] == lottery[0] || guess[1] == lottery[1] || guess[1] == lottery[2]
		|| guess[2] == lottery[0] || guess[2] == lottery[1] || guess[2] == lottery[2])
		cout << "Correct one number. $1,000" << endl;

	else if (matchCount == 1)
		cout << "Correct one number and seat. %3,000" << endl;

	else
		cout << "Sorry.." << endl;


	return 0;
}9