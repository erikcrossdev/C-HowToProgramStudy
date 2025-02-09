#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::right;
//Create a pattern with loops
/*
**********
 *********
  ********
   *******
		******
		 *****
		  ****
		   ***
				**
				 *
*/

int main() {

	for (int i = 0; i <= 10; i++) {
		int cont = 1;
		while (cont - i <= 0) {
			cout << " ";
			cont++;
		}
		for (int j = 10; j > i; j--) {

			cout << right << "*";
		}
		cout << endl;
	}

	//or, there is a solution with just 2 loops
	for (int i = 0; i < 10; i++) {
		// Print spaces
		for (int j = 0; j < i; j++) {
			cout << " ";
		}

		// Print stars
		for (int j = 0; j < 10 - i; j++) {
			cout << "*";
		}

		cout << endl;  // Newline after each row
	}
	cout << endl;
	for (int i = 0; i < 10; i++) {
		// Loop to print both spaces and stars in a single inner loop
		for (int j = 0; j < 10; j++) {
			if (j < i)
				cout << " ";  // Print spaces
			else
				cout << "*";  // Print stars
		}
		cout << endl;  // Newline after each row
	}
	return 0;
}