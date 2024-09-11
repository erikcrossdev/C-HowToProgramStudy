#include <iostream>

using std::cout;
using std::endl;
//create a table with break.

int main() {

	int x;

	x = 1;
	while (x <= 20) 
	{
		cout << x;
		if (x % 5 == 0) {
			cout << endl;
		}
		else {
			cout << "\t";
		}
		x++;
	}


	return 0;
}