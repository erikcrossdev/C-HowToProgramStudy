#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <cmath>

int main() {

	int number;
	int smallest = INT_MAX; // Initialize to the largest possible integer value
	int largest = INT_MIN; // Initialize to the smallest possible integer value

	for (int i = 0; i < 10; i++) {
		cout << "Type a number: ";
		cin >> number;
		if (largest < number) {
			largest = number;
			cout << number << " is the largest until now!" << endl;
		}

		if (smallest > number) {
			smallest = number;
			cout << number << " is the smallest until now!" << endl;
		}
	}
	cout <<endl<<endl<< smallest << " is the smallest number!" << endl;
	cout << largest << " is the largest number!" << endl;

	return 0;
}