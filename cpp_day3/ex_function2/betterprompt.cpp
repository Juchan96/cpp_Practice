#include <iostream>
using namespace std;
//Definition of the prompt function
int prompt() {
	int result;
	cout << "Please enter an integer value: ";
	cin >> result;
	return result;
}

int main() {
	int value1, value2, sum;
	cout << "This program adds together two integers.\n";
	value1 = prompt(); //Call the function
	value2 = prompt(); //Call the function again
	sum = value1 + value2;
	cout << value1 << "+" << value2 << "=" << sum << '\n';
}