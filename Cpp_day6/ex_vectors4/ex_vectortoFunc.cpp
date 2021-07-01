#include<iostream>
#include<vector>
using namespace std;

//벡터를 인수로

void print(vector<int>v) {
	for (int elem : v)
		cout << elem << " ";
	cout << '\n';
}

int sum(vector<int> v) {
	int  sum1 = 0;
	for (int elem : v)
		sum1 += elem;
	return sum1;

}

int main() {
	vector<int> list{ 2,4,6,8 };
	print(list);
	//Compute and display sum
	cout << sum(list) << '\n';
	//Zero out all the elements of list
	int n = list.size();
	for (int i = 0; i < n; i++)
	{
		list[i] = 0;
	}
	print(list);
	cout << sum(list) << '\n';

}