#include<iostream>
#include<vector>
using namespace std;

int main() {

	//Declare a vector of ten numbers
	vector<double> vec(10);

	//Allow the user to populate the vector
	cout << "Please enter 10 numbers: ";
	for (double& elem : vec)    //���� ����� for��
		cin >> elem;

	//Print the vector's contents
	for (double elem : vec)
		cout << elem << '\n';

}//m