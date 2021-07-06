#include <iostream>
#include <iomanip>
using namespace std;

const int ROWS = 3,
COLUMNS = 5;

using Matrix = double[ROWS][COLUMNS];

//Allow the user to enter the elements of a matrix
void populate_matrix(Matrix m) {
	cout << "Enter the " << ROWS << " rows of the matrix \n";
	for (int row = 0; row < ROWS; row++)
	{
		cout << "ROW #" << row << " (enter " << COLUMNS << "values) : ";
		for (int col = 0; col < COLUMNS; col++)
		{
			cin >> m[row][col];
		}
	}
}

//We declare m constant because printing a matrix should not change it.
void print_matrix(const Matrix m) {
	for (int row = 0; row < ROWS; row++)
	{
		for (int col = 0; col < COLUMNS; col++)
		{
			cout << setw(5) << m[row][col];
			
		}
		cout << '\n';
	}
}

int main() {
	// Declare the 2D array
	Matrix mat;
	// Populate the array
	populate_matrix(mat);
	//Print the array
	print_matrix(mat);
}