#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

#include <iomanip>
using std::setw;

void inline printArray(const int array[], int size, string message) {

	cout << message;

	for (int i = 0; i < size; i++)
	{
		cout << setw(4) << array[i];
	}
}

int main()
{
	const int arraySize = 10;
	int data[arraySize] = {34, 56, 4, 10, 77, 51, 93, 30, 5, 52};
	int insert;

	printArray(data, arraySize, "Unsroted array:\n");

	//insertion Ordering 
	for (int next = 1; next < arraySize; next++)
	{
		insert =  data[next];//keep the current element

		int moveItem = next;//get element current index

		//search the location to add the current element
		while ((moveItem > 0) && (data[moveItem - 1] > insert) )
		{
			data[moveItem] = data[moveItem - 1];//put the current element to the right
			moveItem--;
		}
		data[moveItem] = insert; //add saved element in the movedItem position


	printArray(data, arraySize, "\nSorted array:\n");
	
	return 0;
}

