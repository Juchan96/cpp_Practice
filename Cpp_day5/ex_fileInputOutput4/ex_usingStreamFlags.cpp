#include <iostream>
using namespace std;

int main() {

	char aChar;

	//Read Characters
	cout << "Enter <Space z>	: ";
	cin >> aChar;
	cout << "Character read is	: " << aChar;
	cin.unsetf(ios::skipws);
	//cout  << aChar;
	cin >> aChar;
	cout << "\nCharacter read is	: " << (int)aChar;
	cout << "\nEnter <Space z> again";
	cin >> aChar;
	cout << "Character read is	: " << (int)aChar;
	cin >> aChar;
	cout << "\nCharacter read is	: " << (int)aChar;
	cin >> aChar;
	cout << "\nCharacter read is	: " << (int)aChar;
	return 0;

}