#include<iostream>
//Raio circunferencia e area

using std::cout;
using std::cin;
using std::endl;

int main() {
	
	int num1;
	int num2;

	int mult;

	cout << "Digite o numero 1: ";
	cin >> num1;

	cout << "Digite o numero 2: ";
	cin >> num2;

	if (num1 % 2 == 0) {
		cout << "Numero 1 eh par: "<<endl;
	}
	else {
		cout << "Numero 1 eh impar: " << endl;
	}

	if (num1 % num2 == 0) {
		cout << "Numero 1 eh multiplo do numero 2: " << endl;
	}
	else {
		cout << "Numero 1 NAO eh multiplo do numer0 2: " << endl;
	}


	return 0;
}