#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int powerRecursive(int, int);

int main() {
	int exponent;
	int base;

	cout << "Type a base: ";
	cin >> base;
	cout << "Type an exponent: ";
	cin >> exponent;

	cout << "Result is: " << powerRecursive(base, exponent);
	return 0;
}

int powerRecursive(int base, int  exponent) {
	
	if ((exponent) == 0) return 1;

	return (base) * powerRecursive(base, exponent - 1);

}