#include <iostream>
#include <fstream>
using namespace std;

int main() {

	ofstream myfile; //�� �������� myfile ����
	myfile.open("example.txt"); //example.txt���� ���� (������ ����)
	myfile << "Write this to a file.\n";
	myfile.close();
	return 0;

	//filestream�� ��� ������ �ܼ�â���� �ƹ��͵� ��Ÿ�����ʴ°���.
}