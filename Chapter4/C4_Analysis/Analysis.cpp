#include "Analysis.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;


void Analysis::processExamResults() {
	//inicialização
	int passes = 0;
	int failures = 0;
	int studentCounter = 1;
	int result;

	//process
	while (studentCounter <=10)
	{
		cout << "Enter result (1= PASS, 2= FAIL): ";
		cin >> result;

		if (result == 1) passes++;
		else failures++;

		studentCounter++;
	}

	cout << "Passes " << passes << "\nFailed " << failures << endl;

	if (passes > 8) {
		cout << "Raise tuition!" << endl;
	}

}