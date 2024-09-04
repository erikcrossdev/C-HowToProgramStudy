#include "GradeBook.h"

GradeBook::GradeBook(string course, string instructor) {
	setCourseName(course);
	setInstructorName(instructor);
}

string GradeBook::getCourseName() {
	return courseName;
}

string GradeBook::getInstructorName() {
	return instructorName;
}

void GradeBook::setCourseName(string name) {
	courseName = name;
}

void GradeBook::setInstructorName(string name) {
	instructorName = name;
}

void GradeBook::displayMessage() {
	cout << "Welcome to course " << courseName << "\nThis course is presented by: " << instructorName << endl<<endl;
}