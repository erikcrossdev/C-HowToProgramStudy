#include <iostream>
using std::cout;
using std::endl;

bool isPrimeNumber(int);

int main() {
	
	for (int i = 2; i <= 10000 ;i++) {
		if (i != 2 && i % 2 == 0) continue;
		if (isPrimeNumber(i)) {
			cout << i << endl;
		}
	}
	return 0;
}

bool isPrimeNumber(int number) {

	if (number <= 1) return false;

	for (int i = 2; i < number; i++) 
	{
		if (number % i == 0) return false;
	}
	return true;

}