#include <fstream>
#include <iostream>
using namespace std;

int main() {

	ofstream fsTemp;
	fsTemp.open("temp.txt");
	int a = 123;
	double b = 12.12345678;

	
	fsTemp.width(15);
	fsTemp << a << endl;
	fsTemp.fill('0');
	fsTemp.width(15);
	fsTemp.precision(6);
	
	fsTemp << b << endl;

	fsTemp.close(); //���� �ݱ�
	return 0; //�������� �Լ� ��������, �ش� �Լ� ��� ����
}