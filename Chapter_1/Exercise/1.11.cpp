#include <iostream>
using namespace std;

int main() {
	double presentPopulation = 312032486;
	double days = 365;
	double secondPerDay = 60 * 60 * 24.0;
	
	double birthPerSecond = 1.0 / 7;
	double deatPerSecond = 1.0 / 13;
	double immigrantPerSecond = 1.0 / 45;

	double changePerSecond = birthPerSecond - deatPerSecond + immigrantPerSecond;

	int pop01 = presentPopulation + changePerSecond * secondPerDay * days * 1;
	int pop02 = presentPopulation + changePerSecond * secondPerDay * days * 2;
	int pop03 = presentPopulation + changePerSecond * secondPerDay * days * 3;
	int pop04 = presentPopulation + changePerSecond * secondPerDay * days * 4;
	int pop05 = presentPopulation + changePerSecond * secondPerDay * days * 5;

	cout << "1년 후의 인구 수는 " << pop01 << endl;
	cout << "2년 후의 인구 수는 " << pop02 << endl;
	cout << "3년 후의 인구 수는 " << pop03 << endl;
	cout << "4년 후의 인구 수는 " << pop04 << endl;
	cout << "5년 후의 인구 수는 " << pop05 << endl;

	return 0;

	/*int present_population = 312032486;

	double birthPerSecond = 1.0 / 7;
	double deathPerSecond = 1.0 / 13;
	double immigrantPerSecond = 1.0 / 45;
	double changePop = birthPerSecond - deathPerSecond - immigrantPerSecond;
	double secondsPerDay = 24.0 * 60 * 60;
	double days = 365;


	int population_01 = present_population + days * secondsPerDay * changePop * 1;
	int population_02 = present_population + days * secondsPerDay * changePop * 2;
	int population_03 = present_population + days * secondsPerDay * changePop * 3;
	int population_04 = present_population + days * secondsPerDay * changePop * 4;
	int population_05 = present_population + days * secondsPerDay * changePop * 5;

	cout << "The population after one year is " << population_01 << endl;
	cout << "The population after two years is " << population_02 << endl;
	cout << "The population after three years is " << population_03 << endl;
	cout << "The population after four years is " << population_04 << endl;
	cout << "The population after five years is " << population_05 << endl;
	*/
}