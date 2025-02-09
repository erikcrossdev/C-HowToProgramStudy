#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main() {
	//const int arraySize; //if a const is not initialized, you will have compile errors
	const int arraySize = 10;
	int n[arraySize]; //initialize array with 10 elements

	cout << "Element" << setw(13) << "Value" << endl;
	for (int i = 0; i < arraySize; i++)
	{
		n[i] = 2 + 2 * i;
		cout << setw(7) << i << setw(13) << n[i] << endl;
	}

	return 0;
}