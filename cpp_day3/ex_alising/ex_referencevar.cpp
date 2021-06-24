#include <iostream>
using namespace std;

int main() {
	int x = 5;
	int y = x;
	int& r = x;

	cout << "x = " << x << '\n';
	cout << "y = " << y << '\n';
	cout << "r = " << r << '\n';
	
	cout << "Assgin 7 to x\n";
	x = 7;
	cout << "x = " << x << '\n';
	cout << "y = " << y << '\n';
	cout << "r = " << r << '\n';
	
	cout << "Assgin 8 to x\n";
	y = 8;
	cout << "x = " << x << '\n';
	cout << "y = " << y << '\n';
	cout << "r = " << r << '\n';
	
	cout << "Assgin 2 to x\n";
	r = 2; 
	cout << "x = " << x << '\n';
	cout << "y = " << y << '\n';
	cout << "r = " << r << '\n';

}