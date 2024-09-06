#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int x = 5;
	int product = 5;
	int quocient = 5;

	product *= x++; //product = product * 5; post-increment 
	cout << "Value of product after calculation: " << product << endl; //product = 25
	cout << "Value of x after calculation: " << x << endl; // x= 6

	x = 5;
	quocient /= ++x; //quocient = quocient / 6; 5/6 = 0; pre-increment
	cout << "Value of quocient after calculation: " << quocient << endl; //quocient = 0 
	cout << "Value of x after calculation: " << x << endl; //x = 6

	return 0;
}
