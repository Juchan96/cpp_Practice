#include<iostream>
using namespace std;

class Point
{
public:
	double x;
	double y;
};

int main() {

	Point pt1, pt2;
		pt1.x = 2.0;
		pt1.y = 8.5;
		pt2.x = 0.0;
		pt2.y = -1.5;

		cout << "pt1.x : " << pt1.x << '\n';
		cout << "pt1.y : " << pt1.y << '\n';
		cout << "pt2.x : " << pt2.x << '\n';
		cout << "pt2.y : " << pt2.y << '\n';

		pt1 = pt2;

		cout << "pt1.x : " << pt1.x << '\n';
		cout << "pt1.y : " << pt1.y << '\n';
		cout << "pt2.x : " << pt2.x << '\n';
		cout << "pt2.y : " << pt2.y << '\n';

}//m
