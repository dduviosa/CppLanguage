#include <iostream>
using namespace std;

int main() {

	int big, normal, small;

	cout << "Enter the three int value: ";
	int value1, value2, value3;
	cin >> value1 >> value2 >> value3;

	if (value1 > value2) 
	{
		big = value1;
		normal = value2;

		if (value2 > value3)
			small = value3;
		else
		{
			normal = value3;
			small = value2;
		}
	}
	else if (value1 < value2)
	{
		big = value2;
		normal = value1;

		if (value1 > value3)
			small = value3;
		else
		{
			if (value2 > value3)
			{
				normal = value3;
				small = value1;
			}
			else
			{
				big = value3;
				normal = value2;
				small = value1;
			}
		}
	}
		
	cout << big << " > " << normal << " > " << small << endl;
	
	return 0;
}