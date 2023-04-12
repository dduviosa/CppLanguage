#include <iostream>
using namespace std;

int main() {
	double weight, heightForFeet, heightForInches;
	;

	cout << "Enter weight in pounds : ";
	cin >> weight;

	cout << "Enter feet : ";
	cin >> heightForFeet;

	cout << "Enter inches : ";
	cin >> heightForInches;

	double height = heightForFeet * 12 + heightForInches;

	const double KILOGRAMS_PER_POUND = 0.45359237;
	const double METERS_PER_INCH = 0.0254;

	double weightInKilograms = weight * KILOGRAMS_PER_POUND;
	double heightInMeters = height * METERS_PER_INCH;
	double bmi = weightInKilograms / pow(heightInMeters, 2);

	cout << "BMI is " << bmi << endl;

	if (bmi < 18.5)
		cout << "Underweight" << endl;
	else if (bmi < 25)
		cout << "Normal" << endl;
	else if (bmi < 30)
		cout << "Overweight" << endl;
	else
		cout << "Obese" << endl;

	return 0;
}