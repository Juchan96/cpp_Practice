#include <iostream>
using namespace  std;

int add(int x, int y) {  //add�� �Լ��� �ּڰ�

	return x + y;
}

int multiply(int x, int y) { //multiply�� �Լ��� �ּڰ�

	return x * y;
}

int evaluate(int(*f)(int,int),int x, int y) {  //int���� *f ����, *f�� �Լ��� �ּڰ� �޾ƿ�

	return f(x, y);
}//style ����


int main() {
	cout << add(2, 3) << '\n';
	cout << multiply(2, 3) << '\n';
	cout << evaluate(&add,2, 3) << '\n';
	cout << evaluate(&multiply, 2, 3) << '\n';

}//m