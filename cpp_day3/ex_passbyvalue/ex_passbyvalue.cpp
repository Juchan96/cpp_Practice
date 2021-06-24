#include <iostream>

using namespace std;

//increment(x)
//	Illustrates pss by value protocol.

void increment(int x) {
	cout << "Beginning execution of increment, x = " << x << '\n';
	x++; // Increment x
	cout << "Ending execution of increment, x = " << x << '\n';
	
}


int main() {
	int x = 5;
	cout << "Before increment, x = " << x << '\n';
	increment(x);
	cout << "After increment, x= " << x << '\n';
}