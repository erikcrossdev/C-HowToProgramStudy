#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int tripleByValue(int);
int tripleByReference(int &);

int main() {
	int value; 
	cout << "Type a value to triple it:";
	cin >> value;

	cout << tripleByValue(value) << endl;
	value = tripleByValue(value);
	cout << value << endl;
	cout << tripleByReference(value) << endl;
	value = tripleByReference(value);
	cout << value << endl;

	return 0;
}

int tripleByValue(int value) {
	return value * 3;
}
int tripleByReference(int &value) {
	value *=3;
	return value;
}