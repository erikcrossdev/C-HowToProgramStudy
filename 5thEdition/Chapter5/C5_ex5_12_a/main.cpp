#include <iostream>

using std::cout;
using std::endl;
//Create a pattern with loops
/*
*
**
***
****
*****
******
*******
********
*********
**********
*/

int main() {

	for (int i = 1; i <= 10; i++) {
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	
	return 0;
}