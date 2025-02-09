#include <iostream>
using std::cout;
using std::endl;
using std::cin;

void showTabularStars(int [], int, int, int );

int main() {
	const int arrayRanges = 9;
	const int initRange = 200;
	const int incRange = 99;
	const int employees = 13;
	//int salariesAndCommissions[employees] = { 300, 500, 900, 700, 233, 580, 1000, 580, 300, 409, 1000, 6000, 800 };
	int salariesAndCommissions[employees] = { 300, 300, 300, 300, 300, 300, 300, 300, 300, 409, 1000, 1000, 2300 };
	int weeklyRanges[arrayRanges] = { 0 };
	int range = 0;

	for (int i = 0, range = initRange; i < arrayRanges;i++, range += 100) {
		for (int j = 0;j < employees;j++) {
			if (range < 1000) {
				if (salariesAndCommissions[j] >= range && salariesAndCommissions[j] <= (range + incRange))
				{
					weeklyRanges[i] += 1;
				}
			}
			else {
				if (salariesAndCommissions[j] >= range)
				{
					weeklyRanges[i] += 1;
				}
			}
		}
	}
	showTabularStars(weeklyRanges, arrayRanges, initRange, incRange);
	

	return 0;
}

void showTabularStars(int distribution[], int size, int rangeInit, int inc) {
	int range = 0;
	for (int i = 0, range = rangeInit; i < size;i++, range += 100) {

		if (range == 1000) {
			cout << "$" << range << "-" << "and more" << ": ";
		}
		else {
			cout << "$" << range << "-" << range + inc << ": ";
		}

		for (int stars = 0; stars < distribution[i]; stars++) {
			cout << "*";
		}
		cout << endl;
	}
}