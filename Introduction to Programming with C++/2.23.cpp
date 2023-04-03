#include <iostream>
using namespace std;

int main() {

	double investmentAmount, interestRate, numYear;

	cout << "Enter investment amount: ";
	cin >> investmentAmount;

	cout << "Enter annual interest rate in percentage: ";
	cin >> interestRate;

	cout << "Enter number of years: ";
	cin >> numYear;

	double value = investmentAmount * pow((1 + interestRate / 1200), (numYear * 12));

	cout << "Accumulated value is $" << value << endl;

	return 0;
}