#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

void selectionSort(int* const, const int);
void swap(int* const, int* const);

int main() {
	const int arraySize = 10;
	int a[arraySize] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

	cout << "Data items in original order\n";

	for (int i = 0; i < arraySize; i++)
	{
		cout << setw(4) << a[i];
	}
	cout << endl;
	selectionSort(a, arraySize);

	cout << "\nData items in ascending order:\n";

	for (int i = 0; i < arraySize; i++)
	{
		cout << setw(4) << a[i];
	}
	cout << endl;

	return 0;
}

void selectionSort(int* const array, const int size) {
	int smallest; 

	for (int i = 0; i < size - 1; i++) {
		smallest = i; //first index of remanescent array 
		for (int index = i+ 1; index < size; index++)
		{
			if (array[index] < array[smallest])
				smallest = index;
		}
		cout << "swap " << array[i] << " at i: " << i << " for " << array[smallest] << " at " << smallest<<endl; //print to see the amount of loops 
		swap(&array[i], &array[smallest]);
	}
}

void swap(int* const element1Ptr, int* const elementPtr2) {
	int hold = *element1Ptr;
	*element1Ptr = *elementPtr2;
	*elementPtr2 = hold;
}