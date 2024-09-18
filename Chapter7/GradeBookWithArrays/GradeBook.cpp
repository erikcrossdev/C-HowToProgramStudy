#include "GradeBook.h"
#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::cin;
using std::setw;
using std::setprecision;
using std::fixed;

#include "GradeBook.h"

GradeBook::GradeBook(string name, const int gradesArray[]) {
	setCourseName(name);

	for (int grade = 0; grade < students; grade++)
	{
		grades[grade] = gradesArray[grade];
	}
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

void GradeBook::processGrades() {
	outputGrades();

	cout << "\nClass avarege is " << setprecision(2) << fixed<< getAverage()<<endl;
	cout << "Lowest grade is " << getMinimum() << endl;
	cout << "Highest greade is " << getMaximum() << endl;

	outputBarChart();
}

int GradeBook::getMinimum() {
	int lowestGrade = 100; //100 is maximum grade, so any grade less then 100 will be less

	for (int grade = 0; grade < students; grade++)
	{
		if (grades[grade] < lowestGrade) {
			lowestGrade = grades[grade];
		}
	}
	return lowestGrade;
}

int GradeBook::getMaximum() {
	int higherGrade = 0; //0 is the minimum grade, so any grade greater then 0 will be the new maximum

	for (int grade = 0; grade < students; grade++)
	{
		if (grades[grade] > higherGrade) {
			higherGrade = grades[grade];
		}
	}
	return higherGrade;
}

double GradeBook::getAverage() {
	int average = 0;

	for (int grade = 0; grade < students; grade++)
	{
		average += grades[grade];
	}
	return static_cast<double> (average) /students;
}

void GradeBook::outputBarChart() {
	cout << "\nGrade Distribution: " << endl;

	const int frequencySize = 11;
	int frequency[frequencySize] = { 0 };

	for (int grade = 0; grade < students; grade++)
	{
		frequency[grades[grade] / 10]++;//increment frequency for each grade
	}

	for (int count = 0; count < frequencySize; count++)
	{
		if (count == 0) {
			cout << "  0-9: ";
		}
		else if (count == 10) {
			cout << " 100: ";
		}
		else {
			cout << count * 10 << "-" << (count * 10) + 9 << ": ";
		}
		for (int stars = 0; stars < frequency[count]; stars++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

void GradeBook::outputGrades() {
	cout << "\nThe Grades are:\n\n";

	for (int student = 0; student < students; student++)
	{
		cout << "Student " << setw(2) << student + 1 << ": " << setw(3) << grades[student] << endl;
	}
}