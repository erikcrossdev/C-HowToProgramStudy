#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;


void printArray(const int[][3], string);

int main()
{
	int array1[2][3] = { {1, 2, 3}, {4, 5, 6} };
	int array2[2][3] = { 1,2,3,4,5 };
	int array3[2][3] = { {1, 2} , {4} };

	printArray(array1, "Values in array1 by row are: ");
	printArray(array2, "Values in array2 by row are: ");
	printArray(array3, "Values in array3 by row are: ");
	return 0;
}

void printArray(const int a[][3], string message) 
{
	cout << message << endl;
	for (int i = 0; i < 2; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

