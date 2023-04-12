#include <iostream>
using namespace std;

int main() {

	int status, income;

	cout << "Enter your status: ";
	cin >> status;

	cout << "Enter your income: ";
	cin >> income;

	double tax = 0;

	if (status == 0) {

		if (income <= 8350)
			tax = income * 0.10;
		else if (income <= 33950)
			tax = 8350 * 0.10 + (income - 8350) * 0.15;
		else if (income <= 82250)
			tax = 8350 * 0.10 + (33950 - 8350) * 0.15 + (income - 33950) * 0.25;
		else
			tax = 8350 * 0.10 + (33950 - 8350) * 0.15 + (82250 - 33950) * 0.25 + (income - 82250) * 0.28;
	}
	else if (status == 1) {
	}
	else if (status == 2) {

	}
	else if (status == 3) {
	}
	else  {
		cout << "Invalid." << endl;
	}

	cout << "Tax is " << static_cast<int>(tax * 100) / 100.0 << endl;

	return 0;
}