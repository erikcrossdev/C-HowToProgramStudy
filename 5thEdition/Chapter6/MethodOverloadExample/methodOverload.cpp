#include <iostream>

using std::cout;
using std::endl;

inline int square(int x) {
	cout << "Square for integer: " << x << " is ";
	return x * x;
}

inline double square(double x) {
	cout << "Square for integer: " << x << " is ";
	return x * x;
}


int main() {

	cout << square(7)<<endl;
	cout << square(7.5) << endl;

	return 0;
}

