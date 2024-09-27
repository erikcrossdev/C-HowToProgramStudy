#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include<cmath>
# define M_PI           3.14159265358979323846
using std::pow;

inline double circleArea(int radius) {
	return M_PI * pow(radius, 2);
}

int main() {
	double radius;
	cout << "Type the radius of a circle: ";
	cin >> radius;
	cout << "Area is: " << circleArea(radius);
	return 0;
}