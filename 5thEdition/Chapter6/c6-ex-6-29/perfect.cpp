#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::setw;

using std::boolalpha;


bool perfect(int);

int main() {

	int num;
	cout << "Type a number: ";
	cin >> num;
	cout << "Is a perfect number? " << boolalpha << perfect(num) << endl;

	cout << "Lets see all perfect numbers between 1 and 100000" << endl;
	for (int i = 1; i < 100000; i++)
	{
		if (perfect(i)) {
			cout << setw(3) << i <<"\t";
			if (i % 5 == 0) {
				cout << endl;
			}
		}

	}

	return 0;
}

bool perfect(int num) {

	int sum = 0;

	if (num == 1) return false;

	for (int i = 1; i < num; i++)
	{
		if (num % i == 0) {
			sum += i;
		}
	}



	return sum == num;
}
