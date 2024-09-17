#include <iostream>
using std::cout;
using std::endl;

void staticArrayInit(void);
void automaticArrayInit(void);

int main() 
{
	cout << "First call to each function:\n";
	staticArrayInit();
	automaticArrayInit();
	cout << "\n\nSecond call to each function:\n";
	staticArrayInit();
	automaticArrayInit();
	cout << endl;

	return 0;
}

void staticArrayInit(void) {
	static int array[3];

	cout << "\nValues on entering staticArrayInit:\n";

	for (int i = 0; i < 3; i++) 
	{
		cout << "array[" << i << "] = " << array[i] << " ";
	}
	cout << "\nValues on exiting staticArrayInit:\n";

	for (int i = 0; i < 3; i++)
	{
		cout << "array[" << i << "] = " << (array[i]+=5) << " ";
	}
}

void automaticArrayInit(void) {
	int array2[3] = { 1, 2, 3 };

	cout << "\nValues on entering automaticArrayInit:\n";

	for (int i = 0; i < 3; i++)
	{
		cout << "array[" << i << "] = " << array2[i] << " ";
	}
	cout << "\nValues on exiting automaticArrayInit:\n";

	for (int i = 0; i < 3; i++)
	{
		cout << "array2[" << i << "] = " << (array2[i] += 5) << " ";
	}
}