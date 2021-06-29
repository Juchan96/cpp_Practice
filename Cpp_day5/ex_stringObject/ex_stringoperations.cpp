#include <iostream>
#include <string>

using namespace std;

int main() {
	//Declare a string object and initialize it
	string word = "Juchan";
	//Prints 6, since word contains six chracters
	cout << word.length() << '\n';
	//Prints "not empty", since word is not empty
	if (word.empty())
		cout << "empty\n";
	else
		cout << "not empty\n";
	// Makes word empty
	word.clear();
	// Prints "empty" , since word is now empty
	if (word.empty())
		cout << "empty\n";
	else
		cout << "not empty\n";
	// Assign a string  using operator = method
	word = "good";
	//Prints "good"
	cout << word << '\n';
	//Append another string using operator += method
	word += "-bye";
	//Prints "good-bye"
	cout << word << '\n';

	//Print first character using operator[] method
	cout << word[0] << '\n';
	//Print last character
	cout << word[word.length() - 1] << '\n';
	// Prints 'od-by' , the substring starting at index 2 of length 5
	cout << word.substr(2, 5);
	
	string first = "ABC", last = "XYZ";
	// Splice two strings with + operator
	cout << first + last << '\n';
	cout << "Compare" << first << " and ABC: ";
	if (first == "ABC")
		cout << "equal\n";
	else
		cout << "not equal\n";

	cout << first + last << '\n';
	cout << "Compare" << first << " and ABC: ";
	if (first == "XYZ")
		cout << "equal\n";
	else
		cout << "not equal\n";
}