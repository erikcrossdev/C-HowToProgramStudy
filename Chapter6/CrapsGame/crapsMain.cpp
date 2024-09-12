#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

#include <cstdlib> //contains the definition of rand
using std::rand;
using std::srand;

int rollDice(); //if the definition wasn't here, main could not use it!
int getRandomRange(int, int);

int main() {

	enum Status {CONTINUE, WON, LOST};

	int myPoint;
	Status gameStatus;

	srand(time(0));//get current time

	int sumOfDice = rollDice();

	switch (sumOfDice) {
	
		case 7:
		case 11:
			gameStatus = WON;
			break;
		case 2:
		case 3:
		case 12:
			gameStatus = LOST;
			break;
		default:
			gameStatus = CONTINUE;
			myPoint = sumOfDice;
			cout << "Points: " << myPoint << endl;
			break;
	}

	while (gameStatus == CONTINUE) {
		sumOfDice = rollDice();
		if (sumOfDice == myPoint) {
			gameStatus = WON;
		}
		else if (sumOfDice == 7) gameStatus = LOST;
	}

	if (gameStatus == WON) {
		cout << "Player wins! \\o/" << endl;
	}
	else {
		cout << "Player Lost :(" << endl;
	}

	return 0;
}

int rollDice() {
	int dice1 = getRandomRange(1, 6);
	int dice2 = getRandomRange(1, 6);

	int sum = dice1 + dice2;

	cout << "Player rolled " << sum << " - dice 1: " << dice1 << " dice 2: " << dice2 << endl;
	return sum;
}

int getRandomRange(int min, int max) {
	return min + rand() % max;
}