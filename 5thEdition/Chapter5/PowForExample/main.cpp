#include <iostream>

using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setw;
using std::setprecision;

#include <cmath>
using std::pow;

int main() {

	double amount; 
	double principal = 1000.0;
	double rate = .05;

	cout << "Year" << setw(21) << "Amount on deposit" << endl; //Exibe cabeçalhos com espaçamentos 

	cout << fixed << setprecision(2); //configura formato de número de ponto flutuante

	for (int year = 0; year < 10; year++)
	{
		amount = principal * pow(1.0 + rate, year);

		cout << setw(4) << year << setw(21) << amount << endl;
	}

	return 0;
}