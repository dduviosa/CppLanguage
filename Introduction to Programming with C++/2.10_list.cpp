#include <iostream>
#include <limits>
using namespace std;

int main() {
	double purchaseAmount;
	cout << "Enter purchase amout: ";
	cin >> purchaseAmount;

	// tax * 100 = 1185.3
	// static_cast<int>�� int������ ����ȯ�̹Ƿ� �Ҽ��� �� �����ϰ� 1185
	double tax = purchaseAmount * 0.06;
	cout << "Sale tax is " << static_cast<int>(tax * 100) / 100.0;

	return 0;
}