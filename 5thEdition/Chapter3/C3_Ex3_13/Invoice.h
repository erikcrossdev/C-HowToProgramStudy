#pragma once
#include <string>
using std::string;
class Invoice
{
public:
	Invoice(string id, string description, int, double);
	string getId();
	string getDescription();
	int getAmount();
	double getPrice();
	void setId(string);
	void setDescription(string);
	void setAmount(int);
	void setPrice(double);
	double getInvoiceAmount();

	private:
		string id, description;
		int amount;
		double price;
};

