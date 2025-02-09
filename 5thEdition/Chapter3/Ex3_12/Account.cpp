#include "Account.h"
#include <iostream>
using std::cout;
using std::endl;

Account::Account(double initial){
	
	if (initial >= 0) {
		balance = initial;
		cout << "Creating account with intial balance of: "<< balance << endl;
	}
	else {
		cout << "Initial balance was invalid, setting to zero"<<endl;
		balance = 0;
	}
}

void Account::credit(double add) {
	cout << "Adding value " << add << " to the balance" << endl;
	balance += add;
}

void Account::debit(double sub) {
	if (sub > balance) {
		cout << "Debit amount exceeded account balance"<<endl;
		return;
	}
	balance -= sub;
}

double Account::getBalance() {
	return balance;
}