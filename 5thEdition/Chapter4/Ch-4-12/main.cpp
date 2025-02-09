
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int y;
	int x = 1;
	int total = 0;

	
	while (x <= 10) {
		y = x * x;
		cout << y << endl;
		total += y;
		x++;
	}
	cout << "Total is: " << total << endl;
	return 0;
}
