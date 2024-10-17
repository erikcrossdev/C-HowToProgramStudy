#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void towerOfHanoiRecursive(const int, const int, const int, const int);
bool isBetween(int, int, int);
int setTempPole(int, int);

int moves;
int main() {
	int disks, initPole, targetPole, tempPole;
	
	cout << "Welcome to Tower of Hanoi!" << endl << endl;

	do {
		cout << "Type the numbers of disks [greater  or equal than 3]: ";
		cin >> disks;
		cout << "The index of the initial Pole [1, 2 or 3]: ";
		cin >> initPole;
		cout << "The index of the destination of the disks [1, 2 or 3]: ";
		cin >> targetPole;

		if (targetPole == initPole) {
			cout << "Destination and initial position cannot be the same!" << endl << endl;
		}
		if (disks < 3) {
			cout << "Number of disks must be greater or equal to 3!" << endl << endl;
		}
		if (!isBetween(targetPole, 1, 3)) {
			cout << "Destination pole should be between 1 and 3" << endl << endl;
		}
		if (!isBetween(initPole, 1, 3)) {
			cout << "Inital pole should be between 1 and 3" << endl << endl;
		}
		//cout << (targetPole == initPole && disks < 3 && isBetween(targetPole, 1, 3) && isBetween(initPole, 1, 3));
	} while (targetPole == initPole || disks < 3 || !isBetween(targetPole, 1, 3) || !isBetween(initPole, 1, 3));

	tempPole = setTempPole(initPole, targetPole);

	towerOfHanoiRecursive(disks, initPole, targetPole, tempPole);
	cout << "Total moves: " << moves;
	return 0;
}

bool isBetween(int val, int min, int max) {
	return val <= max && val >= min;
}
int setTempPole(int initPole, int destPole) {
	if (initPole == 1 && destPole == 2 || initPole == 2 && destPole == 1) return 3;
	if (initPole == 3 && destPole == 1 || initPole == 1 && destPole == 3) return 2;
	if (initPole == 3 && destPole == 2 || initPole == 2 && destPole == 3) return 1;
}

void towerOfHanoiRecursive(const int disks, const int initialPole, const int targetPole, const int tempPole) {
		
	if (disks == 0) return;
	moves++;
	towerOfHanoiRecursive(disks - 1, initialPole, tempPole, targetPole);
	
	cout << "Move disk " << disks << " from rod " << initialPole
		<< " to rod " << targetPole <<": " << disks << " -> " << targetPole << endl;
	
	towerOfHanoiRecursive(disks - 1, tempPole, targetPole, initialPole);

}