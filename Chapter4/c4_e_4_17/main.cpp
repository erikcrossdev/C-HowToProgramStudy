#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <cmath>

int main() {

	int number;
	int largest = INT_MAX; // Initialize to the largest possible integer value

	for (int i = 0; i < 10; i++) {
		cout << "Type a number: ";
		cin >> number;
		if (largest < number) {
			largest = number;
			cout << number << " is the largest until now!" << endl;
		}
	}
	cout << largest << " is the largest number!" << endl;

	return 0;
}