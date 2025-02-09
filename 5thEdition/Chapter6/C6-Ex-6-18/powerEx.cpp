#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;

inline unsigned int integerPower(int base, int exponent)
{
	unsigned int power = base;
	for (int i = 1; i < exponent; i++) {
		power *= base;
	}
	return power;
}

int main() {

	cout << "Power of 2^2 is: " << integerPower(2, 2) <<endl;
	cout << "Power of 3^2 is: " << integerPower(3, 2) <<endl;
	cout << "Power of 3^4 is: " << integerPower(3, 4) <<endl;
	cout << "Power of 3^3 is: " << integerPower(3, 3) <<endl;
	cout << "Power of 2^4 is: " << integerPower(2, 4) <<endl;
	cout << "Power of 2^5 is: " << integerPower(2, 5) <<endl;
	cout << "Power of 5^6 is: " << integerPower(5, 6) << endl;
	cout << "Power of 5^3 is: " << integerPower(5, 3) << endl;
	cout << "Power of 5^2 is: " << integerPower(5, 2) << endl;

	return 0;
}

