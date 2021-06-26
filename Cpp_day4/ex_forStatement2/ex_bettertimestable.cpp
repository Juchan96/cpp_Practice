#include <iostream>
#include <iomanip>
using namespace std;


int main() {
	int size; //The number of rows and columns in the table
	cout << "Please enter the table size: ";
	cin >> size;
	//Print a size x size multiplication table

	// First, print heading
	cout << "     ";
	for (int column = 1; column <= size; column++)
	
		cout << setw(4) << column; //Print heading for this column.
	cout << '\n';
	//Print line separator
	cout << "    +";
	for (int column = 1; column <= size; column++)
		cout << "----";
	cout << '\n';
	//Print table contents
	for (int row = 1; row <= size; row++){
		
		cout << setw(4) << row << " l"; //Print row label
		for (int column = 1; column <= size; column++)
		{
			cout << setw(4) << row * column; //Display product
			cout << '\n';
		}

	}

}