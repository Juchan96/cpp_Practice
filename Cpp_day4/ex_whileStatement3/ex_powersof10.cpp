#include <iostream>
using namespace std;

int main() {
	int power = 1;

	while (power <= 100000000) {
		cout << power << '\n';
		power *= 10;
	}
}