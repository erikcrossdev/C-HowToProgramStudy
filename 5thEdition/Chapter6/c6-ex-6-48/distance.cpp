#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cmath>
using std::sqrt;

double distance(double, double, double, double);

int main() 
{
	double aX, aY, bX, bY;
	cout<< "Type (X,Y) value of Object 1:";
	cin >> aX >> aY;
	cout << "Type (X,Y) value of Object 2:";
	cin >> bX >> bY;

	cout << "The Distance between those Objects is: " << distance(aX, aY, bX, bY);
	return 0;
}

double distance(double x1, double y1, double x2, double y2) {
	double a = x1 - x2;
	double b = y1 - y2;

	return sqrt((a * a) + (b * b));
}