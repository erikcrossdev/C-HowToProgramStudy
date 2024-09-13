#include <iostream>

using std::cout;
using std::endl;


void Func1();
void Func2(void);


int main() {
	Func1();
	Func2();
	return 0;
}

void Func1() {
	cout << "Func1 takes no arguments!" << endl;
}
void Func2(void) {
	cout << "Func2 takes no arguments!" << endl;
}
