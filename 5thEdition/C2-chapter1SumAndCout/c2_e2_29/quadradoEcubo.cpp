#include<iostream>
//Usar tabulação para escrever quadrado e cubo de inteiros de 0 a 10

using std::cout;
using std::cin;
using std::endl;

int main() {


	cout << "Sem um for loop" << endl<<endl<<endl;
	cout << "Inteiro\t Quadrado\tCubo"<<endl;
	cout << 0 << "\t  " << 0 * 0 << "\t\t" << 0 * 0 * 0 << "\t\t" << endl;
	cout << 1 << "\t  " << 1 * 1 << "\t\t" << 1 * 1 * 1 << "\t\t" << endl;
	cout << 2 << "\t  " << 2 * 2 << "\t\t" << 2 * 3 * 2 << "\t\t" << endl;
	cout << 3 << "\t  " << 3 * 3 << "\t\t" << 3 * 3 * 3 << "\t\t" << endl;
	cout << 4 << "\t  " << 4 * 4 << "\t\t" << 4 * 4 * 4 << "\t\t" << endl;
	cout << 5 << "\t  " << 5 * 5 << "\t\t" << 5 * 5 * 5 << "\t\t" << endl;
	cout << 6 << "\t  " << 6 * 6 << "\t\t" << 6 * 6 * 6 << "\t\t" << endl;
	cout << 7 << "\t  " << 7 * 7 << "\t\t" << 7 * 7 * 7 << "\t\t" << endl;
	cout << 8 << "\t  " << 8 * 8 << "\t\t" << 8 * 8 * 8 << "\t\t" << endl;
	cout << 9 << "\t  " << 9 * 9 << "\t\t" << 9 * 9 * 9 << "\t\t" << endl;
	cout << 10 << "\t  " << 10 * 10 << "\t\t" << 10 * 10 * 10 << "\t\t" << endl<<endl<<endl;

	cout << "Com for loop" << endl << endl;
	cout << "Inteiro\t Quadrado\tCubo" << endl;
	for (size_t i = 0; i <= 10; i++)
	{
		cout << i << "\t  " << i * i << "\t\t" << i * i * i << "\t\t" << endl;
	}
	
	return 0;
}