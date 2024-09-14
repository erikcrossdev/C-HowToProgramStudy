#include <iostream>

using std::cout;
using std::endl;
#include <iomanip>

using std::setw;

unsigned long factorial(unsigned long);

int main() {

	for (int i = 0; i <= 10; i++)
	{
		cout << setw(2) << i << "! = " << factorial(i) << endl;
	}

	return 0;
}

unsigned long factorial(unsigned long number)
{
	unsigned long result = 1;
	for (unsigned long i = number; i >= 1; i--)
		result *= i;
	return result;
}

