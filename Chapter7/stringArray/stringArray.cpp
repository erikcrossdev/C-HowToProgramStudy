#include <iostream>
using std::cout;
using std::endl;
using std::cin;



int main() {
	char string1[20];
	char string2[] = "string literal";

	cout << "Enter the string \"hello there\":";
	cin >> string1;
	
	cout << "string1 is: " << string1 << "\nstring2 is " << string2;

	cout << "\nstring 1 with space between characters is:\n";

	for (int i = 0; string1[i]!='\0'; i++)
	{
		cout << string1[i] << ' ';
	}

	cin >> string1;
	cout << "\nstring1 is: " << string1 << endl;

	return 0;
}