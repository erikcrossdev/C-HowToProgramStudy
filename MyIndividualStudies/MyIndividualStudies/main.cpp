#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <iomanip>
using std::setw;

void FillMatrixWithInput(const int, const int, int**&);

void AllocateAndCreateResultMatrix(const int, const int, int**& );

void MatrixMultiplication(const int, const int, const int, int**&, int**&, int**&);

void ShowMatrix(const int, const int, int**);

int main() {
	int firstMatrixRowSize, firstMatrixColumnSize;
	int secondMatrixRowSize, secondMatrixColumnSize;

	int** matrixOne = nullptr;
	int **matrixTwo = nullptr;
	int** resultMatrix = nullptr;

	cout << "#####Matrix multiplication program######"<< endl;
	cout << "Remember that the >>> matrixOne COLUMNs == matrixTwo ROWs<< must match" << endl << endl;

	cout << "Type the number of rows and columns of the FIRST matrix [row][column]: ";
	cin >> firstMatrixRowSize>> firstMatrixColumnSize;

	cout << "Type the number of rows and columns of the SECOND matrix [row][column]: ";
	cin >> secondMatrixRowSize >> secondMatrixColumnSize;

	if (firstMatrixColumnSize != secondMatrixRowSize) {
		cout << "The number of COLUMNs of the FIRST matrix must match the number of ROWs of the SECOND matrix!\nEnding program...";
		return 0;
	}
	
	cout << "\n\nLet's fill the matrix!" << endl;

	FillMatrixWithInput(firstMatrixRowSize, firstMatrixColumnSize, matrixOne);
	

	cout << "\n\nLet's fill the matrix!" << endl;

	FillMatrixWithInput(secondMatrixRowSize, secondMatrixColumnSize, matrixTwo);

	cout << "\n\nShow matrix one:" << endl;

	ShowMatrix(firstMatrixRowSize, firstMatrixColumnSize, matrixOne);
	cout << "\nShow matrix two:" << endl;
	ShowMatrix(secondMatrixRowSize, secondMatrixColumnSize, matrixTwo);

	AllocateAndCreateResultMatrix(firstMatrixRowSize, secondMatrixColumnSize, resultMatrix);

	cout << "Multiplying...\n\n";

	//since resulting matrix have lines = matrixOne rows
	//columns = matrixTwo columns
	//[matrixOneRows][matrixTwoColumns]
	
	// we just need to pass 3 sizes since: matrixOneColumn and secondMatrixRow must match
	//matrixOneColumn == secondMatrixRow
	
	MatrixMultiplication(firstMatrixRowSize, firstMatrixColumnSize, secondMatrixColumnSize, resultMatrix, matrixOne, matrixTwo);

	cout << "\n\nResult matrix:" << endl;
	ShowMatrix(firstMatrixRowSize, secondMatrixColumnSize, resultMatrix);


	return 0;
}

void FillMatrixWithInput(const int rowSize, const int columnSize, int**& matrix) {

	// Allocate memory first
	matrix = new int* [rowSize];
	for (int i = 0; i < columnSize; ++i) {
		matrix[i] = new int[columnSize];
	}

	for (int row = 0; row < rowSize; row++)
	{
		for (int col = 0; col < columnSize; col++)
		{
			cin >> matrix[row][col];
		}
	}
}

void ShowMatrix(const int rowSize, const int columnSize, int** matrix) {
	for (int row = 0; row < rowSize; row++)
	{
		for (int col = 0; col < columnSize; col++)
		{
			cout<<setw(4)<< matrix[row][col];
		}
		cout << endl;
	}
}

void AllocateAndCreateResultMatrix(const int rowSize, const int columnSize, int**& matrix) {

	// Allocate memory first
	matrix = new int* [rowSize];
	for (int i = 0; i < rowSize; ++i) {
		matrix[i] = new int[columnSize];
	}

}

void MatrixMultiplication(const int rowSizeOne, const int colSizeOne, const int colSizeTwo, int**& result, int**& matrixOne, int**& matrixTwo) {
	//First row of the first matrix
	for (int rowM1 = 0; rowM1 < rowSizeOne; rowM1++) {
		// column of the second matrix
		for (int colM2 = 0; colM2 < colSizeTwo; colM2++) {
			result[rowM1][colM2] = 0;  // Initialize result 0

			for (int colM1 = 0; colM1 < colSizeOne; colM1++) {
				result[rowM1][colM2] += matrixOne[rowM1][colM1] * matrixTwo[colM1][colM2]; //perform the dot product
			}
		}
	}	
}