#include "GradeBook.h"

int main() {

	GradeBook myGradebook("Programming tips");
	myGradebook.displayMessage();
	myGradebook.inputGrades();
	myGradebook.displayGradeReport();

	return 0;
}