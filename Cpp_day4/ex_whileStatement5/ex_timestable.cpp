#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int size;
	cout << "table size" << '\n';
	cin >> size;
	
	int row = 1;

	while (row <= size) {
		
		int column = 1;

			while (column <= size) {
			int power = row * column;
			cout << setw(4) << power;
			column++;
		}
		cout << '\n';
		row++;
	}
}