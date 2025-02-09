#include <iostream>

using std::cout;
using std::endl;
using std::cin;

#include "GradeBook.h"

GradeBook::GradeBook(string name) {
	setCourseName(name);
	aCount = bCount = cCount = dCount = fCount = 0;
}

void GradeBook::setCourseName(string name) {

	if (name.length() <= 25) {
		courseName = name;
	}
	else {
		courseName = name.substr(0, 25);

		cout << "Name \"" << name << "\"exceeds maximum length (25).\n" <<
			"Limiting course Name to first 25 characters.\n" << endl;

	}
}

string GradeBook::getCourseName() {
	return courseName;
}

void GradeBook::displayMessage() {
	cout << "Welcome to grade book for :" << getCourseName() << " !" << endl;
}

void GradeBook::inputGrades() {
	int grade;

	cout << "Enter the letter grades. " << endl
		<< "Enter the EOF character to end input." << endl;
	//ctrl + z is EOF character
	while ((grade = cin.get()) != EOF) 
	{
		switch (grade) 
		{
			case 'a':
			case 'A':
				aCount++;
				break;
			case 'b':
			case 'B':
				bCount++;
				break;
			case 'c':
			case 'C':
				cCount++;
				break;
			case 'd':
			case 'D':
				dCount++;
				break;
			case 'f':
			case 'F':
				dCount++;
				break;
			case '\n':
			case '\t':
			case ' ':
				break;
			default:
				cout << "Incorrect letter grade entered.\nEnter a new grade" << endl;
				break;
		}
	}
}
void GradeBook::displayGradeReport()
{
	cout << "\n\nNumber of students who received each letter grade: "
		<< "\n\nA: " << aCount
		<< "\n\nB: " << bCount
		<< "\n\nC: " << cCount
		<< "\n\nD: " << dCount
		<< "\n\nF: " << fCount
		<< endl;
}

