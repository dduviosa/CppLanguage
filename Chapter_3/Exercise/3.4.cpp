#include <iostream>
using namespace std;

int main() {
	cout << "Enter the temperture: ";
	int tem;
	cin >> tem;

	if (tem < 30)
		cout << "too cold" << endl;
	else if (tem > 100)
		cout << "too hot" << endl;
	else
		cout << "just right" << endl;

	return 0;
}