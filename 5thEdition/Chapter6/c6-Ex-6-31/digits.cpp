#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int invertDigits(int);

int main() {

	int num;
	cout << "Type a number to reverse:";
	cin >> num;

	cout<<invertDigits(num)<<endl;

	return 0;
}

int invertDigits(int number) {

	int reverse = 0;
	while (number > 0) {
		reverse = reverse * 10 + number % 10;
		number = number / 10;
	}
	return reverse;
}
