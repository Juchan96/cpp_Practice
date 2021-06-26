#include <iostream>
using namespace std;

int main() {
	int value;
	cout << "Please enter an integer in the range 0~5"<< '\n';
	cin >> value;
	switch (value)
	{ case 0:
		cout << "zero";
		break;
	case 1:
	case 6: //Trap card
		cout << "one";
		break;
	case 2:
		cout << "two";
		break;
	case 3:
		cout << "three";
		break;
	case 4:
		cout << "four";
		break;
	case 5:
		cout << "five";
		break;

	default:
		if (value < 0)
			cout << "Too small";
		else
			cout << "Too large";
		break;
	}
	
}