#include <iostream>
#include <ctime>

using std::cout;
using std::endl;

#include <cstdlib> //contains the definition of rand
using std::rand;
using std::srand;

//see that we need only to add = (and a number) to the fisrt one if we want it to be in sequence
enum Months {
	JAN =1,
	FEB, //2
	MAR, //3
	APR, //4
	MAY, //5
	JUN, //6
	JUL, //7
	AUG, //8
	SEP, //9
	OCT, //10
	NOV, //11
	DEC  //12
};

enum OtherEnum {
	Twelve = 12,
	Thirteen,  //this will be 13
	Fourteen    //this will be 14
};

int main() {
	
	int mon;
	int otherExample = 14;
	srand(time(0));

	mon = (JAN + rand() % DEC);
	
	switch (mon) {
	case JAN:
		cout << mon << " " << static_cast<Months>(mon) << " January";
		break;
	case FEB:
		cout << mon << " " << static_cast<Months>(mon) << " February";
		break;
	case MAR:
		cout << mon << " " << static_cast<Months>(mon) << " March";
		break;
	case APR:
		cout << mon << " " << static_cast<Months>(mon) << " April";
		break;
	case MAY:
		cout << mon << " " << static_cast<Months>(mon) << " May";
		break;
	case JUN:
		cout << mon << " " << static_cast<Months>(mon) << " June";
		break;
	case JUL:
		cout << mon << " " << static_cast<Months>(mon) << " July";
		break;
	case AUG:
		cout << mon << " " << static_cast<Months>(mon) << " August";
		break;
	case SEP:
		cout << mon << " " << static_cast<Months>(mon) << " September";
		break;
	case OCT:
		cout << mon << " " << static_cast<Months>(mon) << " October";
		break;
	case NOV:
		cout << mon << " " << static_cast<Months>(mon) << " November";
		break;
	case DEC:
		cout << mon << " " << static_cast<Months>(mon) << " December";
		break;
	}
	cout << endl;
	cout << static_cast<OtherEnum>(otherExample) << endl;
	if (otherExample == static_cast<int>(Fourteen)) {
		cout << "Fourteen!" << endl;
	}

	return 0;
}