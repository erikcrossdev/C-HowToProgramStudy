#include <iostream>
using std::cout;
using std::endl;


int main() {
	const int arraySize = 10;
	int n[arraySize] = { 87, 68, 94, 100, 83, 78, 85, 91, 76, 87 }; //initialize array with 10 elements
	int total = 0;

	for (int i = 0; i < arraySize; i++)
	{
		total += n[i];
	}
	cout << "Total sum of array elements: "<< total << endl;

	return 0;
}