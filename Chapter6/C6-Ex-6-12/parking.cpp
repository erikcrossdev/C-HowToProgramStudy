#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::size;
using std::fixed;
using std::setprecision;


using std::setw;

double calculateCharges(double);


int main() {

	double totalHours = 0;
	double totalCharges = 0;
	double cars[] = { 1.5, 4.0, 24.0 };

	cout << "Car" << setw(12) << "Hours" << setw(13) << "Charge" << fixed<<setprecision(2)<< endl;
	for (int i = 0; i < size(cars); i++)
	{
		double charge = calculateCharges(cars[i]);
		cout << i+1 << setw(14) << cars[i] << setw(13) << charge<<endl;
		totalHours += cars[i]; 
		totalCharges += charge;
	}
	cout << "TOTAL" << setw(10) << totalHours << setw(13) << totalCharges << endl;
	
	return 0;
}

double calculateCharges(double hours)
{
	const int minHours = 3;
	const double additionalHour = 0.50;
	double charge = 2.0;

	if (hours <= minHours) {
		return charge;
	}
	
	if (hours >= 24.0) {
		charge = 10.0;
		return charge;
	}

	charge = (hours - minHours) * additionalHour + charge;
	return charge;
}