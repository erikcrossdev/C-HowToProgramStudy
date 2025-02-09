#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	double sales, salaryTotal, salaryBase = 200.00;

	cout << "Enter the number of sales in dollars (-1 to exit): ";
	cin >> sales;

	while (sales > -1) {
		
		salaryTotal = ((sales * 9) / 100) + salaryBase;
		cout << "Salary + 9\% of commission: "<< salaryTotal<<endl<<endl;

		cout << "Enter the number of sales in dollars (-1 to exit): ";
		cin >> sales;
	}
	return 0;
}