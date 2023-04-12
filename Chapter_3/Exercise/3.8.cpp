#include <iostream>
using namespace std;

int main() {

	cout << "Enter dollar and penny: ";
	int dollar, penny;
	cin >> dollar >> penny;

	if (dollar > 1)
	{
		if (penny > 1)
			cout << dollar << " dollars and " << penny << " pennies" << endl;
		else
			cout << dollar << " dollars and " << penny << " penny" << endl;
	}
	else
	{
		if (penny > 1)
			cout << dollar << " dollar and " << penny << " pennies" << endl;
		else
			cout << dollar << " dollar and " << penny << " penny" << endl;
	}


	return 0;
}