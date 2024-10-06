#include <iostream>
#include <iomanip>
#include <algorithm>  // For std::copy
using std::cout;
using std::endl;
using std::setw;

float min(const float[], int);
float max(const float[], int);

int main() {
	int arraySize = 9;
	float w[9] = { 12.1, 23.2, 34.3, 45.4, 56.5, 67.6, 78.7, 89.8, 90.9 };

	for (int i = 0; i < arraySize; i++)
	{
		cout << w[i] << setw(3);
		if ((i+1) % 3 == 0) cout << endl;
	}
	
	auto minVal = min(w, arraySize);
	auto maxVal = max(w, arraySize);
	cout << "Minimum value is: " << minVal << endl;
	cout << "Maximum value is: " << maxVal << endl;

	return 0;
}

float min(const float arr[], int size) {
	auto minElement = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] < minElement) minElement = arr[i];
	}
	return minElement;
}

float max(const float arr[], int size) {
	auto maxElement = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > maxElement) maxElement = arr[i];
	}
	return maxElement;
}