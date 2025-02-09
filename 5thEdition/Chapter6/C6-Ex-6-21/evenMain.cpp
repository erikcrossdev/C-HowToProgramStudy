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

bool isEven(int);


int main() {

	char cont = 'y';
	int number;
	bool oddOrEven;

	do {
	
		cout << "Input a number and lets check if is even or odd:";
		cin >> number;

		cout << boolalpha<< "Is even? " << isEven(number) << endl;


		cout << "Want to continue? (Y/N):";
		cin >> cont;
		
	} while (cont == 'y' || cont == 'Y');
	
	return 0;
}

bool isEven(int num)
{	
	return num % 2 == 0 ;
}

