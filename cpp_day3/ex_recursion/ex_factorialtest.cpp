#include <iostream>
using namespace std;

int factorial(int n) {
	if (n == 0)
		return 1;
	else
		return n * factorial(n - 1);
		

}

int main() {
	cout << "factorial " << "0! = " << factorial(0) << '\n';
	cout << "factorial " << "2! = " << factorial(2) << '\n';
	cout << "factorial " << "6! = " << factorial(6) << '\n';
	cout << "factorial " << "10! = " << factorial(10) << '\n';


}