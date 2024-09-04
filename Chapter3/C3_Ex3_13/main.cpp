#include <iostream>
#include "Invoice.h"
#include <string>
using std::cout;
using std::endl;
using std::cin;

int main() {
	Invoice item1("123456", "T-Shirt", 6, 6.66);

	cout << "Id: " << item1.getId() << endl;
	cout << "Description: " << item1.getDescription() << endl;
	cout << "Amount: " << item1.getAmount() << endl;
	cout << "Price: " << item1.getPrice() << endl;

	cout << "Total " << item1.getInvoiceAmount() << endl;

	return 0;
}