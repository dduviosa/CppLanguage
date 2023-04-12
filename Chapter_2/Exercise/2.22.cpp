#include <iostream>
using namespace std;

int main() {
	double balance, annualInterestRate;

	cout << "Enter balance and interest rate (e.g., 3 for 3%): ";
	cin >> balance >> annualInterestRate;

	double interest = balance * (annualInterestRate / 1200);
	cout << "The interest is " << interest << endl;

	return 0;
}