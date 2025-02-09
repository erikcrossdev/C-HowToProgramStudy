#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

	int num1, num2, num3, greater, lesser;

	cout << "Type the first number: ";
	cin >> num1;

	greater = num1;
	lesser = num1;

	cout << "Type the second number: ";
	cin >> num2;

	if (greater < num2) greater = num2;
	if (lesser > num2) 	lesser = num2;
	
	cout << "Type the third number: ";
	cin >> num3;

	if (greater < num3) greater = num3;
	if (lesser > num3) 	lesser = num3;

	cout << "Soma: " << num1 + num2 + num3 << endl;
	cout << "Produto: " << num1 * num2 * num3 << endl;
	cout << "Media: " << (num1 + num2 + num3)/3 << endl;
	cout << "Maior: " << greater << endl;
	cout << "Menor: " << lesser << endl;

	return 0;
}