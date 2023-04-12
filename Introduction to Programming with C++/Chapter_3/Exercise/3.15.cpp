#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() {

	int answerNum;
	string answerThing, comThing;

	cout << "scissor(0), rock(1), paper(2): ";
	cin >> answerNum;

	switch (answerNum)
	{
	case 0: answerThing = "scissor"; break;
	case 1: answerThing = "rock"; break;
	case 2: answerThing = "paper"; break;
	default: break;
	}

	srand(time(0));
	int comNum = rand() % 2;

	switch (comNum)
	{
	case 0: comThing = "scissor"; break;
	case 1: comThing = "rock"; break;
	case 2: comThing = "paper"; break;
	default: break;
	}

	if (answerNum = comNum) 
	{
		cout << "The computer is " << comThing << ". You are " << answerThing << " too. It is a draw." << endl;
	} 
	else if ((answerNum == 2 && comNum == 0) || (answerNum == 0 && comNum == 2))
	{
		if (answerNum == 2 && comNum == 0)
			cout << "The computer is " << comThing << ". You are " << answerThing << ". You won." << endl;
		else
			cout << "The computer is " << comThing << ". You are " << answerThing << ". You losed." << endl;
	}
	else if (answerNum > comNum)
	{
		cout << "The computer is " << comThing << ". You are " << answerThing << ". You losed." << endl;
	}
	else 
	{
		cout << "The computer is " << comThing << ". You are " << answerThing << ". You won." << endl;
	}
	


	return 0;
}