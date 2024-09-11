#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::right;
//Create a pattern with loops
/*
		 *
		***
	   *****
	  *******
	 *********
	***********
   *************
  ***************
 *****************
*******************
	  ******
	  ******
	  ******
*/

int main() {

	//or, there is a solution with just 2 loops
	for (int i = 10; i >= 1; i--) {
		for (int j = 1; j <= 20-i; j++) {
			if (j-i >=0)
				cout << "*";
			else
				cout << " ";
				
		}
		cout << endl;
	}
	for (int i = 1; i <= 3;i++) {
		for (int j = 1; j <= 12; j++)
		{
			if (j < 7 || j> 12) {
				cout << " ";
			}
			else
				cout<<"*";
		}
		cout << endl;
	}
	return 0;
}