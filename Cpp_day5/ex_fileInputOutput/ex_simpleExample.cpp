#include <iostream>
#include <fstream>
using namespace std;

int main() {

	ofstream myfile; //이 형식으로 myfile 만듬
	myfile.open("example.txt"); //example.txt파일 열기 (없으면 생성)
	myfile << "Write this to a file.\n";
	myfile.close();
	return 0;

	//filestream을 썼기 때문에 콘솔창에는 아무것도 나타나지않는것임.
}