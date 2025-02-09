#include <iostream>

using std::cout;
using std::endl;
//using std::boolalpha;

int main() {

	cout << "Logical And (&&)"
		<< "\nfalse && false: " << (false && false)
		<< "\nfalse && true: " << (false && true)
		<< "\ntrue && false: " << (true && false)
		<< "\ntrue && true: " << (true && true) << "\n\n";

	cout << "Logical OR (||)"
		<< "\nfalse || false: " << (false || false)
		<< "\nfalse || true: " << (false || true)
		<< "\ntrue || false: " << (true || false)
		<< "\ntrue || true: " << (true || true) << "\n\n";

	cout << "Logical NOT (!)"
		<< "\n!false: " << (!false)
		<< "\n!true: " << (!true) << endl;

	
	return 0;
}