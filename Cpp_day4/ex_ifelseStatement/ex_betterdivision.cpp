#include <iostream>
using namespace std;

int main() {
	double dividend, divisor;

	// Get two integers from the user
	cout << "Please enter two integers to divide:";
	cin >> dividend >> divisor;
	// If possible, divide them aand report the result
	if (divisor != 0)
		cout << dividend << "/" << divisor << "="
		<< dividend / divisor << '\n';

}