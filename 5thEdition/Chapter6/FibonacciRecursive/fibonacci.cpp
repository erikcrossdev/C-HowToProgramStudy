#include <iostream>

using std::cout;
using std::endl;
#include <iomanip>

using std::setw;

unsigned long fibonacci(unsigned long);
unsigned long fibonacciNonRecursive(unsigned long);

int main() {

	for (int i = 0; i <= 10; i++)
	{
		cout << setw(2) <<"Fibonacci(" << i << ") = " << fibonacci(i) << endl;
	}


	cout << "Fibonacci (20) =" << fibonacci(20) << endl;
	cout << "Fibonacci (30) =" << fibonacci(30) << endl;
	cout << "Fibonacci (35) =" << fibonacci(35) << endl;

	for (int i = 0; i <= 10; i++)
	{
		cout << setw(2) << "Fibonacci(" << i << ") = " << fibonacciNonRecursive(i) << endl;
	}

	return 0;
}

unsigned long fibonacci(unsigned long number)
{
	if (number == 0 || number == 1) //basic case
	{
		return number;
	}
	return fibonacci(number - 1) + fibonacci(number - 2);
}

unsigned long fibonacciNonRecursive(unsigned long number)
{
	if (number == 0) return 0;
	if (number == 1) return 1;

	unsigned long a = 0;
	unsigned long b = 1;
	unsigned long fib = 1;

	for (int i = 2; i <= number; i++) {
		fib = a + b;
		a = b;
		b = fib;
	}
	return fib;
}


