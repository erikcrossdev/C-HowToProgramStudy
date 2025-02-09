#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

void modifyArray(int [], int);
void modifyElement(int);

int main()
{
	const int arraySize = 5;
	int a[arraySize] = { 0, 1, 2, 3, 4 };

	cout << "Effects of passing entire array by reference:"
		<< "\n\nThe values of the original array are: \n";

	for (int i = 0; i < arraySize; i++)
	{
		cout << setw(3) << a[i];
	}

	cout << endl;

	modifyArray(a, arraySize);
	cout << "\nThe values of the modified array are:\n";

	for (int i = 0; i < arraySize; i++)
	{
		cout << setw(3) << a[i];
	}

	cout << "\nEffects of passing entire array element by value:"
		<< "\n\na[3]before modify element a[3]: "<<a[3]<<endl;

	modifyElement(a[3]);
	cout << "a[3] after modify element: " << a[3] << endl;

	return 0;
}

void modifyArray(int b[], int sizeOfArray) {
	for (int i = 0; i < sizeOfArray; i++)
	{
		b[i] *= 2;
	}
}

void modifyElement(int e) {
	cout << "Value of element in modifyElement: " << (e *= 2) << endl;
}