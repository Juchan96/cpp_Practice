#include <iostream>
using namespace  std;

int add(int a, int b) {  //add�� �Լ��� �ּڰ�

	return a + b;
}


int main() {

	int (*pf)(int, int) = add;

	cout << "pf(2, 3) = " << pf(1,2)  << '\n';
	cout << "sum(int, int) = " << add(1, 2) << '\n';
	cout << "pf address = " << pf << '\n';
	cout << "sum address = " << add << '\n';

}//m