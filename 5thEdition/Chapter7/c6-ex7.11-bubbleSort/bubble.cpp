#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::cin;
using std::vector;

void bubbleSort(int array[], int size);
void bubbleSortVector(vector<int>&); //Pass the reference

int main() {
	const int arraySize = 10;
	int array[arraySize] = { 3, 4, 1, 6, 8, 3, 5, 6, 2, 0 };
	vector<int> arrayVector = { 3, 4, 1, -1, 8, 19, 5, 6, 100, 0 };

	bubbleSort(array, arraySize);
	bubbleSortVector(arrayVector);

	for (int i = 0;i < arraySize;i++) {
		cout << array[i] << " ";
	}
	cout << endl;
	for (int i = 0;i < arrayVector.size();i++) {
		cout << arrayVector[i] << " ";
	}

	return 0;
}

void bubbleSort(int array[], int size) {
	int sizeArr = size;
	int temp;
	bool swapped = true;
	while (swapped) {
		swapped = false;
		for (int i = 0; i < sizeArr - 1;i++) {
			if (array[i] > array[i + 1]) {
				temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
				swapped = true;
			}
		}
	}
}
//If we pass by value, it will not affect the original vector!
void bubbleSortVector(vector<int>& vec) { //the reference of the vector needs to be passed, not its value
	int temp;
	bool swapped = true;
	while (swapped) {
		swapped = false;
		for (int i = 0; i < vec.size() -1; i++)
		{
			if (vec[i] > vec[i + 1]) {
				temp = vec[i + 1];
				vec[i + 1] = vec[i];
				vec[i] = temp;
				swapped = true;
			}
		}
	}
}