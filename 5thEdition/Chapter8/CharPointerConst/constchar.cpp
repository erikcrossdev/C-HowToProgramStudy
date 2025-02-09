#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <cctype>
using std::islower;
using std::toupper;

void printCharacters(const char*);

int main() {
	char phrase[] = "My characters in my char pointer array";

	cout << "The string is: " << phrase << endl;
	printCharacters(phrase);
	cout << endl;
	return 0;
}

void printCharacters(const char* sPtr) {
	for (; *sPtr != '\0' ; sPtr++)
	{
		cout << *sPtr; //print characters
	}
}