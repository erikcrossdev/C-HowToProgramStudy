#include<iostream>
//Escreva um programa que solicita ao usu�rio inserir dois n�meros, obt�m os dois n�meros 
// do usu�rio e imprima a soma, produto, diferen�ae quociente dos dois numeros
using std::cout;
using std::cin;
using std::endl;

int main() {

	int num1, num2;

	cout << "Type the first number: ";
	cin >> num1;
	cout << "Type the second number: ";
	cin >> num2;

	cout << "Sum is: " << num1 + num2<<endl;
	cout << "Diference is: " << num1 - num2 << endl;
	cout << "Product is: " << num1 * num2 << endl;
	cout << "Quotient is: " << num1 / num2 << endl;

	
	return 0;
}

