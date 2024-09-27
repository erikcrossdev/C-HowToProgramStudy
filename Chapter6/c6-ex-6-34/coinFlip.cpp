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

int flip(int * tails, int * heads);

int main() {

	int num;
	int headsSum = 0;
	int tailsSum = 0;
	srand(time(0));
	cout << "Flip a coin 100 times!"<<endl;	
	for (int i = 1; i < 100; i++)
	{
		flip(&tailsSum, &headsSum);
		cout << setw(3);
		if (i % 5 == 0) cout << endl;
	}
	cout << endl << endl << "Total Flips:" << endl;
	cout << endl<<"Heads " << headsSum<<endl;
	cout << "Tails " << tailsSum<< endl;

	return 0;
}

int flip(int * tails, int * heads) {

	int random = randomRange(0, 1);
	if (random == 1) { 
		cout << "Heads " ;
		(*heads)++;
	}
	if (random == 0) { 
		cout << "Tails " ;
		(*tails)++;
	}

	return random;
}
