#include <iostream>
#include <iomanip>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::pow;
using std::sqrt;
using std::fabs;
using std::boolalpha;

inline double hypotenuse (double a, double b)
{
	double h = sqrt(pow(a, 2) + pow(b, 2));
	return h;
}

inline bool checkRightTriangle(double a, double b, double c, double EPSILON = 1e-9) {
	// get the bigger side, it will be hypotenuse
	double hypotenuse = a, sideA = b, sideB = c;

	if (b > hypotenuse) {
		hypotenuse = b;
		sideA = a;
		sideB = c;
	}

	if (c > hypotenuse) {
		hypotenuse = c;
		sideA = a;
		sideB = b;
	}

	cout << "Side A: " << sideA << endl;
	cout << "Side B: " << sideB << endl;
	cout << " Bigger (hypotenuse?): " << hypotenuse << endl;
	double hyp = sqrt(pow(sideA, 2) + pow(sideB, 2));
	return fabs(hypotenuse - hyp) < EPSILON;
}


int main() {

	double a, b, hyp;

	cout << "Side A: " << 3.0 << " Side B: " << 4.0 << ": " << hypotenuse(3.0, 4.0) <<endl;
	cout << "Side A: " << 5.0 << " Side B: " << 12.0 << ": " << hypotenuse(5.0, 12.0) << endl;
	cout << "Side A: " << 8.0 << " Side B: " << 15.0 << ": " << hypotenuse(8.0, 15.0) << endl<<endl;
	
	cout << "Now, input the sides of a triangle and we will say if it is a right triangle: ";
	cin >> a >> b >> hyp;
	cout << "Triangle with sides " << a<<", " << b << ", " << hyp << " is a right traingle? " <<boolalpha<< checkRightTriangle(a, b, hyp);


	return 0;
}

