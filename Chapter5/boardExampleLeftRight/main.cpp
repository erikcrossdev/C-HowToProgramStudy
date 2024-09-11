#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::setw;
//create a board

int main() {

	char odd = 'x';
	char pair = ' ';

	for (int i = 0; i < 10; i++)
	{
		if (i % 2 ==0) {
			cout << setw(2);
		}
		for (int j = 0; j < 20; j++)
		{
			if (j % 2 == 0) {
				cout << pair;
			}
			else {
				cout << odd;
			}
		}
		cout << endl;
	}


	return 0;
}