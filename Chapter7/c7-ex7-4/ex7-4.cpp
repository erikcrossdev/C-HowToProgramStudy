#include <iostream>
#include<iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::setw;

int main() {
	int const arraySize = 3;
	int table[arraySize][arraySize];//nine elements array

	for (int i = 0; i < arraySize; i++)
	{
		for (int j = 0; j < arraySize; j++)
		{
			table[i][j] = i + j;
			cout << setw(3) << table[i][j];
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;
	int table1[arraySize][arraySize] = { {1,8}, {2,4,6}, {5} };
	cout << "     [0] [1] [2]" << endl;
	for (int i = 0; i < arraySize; i++)
	{
		cout << "[" << i << "]";
		for (int j = 0; j < arraySize; j++)
		{
			cout << setw(4) << table1[i][j];
		}
		cout << endl;
	}
	return 0;
}