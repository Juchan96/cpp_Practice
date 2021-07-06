#include <iostream>
using namespace std;

bool find_char(const char* s, char ch) {
	while (*s != '\0') //Scan until we see the null chararacter
	{
		if (*s == ch)
			return true; //Found the matching character
		s++; // Advance to the next position within the string
	}
	return false;
}

int main() {
	const char* phrase = "this is a phrase";
	//Try all the characters a through z
	for (char ch = 'a'; ch < 'z'; ch++)
	{
		cout << '\'' << ch << '\'' << " is ";
		if (!find_char(phrase, ch))
			cout << "NOT";
		cout << "in " << '\"' << phrase << '\"' << '\n';

	}


}//m