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
	if (number <= 1) //basic case
	{
		return 1;
	}
	return number * factorial(number - 1);
}

