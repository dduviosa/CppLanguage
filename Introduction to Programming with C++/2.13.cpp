#include <iostream>
using namespace std;

int main() {

	int monthlySaveMoney;
	cout << "Enter the monthly saving amount: ";
	cin >> monthlySaveMoney;
	
	double interestRate = 5;
	double prinAndinter = 1 + (interestRate / 100) / 12;

	double oneYearAfter = monthlySaveMoney * prinAndinter;
	double twoYearAfter = (monthlySaveMoney + oneYearAfter) * prinAndinter;
	double threeYearAfter = (monthlySaveMoney + twoYearAfter) * prinAndinter;
	double fourYearAfter = (monthlySaveMoney + threeYearAfter) * prinAndinter;
	double fiveYearAfter = (monthlySaveMoney + fourYearAfter) * prinAndinter;
	double sixthYearAfter = (monthlySaveMoney + fiveYearAfter) * prinAndinter;

	cout << "After the sixth month, the account value is $" << sixthYearAfter << endl;
	return 0;
}