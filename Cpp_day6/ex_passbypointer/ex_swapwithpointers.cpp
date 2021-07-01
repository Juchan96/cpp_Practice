#include <iostream>
using namespace  std;


void swap(int *a, int *b) { //주소를 pointer a,b 로 받음
	int temp = *a;

	cout << "a =" << a << "  *a = " << *a << "  b =" << b << "  *b = " << *b << '\n';

	*a = *b;
	*b = temp;

	cout << "a =" << a << "  *a = " << *a << "  b =" << b << "  *b = " << *b << '\n';
}


int main() {
	int var1 = 5, var2 = 19;

	cout << "var1 =  " << var1 << "  &var1 = "<< &var1 << ",  var2 =" << var2 << "  &var2 =" << &var2 << '\n';
	
	swap(&var1, &var2); //변수에 주솟값을 넘김 reference 아님

	cout << "var1 =  " << var1 << ",  var2 =" << var2 << '\n';

	

}