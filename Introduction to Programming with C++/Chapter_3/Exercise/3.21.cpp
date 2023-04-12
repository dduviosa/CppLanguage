#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

	srand(time(0));
	int cardNum = rand() % 52;

	cout << "The card you picked is";

	switch (cardNum / 13)
	{
	case 0:cout << "Ace of"; break;
	case 1:cout << "2 of"; break;
	case 2:cout << "3 of"; break;
	case 3:cout << "4 of"; break;
	case 4:cout << "5 of"; break;
	case 5:cout << "6 of"; break;
	case 6:cout << "7 of"; break;
	case 7:cout << "8 of"; break;
	case 8:cout << "9 of"; break;
	case 9:cout << "10 of"; break;
	case 10:cout << "Jack of"; break;
	case 11:cout << "Queen of"; break;
	case 12:cout << "King of"; break;
	default: break;
	}

	switch (cardNum / 13)
	{
	case 0:cout << "Club" << endl; break;
	case 1:cout << "Club" << endl; break;
	case 2:cout << "Club" << endl; break;
	case 3:cout << "Club" << endl; break;
	default: break;
	}



	return 0;
}