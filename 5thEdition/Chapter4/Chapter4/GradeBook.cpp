#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip> //Para manipuladores de fluxo parametrizados
using std::setprecision; //configura precis�o de sa�da num�rica

#include "GradeBook.h"

GradeBook::GradeBook(string name) {
	setCourseName(name);
}

void GradeBook::setCourseName(string name) {

	if (name.length() <= 25) {
		courseName = name;
	}

	if (name.length() > 25) {
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

void GradeBook::determineClassAvarege() {
	int total;
	int gradeCounter;
	int grade;
	double avarege;

	//fase de inicializa��o
	total = 0;
	gradeCounter = 0;


	//fase de processamento

	cout << "Enter grade or -1 to quit:";
	cin >> grade;

	//faz loop at� valor de sentinela ser digitado
	while (grade != -1)
	{

		total = total + grade;
		gradeCounter = gradeCounter + 1;

		cout << "Enter grade or -1 to quit: ";
		cin >> grade;

	}

	//fase de termino
	if (gradeCounter != 0)
	{
		//avarege = static_cast<double> (total) / gradeCounter;
		avarege =  (total) / gradeCounter;

		//exibe o total e a m�dia com dois d�gitos de precis�o
		cout << "\nTotal of all " << gradeCounter << " grades entered is " << total << endl;

		cout << "Class Avarege is: " << setprecision(2) << fixed << avarege << endl;
	}
	else {

		cout << "No grades were entered" << endl;

	}

}