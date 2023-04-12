#include <iostream>
#include <string>
using namespace std;

int main() {

	int day, todayNum, elapsedNum, futureDayNum;
	string dayName, futureDay;

	cout << "Enter today's day: ";
	cin >> todayNum;

	cout << "Enter the number of days elapsed since today: ";
	cin >> elapsedNum;


	futureDayNum = (todayNum + elapsedNum) % 7;


	switch (todayNum)
	{
	case 0:
		dayName = "Sunday"; break;
	case 1:
		dayName = "Munday"; break;
	case 2:
		dayName = "Tuesday"; break;
	case 3:
		dayName = "Wednesday"; break;
	case 4:
		dayName = "Thursday"; break;
	case 5:
		dayName = "Friday"; break;
	case 6:
		dayName = "Saturday"; break;
	default:
		break;
	}

	switch (futureDayNum)
	{
	case 0:
		futureDay = "Sunday"; break;
	case 1:
		futureDay = "Munday"; break;
	case 2:
		futureDay = "Tuesday"; break;
	case 3:
		futureDay = "Wednesday"; break;
	case 4:
		futureDay = "Thursday"; break;
	case 5:
		futureDay = "Friday"; break;
	case 6:
		futureDay = "Saturday"; break;
	default:
		break;
	}

	cout << "Today is " << dayName << "and the future elapsed since today is " << futureDay << endl;


	return 0;
}