#include <iostream>
#include "Maximum.h"

using std::cout;
using std::endl;
using std::cin;


int main() {

	int int1, int2, int3;
	double d1, d2, d3; 
	char c1, c2, c3;
	float f1, f2, f3;

	cout << "Input three int values: ";
	cin >> int1 >> int2 >> int3;

	cout << "(Int)The maximum is: " << maximum(int1, int2, int3)<<endl;

	cout << endl << "Input three double values: ";
	cin >> d1 >> d2 >> d3;

	cout << "(Double)The maximum is: " << maximum(d1, d2, d3) << endl;

	cout << endl<<"Input three float values: ";
	cin >> f1 >> f2 >> f3;

	cout << "(Float)The maximum is: " << maximum(f1, f2, f3) << endl;

	cout << endl << "Input char float values: ";
	cin >> c1 >> c2 >> c3;

	cout << "(Char)The maximum is: " << maximum(c1, c2, c3) << endl;

	return 0;
}

