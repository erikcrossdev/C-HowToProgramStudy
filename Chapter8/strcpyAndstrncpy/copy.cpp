#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cstring>
using std::strcpy;
using std::strncpy;

int main() {
	char x[] = "Happy Birthday to You";
	char y[25];
	char z[15];

	strcpy(y, x); //copy x to y

	cout << "The string in array x is: " << x << "\nThe string in array y is" << y << "\n";

	strncpy(z, x, 14);

	z[14] = '\0'; //add EOF char
	cout << "The string in array z is: " << z << endl;

	return 0;
}