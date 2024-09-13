#include <iostream>

using std::cout;
using std::endl;
using std::cin;


inline double cube(const double side) {
	//side = 45; //<--- setting this variable is not allowed since side is a const parameter
	return side * side * side;
}


int main() {
	double side;
	cout << "Enter the side length of a cube: ";
	cin >> side;

	cout << "The volume of the cube with side " << side << " is: " << cube(side) << endl;
	return 0;
}
