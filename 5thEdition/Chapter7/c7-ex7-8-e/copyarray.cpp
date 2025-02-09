#include <iostream>
#include<iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::setw;

int main() {
	int const a_size = 11;
	int const b_size = 34;
	int a[a_size], b[34];

	cout << "a value";
	for (int i = 0; i < a_size; i++) 
	{
		if (i % 5 == 0)cout << endl;
		a[i] = (i+1);
		cout << setw(5) << a[i];
		
	}
	cout << endl << endl;
	cout << "a value";
	for (int i = 0; i < b_size; i++)
	{
		if (i % 5 == 0) cout << endl;
		b[i] = (i +1)*5;
		cout << setw(5) << b[i];

	}
	cout << endl << endl;
	cout << "a value into b first "<<a_size << " positions"<<endl;
	for (int i = 0; i < b_size; i++) {
		if (i % 5 == 0) cout << endl;
		if (i < a_size) {
			b[i] = a[i];
		}
		cout << setw(5) << b[i];
	
	}

	return 0;
}