#include <iostream>
using namespace std;

int main() {

	int a[] = { 2,4,6,8,10,12,14,16,18,20 }, * begin, * end, * cursor;

	begin = a; // begin points to the first element of array a
	end = a + 10; //end points to just after the last element --> end point

	// Print out the contents of the array
	cursor = begin;
	while (cursor != end)
	{
		cout << *cursor << ' '; // Print the element
		cursor++; // Increment cursor so it points to the next element
	}

}//m