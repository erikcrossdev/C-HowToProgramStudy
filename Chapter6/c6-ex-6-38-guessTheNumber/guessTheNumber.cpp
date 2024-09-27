#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cstdlib>
using std::rand;
using std::srand;
#include <ctime>
using std::time;

inline int randomRange(const int min, const int max) {
	return rand() % (max - min + 1) + min;
}

bool isRandomNumberCorrect(const int*, const int*);

int main() {
	srand(time(0));
	int random = randomRange(1, 1000);
	bool answer = false;
	int guess;
	cout << "I have a number between 1 and 1000.\nCan you guess the number?" << endl;
	char playAgain;
	do {
		do {
			cout << "Type a guess: ";
			cin >> guess;
			answer = isRandomNumberCorrect(&random, &guess);
			if (!answer) {
				if (guess < random) {
					cout << "Too low. Try again!" << endl;
				}
				else {
					cout << "Too high. Try again!" << endl;
				}
			}

		} while (!answer);
		cout << "Excelent! The number was " << random << "!" << endl;
		cout << "Do you want to play it again? (y/n)";
		cin >> playAgain;
		cout << endl;

	} while (playAgain=='y' || playAgain=='Y');
	return 0;
}

bool isRandomNumberCorrect(const int * randomNum, const int * guess) 
{
	return (*randomNum) == (*guess);
}