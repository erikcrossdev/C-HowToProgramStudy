#include<iostream>
//Escreva um programa que solicita ao usuário inserir dois números, obtém os dois números 
// do usuário e imprima a soma, produto, diferençae quociente dos dois numeros
using std::cout;
using std::cin;
using std::endl;

int main() {

	int num1, num2;

	cout << "Type the first number: ";
	cin >> num1;
	cout << "Type the second number: ";
	cin >> num2;

	if (num1 == num2) 
	{
		cout << num1<< " eh igual a "<< num2 << endl;
	}
	if (num1 < num2)
	{
		cout << num1 << " eh o maior "<< endl;
	}
	if (num2 < num1)
	{
		cout << num2 << " eh o maior " << endl;
	}

	return 0;
}