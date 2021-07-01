#include <iostream>
using namespace  std;

int add(int x, int y) {  //add는 함수의 주솟값

	return x + y;
}

int multiply(int x, int y) { //multiply는 함수의 주솟값

	return x * y;
}

int evaluate(int(*f)(int,int),int x, int y) {  //int형의 *f 선언, *f는 함수의 주솟값 받아옴

	return f(x, y);
}//style 숙지


int main() {
	cout << add(2, 3) << '\n';
	cout << multiply(2, 3) << '\n';
	cout << evaluate(&add,2, 3) << '\n';
	cout << evaluate(&multiply, 2, 3) << '\n';

}//m