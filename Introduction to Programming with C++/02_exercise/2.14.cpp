#include <iostream>
using namespace std;

int main() {

	double weightForPound;
	cout << "Enter weight in pounds: ";
	cin >> weightForPound;

	double weightForKilo = weightForPound * 0.45359237;

	double heightForInche;
	cout << "Enter height in inches: ";
	cin >> heightForInche;

	double heightFormeter = heightForInche * 0.0254;

	double bmi = weightForKilo / heightFormeter * heightFormeter;

	cout << "BMI is " << bmi << endl;
	return 0;
}