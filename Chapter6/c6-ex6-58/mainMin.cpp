#include <iostream>
using std::endl;
using std::cin;
using std::cout;

#include "Min.h"

int main() {
	int minInt1, minInt2;
	float minFloat1, minFloat2;
	double minDouble1, minDouble2;
	char minChar1, minChar2;

	cout << "Type 2 ints: ";
	cin >> minInt1 >> minInt2;
	cout << "Type 2 floats: ";
	cin >> minFloat1 >> minFloat2;
	cout << "Type 2 doubles: ";
	cin >> minDouble1 >> minDouble2;
	cout << "Type 2 chars: ";
	cin >> minChar1 >> minChar2;

	cout <<"Min Ints: "<< min(minInt1, minInt2) << endl;
	cout << "Min Floats: " << min(minFloat1, minFloat2) << endl;
	cout << "Min Doubles: " << min(minDouble1, minDouble2) << endl;
	cout << "Min Chars: " << min(minChar1, minChar2) << endl;

	cout << "Min int and float: " << (minInt1, minFloat1)<<endl;
	cout << "Min int and char: " << (minInt1, minChar2) << endl;

	return 0;
}