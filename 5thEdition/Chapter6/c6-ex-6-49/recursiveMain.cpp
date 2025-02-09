#include <iostream>
using std::cin;
using std::cout;

int main() {
	//Well, this program just wait EOF in a recursive way... 
	//it will do nothing until the user type ctrl+ Z
	//also, it will print the characters typed converted to int ASCII table
	int c;
	if ((c = cin.get()) != EOF) {
		main();
		cout << c;
	}
	return 0;
}