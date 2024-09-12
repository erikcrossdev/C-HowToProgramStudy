#include <iostream>

using std::cout;
using std::endl;
using std::cin;

#include "GradeBook.h"

GradeBook::GradeBook(string name) {
	setCourseName(name);
	studentMaximum = 0;
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
	int grade1;
	int grade2; 
	int grade3;

	cout << "Enter three integers grades:";
	cin >> grade1 >> grade2 >> grade3;
	studentMaximum = maximum(grade1, grade2, grade3);
}

void GradeBook::displayGradeReport()
{
	cout << "\nMaximum of grades entered: " << studentMaximum << endl;
}

int GradeBook::maximum(int n1, int n2, int n3) {
	int maximumValue = n1;

	if (n2 > maximumValue) {
		maximumValue = n2;
	}
	if (n3 > maximumValue) {
		maximumValue = n3;
	}
	return maximumValue;
}
