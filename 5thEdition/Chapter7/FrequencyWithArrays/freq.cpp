#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;


int main() {
	const int arraySize = 6; 
	int frequency[arraySize] = { 0 }; 

	srand(time(0));
	cout << "Grade distribution: " << endl;

	for (int roll = 0; roll < 600000; roll++)
	{
		frequency[(1 + rand() % 6) - 1]++;
	}
	cout << "Face" << setw(13) << "Frequency" << endl;

	for (int face = 0; face < arraySize; face++)
	{
		cout << setw(4) << face +1 << setw(13) << frequency[face] << endl;
	}

	return 0;
}