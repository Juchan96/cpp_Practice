#include <iostream>
using namespace std;

void print(int a[], int n) {    //size() 못쓰므로 크기n값 직접 보내줘야함
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
		cout << '\n';
	
}

int sum(int a[], int n) {
	int result = 0;
	for (int i = 0; i < n; i++)
	{
		result += a[i];
	}
	return result;
}

int main() {

	int list[] = { 2,4,6,8 };
	print(list, 4);

	cout << sum(list, 4) << '\n';

}//m
