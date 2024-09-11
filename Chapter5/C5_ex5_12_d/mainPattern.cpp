#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::right;
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

	for (int i = 10; i >= 1; i--) {
		for (int j = 1; j <= 10; j++) {
			if (j < i)
				cout << " ";
			else
				cout << "*";
		}
		cout << endl;
	}
	return 0;
}