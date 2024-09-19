#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cmath>
using std::log10;
using std::abs;

int quocient(int, int);
int mod(int, int);
void separateNumbers(int);

int main() {

	int a, b, num;

	a = 10;
	b = 23;
	cout << "quocient " << quocient(a, b)<<endl;
	cout << "mod " << mod(a, b) << endl;

	cout << "Type a number: ";
	cin >> num;
	separateNumbers(num);

}

int quocient(int a, int b) {
	return a / b;
}

int mod(int a, int b) {
	return a % b;
}

void separateNumbers(int num) 
{
	int numberOfDigits = num ? static_cast<int>(log10(abs(num))) + 1 : 1;
	cout << "Number of digits of " << num << " is " << numberOfDigits<<endl;
	int div = 1;
	for (int i = 1; i < numberOfDigits; i++) {
		div *= 10;
	}

	for (int i = 1; i <= numberOfDigits; i++) {
		if (i == 1) {
			cout << num / (div)<< " ";
		}
		else if (i == numberOfDigits) {
			cout << num % 10<< " ";
		}
		else {
			cout << (num / div) % 10 << " ";
		}
		div /= 10;
	}
}