#include <iostream>

#include "GradeBook.h"

int main() {
	GradeBook gradebook1("CS102 Data structures in C++");

	gradebook1.displayMessage();
	gradebook1.determineClassAvarege();

	return 0;
}