#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main() {
	int n[10]; //initialize array with 10 elements

	cout << "Element" << setw(13) << "Value" << endl;
	for (int i = 0; i < 10; i++)
	{
		n[i] = i + 1;
		cout << setw(7) << i << setw(13) << n[i] << endl;
	}

	int n2[10] = {32,27,64,18,95,14,90,70,60,37}; //initialize array with 10 pre-defined elements

	cout <<endl<<endl<< "Element" << setw(13) << "Value" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << setw(7) << i << setw(13) << n2[i] << endl;
	}

	return 0;
}