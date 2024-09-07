#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main() {

	int workedHours;
	double valuePerHour, salary;
	int minWorkedHours = 40;

	cout << "Enter the total worked hours (-1 to exit): ";
	cin >> workedHours;

	while (workedHours > -1) 
	{
		cout << "Enter value per worked hour: ";
		cin >> valuePerHour;
		salary = 
			workedHours < minWorkedHours ?  
						workedHours * valuePerHour : 
						(workedHours * valuePerHour) + ((workedHours - minWorkedHours) * (valuePerHour * 50)/100);

		cout << "Salary: " << salary << endl << endl;
		cout << "Enter the total worked hours (-1 to exit): ";
		cin >> workedHours;
	}

	return 0;
}