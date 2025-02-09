#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int x, y, i = 1, power = 1;

	cout << "Type the number of the power (x): ";
	cin >> x;

	cout << "Type the number of loops (y): ";
	cin >> y;

	while (i <= y)
	{
		int oldPower = power;
		power *= x;
		i++;
		cout << "Power  at i " << i-1 << " --> "<< oldPower << " = "<< oldPower << " * " << x << ": " << power << endl;
	}

	cout << endl<< endl<< "Power is: " << power << endl;

	return 0;
}
