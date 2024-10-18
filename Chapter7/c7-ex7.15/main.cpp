#include <iostream>
using std::cout;
using std::cin;
using std::endl;

bool isBetween(int, int, int);

int* addElementToArray(int*, int, int);

int main() {
	int *array= new int[1]; //best case the user repeat all 20 elements

	int addedNumbers = 0;
	int limit = 20;
	int minRange = 10; 
	int maxRange = 100;

	int number;

	for (int i = 0; i < limit; i++) {
		cout << "Type a number between 10 and 100: ";
		cin >> number;
		if (addedNumbers == 0) {
			array[0] = number;
		}
		if (isBetween(number, minRange, maxRange)) {
			bool found = false;
			for (int j = 0; j < addedNumbers; j++) {
				if (number == array[j] ) {
					found = true;
					break;
				}
			}
			if (!found) {
				array = addElementToArray(array, addedNumbers, number);
				//Here I want to increase the size of my array, add "number" to the end of it
				addedNumbers++;
			}
		}
		else {
			cout << "Number should be between 10 and 100!" << endl;
			i--; //decrease i to not count this iteration
		}
	}
	cout << "Show array: ";
	for (int i = 0; i < addedNumbers;i++) {
		cout << array[i] << " ";
	}

	return 0;
}
bool isBetween(int val, int min, int max) {
	return val <= max && val >= min;
}
int* addElementToArray(int* oldArray, int currentSize, int newElement) {
	int* newArray = new int[currentSize + 1];//allocate new array

	//coppy array
	for (int i = 0;i < currentSize;i++) {
		newArray[i] = oldArray[i];
	}

	newArray[currentSize] = newElement;//add new element to the array

	delete[] oldArray; //delete old array

	return newArray;
}