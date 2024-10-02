#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <cctype>
using std::islower;
using std::toupper;

void convertToUpper(char*);

int main() {
	char phrase[] = "characters and $34.98";

	cout << "The phrase before conversion is: " << phrase<<endl;
	convertToUpper(phrase);
	cout << "The phrase after conversion is: " << phrase<<endl;
	return 0;
}

void convertToUpper(char* sPtr) {
	while (*sPtr != '\0')  //loop while is not EOF char
	{
		if (islower(*sPtr)) {
			*sPtr = toupper(*sPtr);
		}
		sPtr++;
	}
}