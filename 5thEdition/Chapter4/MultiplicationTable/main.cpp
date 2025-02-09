#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <cmath>

int main() {

	int tables =0;
	int length =0;

	cout << "#### Multiplication Table ####" << endl;
	
	while (tables <= 0) {
		cout << "Type the number of tables that you want to see (positive numbers only):";
		cin >> tables;
		if (tables <= 0) {
			cout << "\aNegative and zero are invalid values! Type a positive number" << endl;
		}
	}

	while (length <= 0) {
		cout << "Type the number of multiplications of tables that you want to see (positive numbers only):";
		cin >> length;
		if (length <= 0) {
			cout << "\aNegative and zero are invalid values! Type a positive number" << endl;
		}
	}
	
	cout << "Showing tables from 1 to " << tables << " multipling by 1 until " << length << endl;
	for (int i = 1; i <= tables; i++)
	{
		cout << "Table " << i<<": "<<endl;
		for (int j = 1; j <= length; j++)
		{
			cout << "\t"<< i << " x " << j <<" = "<< i * j << endl;
		}
		cout << endl;
		
	}
	return 0;
}