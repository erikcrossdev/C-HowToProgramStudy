#include <iostream>
#include <iomanip>
using std::cout;
using std::setw;
using std::cin;
using std::endl;

int main()
{
	int account;
	double saldo, taxas, credit, limite, novoSaldo;

	cout << "Entre com o numero da conta (-1 para terminar): ";
	cin >> account;

	while (account != -1)
	{
		cout << "Entre com o saldo inicial: ";
		cin >> saldo;
		cout << "Entre com as taxas: ";
		cin >> taxas;
		cout << "Entre com o total de cretidos: ";
		cin >> credit;
		cout << "Entre com o limite de cretidos: ";
		cin >> limite;

		novoSaldo = saldo + taxas - credit;

		if (novoSaldo > saldo) {
			cout << "Novo saldo: " << saldo << endl;
			cout << "Conta: " << setw(6) << account << endl;
			cout << "Limite de Credito: " << setw(2) << limite << endl;
			cout << "Saldo: " << setw(2) << saldo << endl;
			cout << "limite de credito excedido!" << endl << endl << endl << endl;
		}
		else
		{
			cout << "Novo saldo: " << setw(4) << novoSaldo << endl << endl<<endl<<endl;
		}

		cout << "Entre com o numero da conta (-1 para terminar): ";
		cin >> account;

	}
	return 0;
}
