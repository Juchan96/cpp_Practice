#include <iostream>
using namespace std;

int main() {

	int  x = 4;
	int* p;

	cout << endl << "address :" << &x << "value : " << x;
	cout << endl << "address :" << p << "value : " << *p;

	p = &x;

	cout << endl << "address :" << &x << "value : " << x;
	cout << endl << "address :" << p << "value : " << *p;

	*p = 7;

	cout << endl << "address :" << &x << "value : " << x;
	cout << endl << "address :" << p << "value : " << *p;

}