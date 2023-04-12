#include <iostream>
using namespace std;

int main() {

	int year, month, dayAmount;

	cout << "Enter year and month: ";
	cin >> year >> month;

	//윤년인 지를 확인
	bool isLeapYear = false;

	if (year % 4 == 0)
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
				isLeapYear = true;
		}
		else 
			isLeapYear = true;

		

	switch (month)
	{
	case 1: 
	case 3: 
	case 5:
	case 7: 
	case 8:
	case 10:
	case 12: dayAmount = 31; break;

	case 4:
	case 6:
	case 9:
	case 11: dayAmount = 30; break;

	case 2: {
		if (isLeapYear = true)
			dayAmount = 29; 
		else
			dayAmount = 28;
		
		break;
	}
	default:
		break;

	}

	cout << year << "년 " << month << "월은 " << dayAmount << "일이다." << endl;

	return 0;
}