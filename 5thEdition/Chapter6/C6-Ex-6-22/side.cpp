#include <iostream>
#include <iomanip>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::pow;
using std::sqrt;
using std::fabs;
using std::boolalpha;

void drawSquare (int);
void drawSquare(int, char);


int main() {

	char cont = 'y';
	int number;
	char letter;
	bool inputLetter;

	cout << "Want to input a letter to draw? (0- no, 1-yes): ";
	cin >> inputLetter;

	if (inputLetter) {
		cout << "Type any char: ";
		cin >> letter;
	}

	do {

		cout << "Input a square to draw it: ";
		cin >> number;

		if (inputLetter) {
			drawSquare(number, letter);
		}
		else {
			drawSquare(number);
		}
		

		cout << "Want to continue? (Y/N):";
		cin >> cont;

	} while (cont == 'y' || cont == 'Y');

	return 0;
}

void drawSquare(int side)
{
	for (int i = 0; i < side; i++) 
	{
		for (int j = 0; j < side; j++)
		{
			cout << "#";
		}
		cout << endl;
	}
}
void drawSquare(int side, char c)
{
	for (int i = 0; i < side; i++)
	{
		for (int j = 0; j < side; j++)
		{
			cout << c;
		}
		cout << endl;
	}
}

