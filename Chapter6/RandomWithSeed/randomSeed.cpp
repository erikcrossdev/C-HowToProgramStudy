#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

#include <cstdlib> //contains the definition of rand
using std::rand;
using std::srand;

#include <ctime>
using std::time;

int main() {
	srand(time(0));

	for (int counter = 1; counter <= 20; counter++) {
		cout << setw(10) << (1 + rand() % 6);

		if (counter % 5 == 0) {
			cout << endl;
		}
	}
	return 0;
}