//fig 3.1
//Define a classe GradeBook com uma função-membro que aceita um parametro
//displayMessage e cria um objeto

#include <iostream>

using std::cout;
using std::cin;
using std::endl;


#include <string>
using std::string;
using std::getline;

//Definição da classe GradeBook
class GradeBook
{
public:
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

int main() {
	string nameOfCourse;
	GradeBook myGradeBook;

	cout << "Initial course name is :" << myGradeBook.getCourseName() << endl;

	cout << "Please enter the course name:" << endl;
	getline(cin, nameOfCourse); //lê o nome de um curso com espaços em branco 
	cout << endl;
	myGradeBook.setCourseName(nameOfCourse);

	myGradeBook.displayMessage(myGradeBook.getCourseName());

	return 0;
}