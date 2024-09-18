#include "GradeBook.h"

int main() {
	int gradesArray[GradeBook::students] = { 87, 68, 94, 100, 83, 78, 85, 91, 76, 87 };

	GradeBook gradeBook("Programming Course", gradesArray);
	gradeBook.displayMessage();
	gradeBook.processGrades();

	return 0;
}