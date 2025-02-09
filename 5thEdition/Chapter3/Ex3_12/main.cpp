#include "Account.h"
#include<iostream>

using std::cout;
using std::cin;
using std::endl;


int main() {
	double debit;
	double credit;
	Account account1(10.50);
	Account account2(100.50);

	account1.getBalance();
	account1.credit(9.99);
	cout << "Add a value to debit from account 1 with balance " << account1.getBalance() << endl;
	cin >> debit;
	account1.debit(debit);
	cout << "Current balance is: "<<account1.getBalance() << endl;
	

	account2.getBalance();

	account1.debit(10.0);
	cout << "Add a value to credit from account 2 with balance " << account2.getBalance() << endl;
	cin >> credit;
	account2.credit(credit);
	account2.debit(debit);
	cout << "Current balance is: " << account2.getBalance() << endl;
	
}