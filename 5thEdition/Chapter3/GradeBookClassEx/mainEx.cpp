#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include "GradeBook.h"

int main() {
	string nameOfCourse;
	GradeBook gradebook1("CS102 Data structures in C++");
	GradeBook gradebook2("CS102 Introduction to Programming in C++");

	cout << "Initial course name is :" << gradebook1.getCourseName() << endl;
	cout << "Initial course name is :" << gradebook2.getCourseName() << endl;


	gradebook1.displayMessage();
	gradebook2.displayMessage();

	return 0;
}