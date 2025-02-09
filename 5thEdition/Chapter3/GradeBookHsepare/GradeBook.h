#pragma once
#include <iostream>

using std::cout;
using std::cin;
using std::endl;


#include <string>
using std::string;
using std::getline;

class GradeBook
{
public:

	GradeBook(string name){
		setCourseName(name);
	}

	void setCourseName(string name) {
		courseName = name;
	}

	string getCourseName() {
		return courseName;
	}

	void displayMessage(string courseName) {
		cout << "Welcome to grade book for :" << getCourseName() << " !" << endl;
	}

private:
	string courseName;
};

