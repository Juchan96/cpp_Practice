#include <iostream>
using namespace std;

int main() {

	cout << "Default justification:   l";
	cout.width(10);
	cout << 12345 << "l\n";
	cout.setf(ios::left, ios::adjustfield);
	cout << "Left justification	  : l";
	cout.width(10);
	cout << 12345 << "l\n";

	cout.setf(ios::right, ios::adjustfield);
	cout << "Right justification	  : l";
	cout.width(10);
	cout << 12345 << "l\n";

	return 0;

}//m