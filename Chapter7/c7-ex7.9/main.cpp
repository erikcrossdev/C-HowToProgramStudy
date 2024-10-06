#include <iostream>
#include <iomanip>
#include <algorithm>  // For std::copy
using std::cout;
using std::endl;
using std::cin;
using std::setw;

inline void showArray(const int array[][3], int size) {
	cout << "     [0] [1] [2]"<<endl;
	for (int i = 0; i < size; i++)
	{
		cout << "[" << i << "]";
		for (int j = 0; j < 3; j++)
		{
			//t[i][j] = i + j;
			cout << setw(4)<< array[i][j];
		}
		cout << endl;
	}
}
inline int sumElementsInACol(const int array[][3], int size, int colIndex) {
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += array[i][colIndex];
	}
	return sum;
}
int min(const int arr[][3], int);
void showOnlyOneRow(const int arr[][3], int, int);

int main() {
	//int t[2][3] = { {}, {5,0,5} };//7.9 - g) row 1 with zeros and col 2 with zeros
	int t[2][3] = { {}, {} }; //7.9 h) fill all elements with zero without a loop

	showArray(t, 2);
	cout << "Type a value to fill the bidimensional 2x3 array:";
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> t[i][j];
		}
	}

	cout << endl << "The minimum value of the array is: " << min(t, 2) << endl << endl;

	cout << endl << endl;
	showOnlyOneRow(t, 2, 0);
	cout << endl << endl;
	cout << "Sum of elements at col 3: " << sumElementsInACol(t, 2, 2);
	return 0;

}
int min(const int arr[][3], int size) {
	auto minElement = arr[0][0];
	for (int i = 1; i < size; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] < minElement) minElement = arr[i][j];
		}
	}
	return minElement;
}

void showOnlyOneRow(const int array[][3], int size, int rowIndex) {
	//7.9 l) show only elementos from row 0;

	for (int j = 0; j < 3; j++)
	{
		cout << array[rowIndex][j] << " ";
	}

}



