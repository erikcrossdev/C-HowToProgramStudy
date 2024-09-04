#include "Invoice.h"
#include <iostream>
using std::cout;
using std::endl;


Invoice::Invoice(string id, string description, int amount, double price)
{
	setId(id);
	setDescription(description);
	setPrice(price);
	setAmount(amount);
}

string Invoice::getId()
{
	return id;
}

string Invoice::getDescription()
{
	return description;
}

int Invoice::getAmount()
{
	return amount;
}

double Invoice::getPrice()
{
	return price;
}

void Invoice::setId(string newId)
{
	id = newId;
}

void Invoice::setDescription(string newDesc) 
{
	description = newDesc;
}

void Invoice::setAmount(int newAmount)
{
	amount = newAmount;
}

void Invoice::setPrice(double newPrice) 
{
	if (price >= 0) {
		cout << "Invalid price! "<<endl;
	}
	price = newPrice;
}

double Invoice::getInvoiceAmount()
{
	double total = 0;
	
	total += price * amount;

	if (total < 0) {
		total = 0;
	}
	return total;
}
