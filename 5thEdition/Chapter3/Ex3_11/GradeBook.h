#pragma once
#include<iostream>
using std::cout;
using std::endl;

#include <string>
using std::string; 

class GradeBook
{
	public: 
		GradeBook(string, string);

		string getCourseName();
		void setCourseName(string);

		string getInstructorName();
		void setInstructorName(string);

		void displayMessage();

	private:
		string courseName;
		string instructorName;

};

