#include <iostream>
using std::cout;
using std::endl;

#include <cstring>
using std::strlen;

int main() {

	const char* string1 = "abcdefghikjlmnopqkrstuvwxyz";
	const char* string2 = "four";
	const char* string3 = "Boston";

	cout << "The length of \"" << string1 << "\" is: " << strlen(string1);
	cout << "\nThe length of \"" << string2 << "\" is: " << strlen(string2);
	cout << "\nThe length of \"" << string3 << "\" is: " << strlen(string3)<<endl;

	return 0;
}