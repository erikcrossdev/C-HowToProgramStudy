#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::cin;
using std::vector;

void bubbleSort(int array[], int size);
void anotherBubbleSort(int array[], int size);
void bubbleSortVector(vector<int>&); //Pass the reference

int main() {
	const int arraySize = 10;
	int array[arraySize] = { 3, 4, 1, 6, 8, 3, 5, 6, 2, 0 };
	vector<int> arrayVector = { 3, 4, 1, -1, 8, 19, 5, 6, 100, 0 };

	bubbleSort(array, arraySize);
	bubbleSortVector(arrayVector);

	for (int i = 0;i < arraySize;i++) {
		cout << array[i] << " ";
	}
	cout << endl;
	for (int i = 0;i < arrayVector.size();i++) {
		cout << arrayVector[i] << " ";
	}

	return 0;
}

void bubbleSort(int array[], int sizeArr) {
	int temp;
	bool swapped = true;
	int index;
	int tempGreatest;
	int loops = 0;
	int size = sizeArr - 1;
	while (swapped) {
		swapped = false;
		int Greatest = array[0];
		for (int i = 0; i < size;i++) {
			if (array[i] > array[i + 1]) {
				temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
				swapped = true;
			}
			if (!swapped) {
				cout << "Array should be ordered" << endl;
				return;
			}
			if (Greatest < array[i]) {
				Greatest = array[i];
				index = i;
			}
			loops++;
			cout << "loops: " << loops << endl;
		}
		size--;
		if (index != size) {
			tempGreatest = array[size];
			array[size] = Greatest;
			array[index] = tempGreatest;
		}
	}
}

void anotherBubbleSort(int array[], int sizeArr) {
	int temp;
	bool swapped = true;
	int loops = 0;
	int lastSwapIndex = sizeArr - 1; // Última posição onde houve troca

	while (swapped) {
		swapped = false;
		int newLastSwapIndex = 0; // Para rastrear até onde precisa comparar

		// Itera até a última posição onde ocorreu uma troca
		for (int i = 0; i < lastSwapIndex; i++) {
			if (array[i] > array[i + 1]) {
				// Troca os elementos se estiverem fora de ordem
				temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
				swapped = true;
				newLastSwapIndex = i; // Atualiza a última posição de troca
				if (!swapped) {
					cout << "Array should be ordered" << endl;
					return;
				}
			}

			loops++;
			cout << "loops: " << loops << endl;
		}

		// Atualiza o último índice de comparação para a próxima iteração
		lastSwapIndex = newLastSwapIndex;
	}
}
//If we pass by value, it will not affect the original vector!
void bubbleSortVector(vector<int>& vec) { //the reference of the vector needs to be passed, not its value
	int temp;
	bool swapped = true;
	while (swapped) {
		swapped = false;
		for (int i = 0; i < vec.size() - 1; i++)
		{
			if (vec[i] > vec[i + 1]) {
				temp = vec[i + 1];
				vec[i + 1] = vec[i];
				vec[i] = temp;
				swapped = true;
			}
		}
	}
}