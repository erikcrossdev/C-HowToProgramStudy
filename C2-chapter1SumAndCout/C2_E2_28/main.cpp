#include<iostream>
//Escreva um programa que insere um inteiro de cinco digitos, separa o inteiro em seus 
//digitos individuais e imprime os digitos separados entre si por três espaços
//dica: utilize operadores de divisão de inteiros e modulo.
//Ex: input: 42339
//outup: 4   2   3   3  9

using std::cout;
using std::cin;
using std::endl;

int main() {

	int number;
	int d1, d2, d3, d4, d5;

	cout << "Digite número com cinco digitos: ";
	cin >> number;

	d1 = number / 10000;   //Pega o primeiro digito
	d2 = (number / 1000) % 10;  //Pega o segundo digito usando o mod
	d3 = (number / 100) % 10;  //pega o terceiro digito usando mod
	d4 = (number / 10) % 10;  //pega o penultimo digito usando mod
	d5 = number % 10;  //Pega o último digito usando mod 

	cout << d1 << "\t" << d2 << "\t" << d3 << "\t" << d4 << "\t" << d5 << endl;
	
	return 0;
}