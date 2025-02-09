#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::setprecision;
using std::fixed;
using std::left;
using std::right;
using std::setw;
//set precision example

int main() {

	double value = 333.546372;

	cout << fixed << left
	<< setprecision(1)  <<setw(15) << value
	<< setprecision(2)  << setw(15) << value
	<< setprecision(3) << setw(15) << value <<endl;

	cout << fixed << right
		<< setprecision(4) << setw(15) << value
		<< setprecision(5) << setw(15) << value
		<< setprecision(6) << setw(15) << value << endl;

	return 0;
}