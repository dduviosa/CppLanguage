#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double yearlyInterestRate; //연간 이자율
	cout << "Enter yealy interestRate, for example 5:";
	cin >> yearlyInterestRate;

	double monthlyInterestRate = yearlyInterestRate / 12; //월 이자율

	double loan; //대출액
	cout << "Enter loan, for example 120000.95";
	cin >> loan;

	int numberOfYears; //갚아야 할 연수
	cout << "Enter numberOfYears for loan";
	cin >> numberOfYears;

	double monthlyPayment = (loan * monthlyInterestRate) / (1 - 1 / pow(1 + monthlyInterestRate, numberOfYears * 12));
	double totalPayment = monthlyPayment * numberOfYears * 12;

	monthlyPayment = static_cast<int>(monthlyPayment * 100) / 100.0;
	totalPayment = static_cast<int>(totalPayment * 100) / 100.0;

	return 0;
}