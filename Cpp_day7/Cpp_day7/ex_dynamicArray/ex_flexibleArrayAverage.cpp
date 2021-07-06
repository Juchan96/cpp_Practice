#include <iostream>
using namespace std;

int main() {

	double sum = 0.0;
	double* numbers; //Note : number is a pointer, not an array
	int size; // Actual number of entries

	//Get effective size of the array
	cout << "Please enter number of values to process : ";
	cin >> size;

	if (size > 0){ // Nothing to do with no entries
		cout << "Please enter " << size << " numbers: ";
		
		//Allocate the exact size needed
		numbers = new double[size]; // Dynamically allocated array
		
									//Allow the user to enter in the values.
		for (int i = 0; i < size; i++) {
			cin >> numbers[i];
			sum += numbers[i];
		}
		cout << "The average of ";
		for (int i = 0; i < size; i++)
		
			cout << numbers[i] << ", ";
			//No comma following last element

		cout << numbers[size - 1] << " is" << sum / size << '\n';
		
		delete[] numbers; // Free up the space held by numbers

	}


}//m