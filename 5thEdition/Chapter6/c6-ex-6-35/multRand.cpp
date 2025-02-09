#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::rand;
using std::srand;
using std::time;

inline int randomRange(int min, int max) {
	return rand() % (max - min + 1) + min;
}

bool generateQuestion(int, int);

int main() {

	bool currentAnswer = true;
	int a;
	int b;
	
	a = randomRange(2, 10);
	b = randomRange(2, 10);

	srand(time(0));
	
	do {
		if (currentAnswer) {
			a = randomRange(2, 10);
			b = randomRange(2, 10);
		}
		currentAnswer = generateQuestion(a, b);
	
	} while (true);

	
	return 0;
}

bool generateQuestion(int a, int b) {
		
	int expectedAnswer = a * b;
	int userAswer;

	cout << "Quanto eh " << a << " x " << b << "?" << endl;
	cin >> userAswer;
	if (userAswer == expectedAnswer) {
		cout << "Muito bem!" << endl;
	}
	else {
		cout << "Nao, tente novamente!" << endl;
	}

	return userAswer == expectedAnswer;
}
