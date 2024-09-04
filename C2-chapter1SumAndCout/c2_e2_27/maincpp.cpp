#include<iostream>
//Raio circunferencia e area

using std::cout;
using std::cin;
using std::endl;

int main() {

	char caractere;
	int inteiro;

	cout << "Digite um caractere: ";
	cin >> caractere;

	cout <<"O caractere "<< caractere << " na tabela ASCII eh: " << static_cast<int>(caractere) << endl<<endl;


	cout << "Digite um inteiro: ";
	cin >> inteiro;

	cout << "O inteiro " << inteiro << " na tabela ASCII eh: " << static_cast<char>(inteiro) << endl;

	return 0;
}