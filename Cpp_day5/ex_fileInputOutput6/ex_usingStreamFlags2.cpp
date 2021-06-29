#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout.setf(ios::scientific);
	cout << "....scientific format : " << 3141.59 << endl;
	cout.unsetf(ios::scientific); //지수형식

	cout.setf(ios::fixed);
	cout << "....with fixed point : " << 3141.59 << endl;
	cout.unsetf(ios::fixed); //특정한 지정없으면 뒤를 0으로 채움
	return 0;

}//main

	/*Results
...scientific format : 3.141590e+03
...with fixed point : 3141.590000*/