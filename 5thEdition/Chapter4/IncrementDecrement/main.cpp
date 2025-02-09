
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {


	int c = 5;
	//pós-incremento 
	cout << "c++" << endl;
	cout << c << endl;//print 5
	cout << c++ << endl;//print 5, then increment
	cout << c << endl<<endl; //print 6


	c = 5;
	//pré-incremento 
	cout << "++c" << endl;
	cout << c << endl;//print 5
	cout << ++c << endl;//increment, then print 6
	cout << c << endl; //print 6

	return 0;
}